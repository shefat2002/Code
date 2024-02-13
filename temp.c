#include <stdio.h>
#include <string.h>


int options()                                   //User Define function to print options
{
    printf("...................\n");
    printf("[1] Add\n");
    printf("[2] Search\n");
    printf("[3] Print\n");
    printf("Choose any option: ");
    int n;
    scanf("%d" ,  &n);
    
    return n;
}


int main()
{
    char name[1000][30] , reg[1000][10], dept[1000][5], semester[1000][5];
    int n =0;                                   // n is the total number of students. n is increased by one as a student is added.
    char search[10];
    while(1){
        switch(options()){                      // Calling User define function that returns a integer value.
        case 1:                                 // Add a student to the database.
            printf("...................\n");
            printf("Enter student's name: ");
            scanf(" ");
            gets(name[n]);                      // Input nth Student's Name. gets() function allows user to take one line input(with spaces) 

            printf("Enter registration number: ");
            gets(reg[n]);                       // Input nth Student's Reg no.

            printf("Enter Department: ");
            gets(dept[n]);                      // Input nth student's dept

            printf("Enter Semester: ");
            gets(semester[n]);                  // Input nth student's semester

            n++;                                // Increment of n. The total number of student is n+1(because the array index starts with 0)

            printf("Information saved.\n");
            break;

        case 2:                                 // Search a student
            printf("...................\n");
            printf("Enter registration number: ");
            scanf(" ");
            gets(search);       
            for(int i =0;i < n ; i++){          // Search the reg no in the total number of students (0 to n-1 th index of the strings).
                if(strcmp(search, reg[i])==0){  // strcmp() is used to compare 2 string. If the both strings are same, the value will be 0.
                    printf("Student found.\n");
                    printf("Name of the student: %s\n" , name[i]);
                    break;
                }
            }
            printf("Sorry! Student not found!\n");
            break;

        case 3:                                 // Print a student's full details.
            printf("...................\n");
            printf("Enter registration number: ");
            scanf(" ");
            gets(search);
            for(int i =0;i < n ; i++){
                if(strcmp(search, reg[i])==0){
                    printf("Student's name: %s\n" , name[i]);
                    printf("Registration number: %s\n" , reg[i]);
                    printf("Department: %s\n" , dept[i]);
                    printf("Semester: %s\n" , semester[i]);
                    break;
                }
            }
            printf("Sorry! Student not found!\n");
            break;
        }
        if(n==999) break;                       // The loop will be automatic break after 1000 entries. The limit has been set to avoid infinite loop as well as data corruption.
    }


}