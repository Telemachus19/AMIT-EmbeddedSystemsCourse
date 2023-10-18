# AMIT - C Programming Project

- [x] Create `STD.h` which have the following data types:
    - `typedef unsigned char uint8`
    - `typedef char int8`
    - `typedef unsigned short uint16`
    - `typedef short int16`
    - `typedef unsigned int uint32`
    - `typedef int in32`
    - `typedef enum {false, true} bool`
- [x] `SDB.h` to have the function declaration that you use in the project and the following datatype
    - ```c
        typedef struct SimpleDb{
            uint32 Student_ID;
            uint32 Student_year;
            uint32 Course1_ID;
            uint32 Course1_grade;
            uint32 Course2_ID;
            uint32 Course2_grade;
            uint32 Course3_ID;
            uint32 Course3_grade;
        } student;
        ```
    - *Create The database with maximum 10 students and minimum 3 students*
- [x] `SDC.c` which have the following functions
    - `bool SDB_isFull()`
        - __Description:__ check if the database is full or not
        - __Return:__ `true` if database is full, else `false`
    - `uint8 SDB_GetUsedSize()`
        - __Description:__ get how many students in your database have been added.
        - __Return:__ return the number of students.
    - `bool SDB_AddEntry()`
        * __Description:__ When the user chooses to add entry this function asks him for the required data in the database to add one student which is his (id, year, Course1_ID, Course1_grade, Course2_ID, Course2_grade, Course3_ID, and Course3_grade) and then add to your database.
        * __Return:__ return 1 if the data is added successfully return 0 if the data not added to your database which depend on the input of the user whether is the data entered is correct or not and the data is full or not
    - `void SDB_DeleteEntry (uint32 id)`
        * __Description:__ delete the student data with the given id.
    - `bool SDB_ReadEntry (uint32 id)`
        * __Description:__ print the data of the user by searching on his data by the given id
        * __Return:__ return 1 if the data is existed return 0 if this id not your database.
    - `void SDB_GetList (uint8 * count, uint32 * list) `
        * __Description:__ it gets the number of ids in the count and the list of all ids in list array that’s you get his base address.
    - `bool SDB_IsIdExist (uint32 id)`
        * __Description:__ Checks if the given id the is Exist
        * __Return:__ return 1 if the id is existed and return 0 if the id not found.
- [x] Cerate `SDBAPP.c` which have the following function
    - `void SDB_APP()`
        * __Description:__ it has a super loop it will make your project until the user chose to exit you will ask the user to choose between these options
        1. To add entry, enter 1
        2. To get used size in database, enter 2
        3. To read student data, enter 3
        4. To get the list of all student IDs, enter 4
        5. To check is ID is existed, enter 5
        6. To delete student data, enter 6
        7. To check is database is full, enter 7
        8. To exit enter 0
    - then it will call the `SDB_action`
        - `void SDB_action (uint8 choice)`
            - __Description:__ it well takes the user choice and call the responding function for this choice. You make the right response to give a valid Output for the user
- [x] In your main.c
    - Just call `SDB_APP()` that’s will start your program
    - *Notes*
        - You have to follow the modular programming concept that’s you have taken during the c sessions.
        - You will need to comment every function how to well work depend in you implantation and why you implement it in this way.
        - You need to make at least 2 min screen recorded video demonstrate all of your work and why you implement the functions this way and showing your program how it works.