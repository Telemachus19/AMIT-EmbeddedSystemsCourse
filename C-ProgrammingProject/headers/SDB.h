#ifndef _SDB_H_
#include "STD.h"
#define _SDB_H_
#define IDS 3
typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course_ID[IDS];
    uint32 Course_grade[IDS];
    struct SimpleDb *next;
} student;
bool SDB_isFull();
uint8 SDB_GetUsedSize();
bool SDB_AddEntry();
void SDB_DeleteEntry(uint32 id);
bool SDB_ReadEntry(uint32 id);
void SDB_GetList(uint8 *count, uint32 *list);
bool SDB_DoesIdExist(uint32 id);
void SDB_APP();
#endif
