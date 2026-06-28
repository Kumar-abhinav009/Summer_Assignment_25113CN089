//Write a program to Create salary management system.
// Salary Management System

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice, i;

    do
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                // Calculate HRA (20%) and DA (10%)
                emp[n].hra = emp[n].basicSalary * 0.20;
                emp[n].da = emp[n].basicSalary * 0.10;

                // Calculate Net Salary
                emp[n].netSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                printf("Salary record added successfully!\n");
                n++;
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo salary records available.\n");
                }
                else
                {
                    printf("\n----- Salary Details -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("Employee ID  : %d\n", emp[i].id);
                        printf("Name         : %s\n", emp[i].name);
                        printf("Basic Salary : %.2f\n", emp[i].basicSalary);
                        printf("HRA          : %.2f\n", emp[i].hra);
                        printf("DA           : %.2f\n", emp[i].da);
                        printf("Net Salary   : %.2f\n", emp[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("\nThank you! Exiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}