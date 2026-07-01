//Write a program to Create student record system using arrays and strings
#include <stdio.h>

int main()
{
    int rollNo[100], marks[100];
    char name[100][50];
    int n, i;
    int choice;
    int roll, found;

    // Enter number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Name: ");
        scanf(" %[^\n]", name[i]);   // Reads full name with spaces

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    do
    {
        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Update Marks\n");
        printf("4. Display Highest Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Display all student records
                printf("\nRoll No\tName\t\tMarks\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%d\n",
                           rollNo[i], name[i], marks[i]);
                }
                break;

            case 2:
                // Search student
                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(rollNo[i] == roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll No : %d\n", rollNo[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student not found.\n");
                }
                break;

            case 3:
                // Update marks
                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(rollNo[i] == roll)
                    {
                        printf("Enter New Marks: ");
                        scanf("%d", &marks[i]);

                        printf("Marks updated successfully.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student not found.\n");
                }
                break;

            case 4:
            {
                // Display student with highest marks
                int max = marks[0];
                int index = 0;

                for(i = 1; i < n; i++)
                {
                    if(marks[i] > max)
                    {
                        max = marks[i];
                        index = i;
                    }
                }

                printf("\nTop Student Details\n");
                printf("Roll No : %d\n", rollNo[index]);
                printf("Name    : %s\n", name[index]);
                printf("Marks   : %d\n", marks[index]);
                break;
            }

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}