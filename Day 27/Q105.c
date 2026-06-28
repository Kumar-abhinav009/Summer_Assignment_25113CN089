//Write a program to Create student record management system.
// Student Record Management System

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student record added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo student records available.\n");
                }
                else
                {
                    printf("\n----- Student Records -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo student records available.\n");
                }
                else
                {
                    printf("\nEnter Roll Number to Search: ");
                    scanf("%d", &roll);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(s[i].roll == roll)
                        {
                            printf("\nStudent Found!\n");
                            printf("Roll Number : %d\n", s[i].roll);
                            printf("Name        : %s\n", s[i].name);
                            printf("Marks       : %.2f\n", s[i].marks);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Student record not found.\n");
                    }
                }
                break;

            case 4:
                printf("\nThank you! Exiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}