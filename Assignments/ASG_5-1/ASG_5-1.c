#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef long long ll;
typedef unsigned long long ull;
void readArray(int arr[], int size);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void copyArray(int arr[], int newArray[], int size);
int searchIdx(int arr[], int size, int item);
void merge(int arr[], int l, int m, int r);
void mergesort(int arr[], int l, int r);
void swap(int *, int *);
int *maxArray(int[], int);
int *minArray(int[], int);
int main()
{
    int a[SIZE];
    readArray(a, SIZE);
    // mergesort(a, 0, 4);
    printArray(a, SIZE);
    printf("\n");
    int *maxA = maxArray(a, SIZE);
    int *minA = minArray(a, SIZE);
    printf("The maximum number is %d in position %d\n", maxA[0], maxA[1]);
    printf("The minimum number is %d in position %d\n", minA[0], minA[1]);

    // by sorting
    mergesort(a, 0, SIZE - 1);
    printf("The array sorted: ");
    printArray(a, SIZE);
    printf("\n");
    printf("The maximum number is %d in position %d\n", a[SIZE - 1], SIZE - 1);
    printf("The minimum number is %d in position %d\n", a[0], 0);
}
int *maxArray(int a[], int n)
{
    int *max = (int *)malloc(2 * sizeof(int));
    int maxIdx = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        if (a[i + 1] > a[maxIdx])
            maxIdx = (i + 1);
    }
    max[0] = a[maxIdx];
    max[1] = maxIdx;
    return max;
}
int *minArray(int a[], int n)
{
    int *min = (int *)malloc(2 * sizeof(int));
    int minIdx = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        if (a[i + 1] < a[minIdx])
            minIdx = (i + 1);
    }
    min[0] = a[minIdx];
    min[1] = minIdx;
    return min;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selectionSort(int arr[], int n)
{
    int minIdx;
    for (int i = 0; i < n - 1; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(&arr[minIdx], &arr[i]);
    }
}
void bubbleSort(int arr[], int n)
{
    bool sorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                sorted = false;
            }
        }
        if (sorted)
            break;
    }
}
void copyArray(int arr[], int newArray[], int size)
{
    for (int i = 0; i < size; i++)
        newArray[i] = arr[i];
}
int searchIdx(int arr[], int size, int item)
{
    int idx;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            idx = i;
            break;
        }
    }
    return idx;
}
void merge(int arr[], int l, int m, int r)
{
    // define iterators
    int i, j, k;
    // Define sizes of two subarrays
    int SizeLeft = m - l + 1, SizeRight = r - m;
    // Define Two subarrays
    int *aLeft = (int *)malloc(SizeLeft * sizeof(int));
    int *aRight = (int *)malloc(SizeRight * sizeof(int));

    // Fill two subarrays
    for (i = 0; i < SizeLeft; i++)
    {
        aLeft[i] = arr[l + i];
    }
    for (j = 0; j < SizeRight; j++)
    {
        aRight[j] = arr[m + 1 + j];
    }
    // reset iterators
    i = j = 0;
    k = l;
    // merge two subarrays
    while (i < SizeLeft && j < SizeRight)
    {
        if (aLeft[i] <= aRight[j])
        {
            arr[k] = aLeft[i];
            i++;
        }
        else
        {
            arr[k] = aRight[j];
            j++;
        }
        k++;
    }
    while (i < SizeLeft)
    {
        arr[k] = aLeft[i];
        i++;
        k++;
    }
    while (j < SizeRight)
    {
        arr[k] = aRight[j];
        j++;
        k++;
    }
    free(aLeft);
    free(aRight);
    return;
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    return;
}