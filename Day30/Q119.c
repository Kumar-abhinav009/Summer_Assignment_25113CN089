//Write a program to Create mini employee management system
// Mini Employee Management System

#include <stdio.h>

int main()
{
    int empId[100], salary[100];
    char empName[100][50];
    char department[100][50];
    int n, i;
    int choice;
    int id, found;

    // Input number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf(" %[^\n]", empName[i]);

        printf("Department: ");
        scanf(" %[^\n]", department[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }

    do
    {
        printf("\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee\n");
        printf("3. Update Salary\n");
        printf("4. Display Highest Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Display all employee details
                printf("\nID\tName\t\tDepartment\tSalary\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%s\t\t%d\n",
                           empId[i], empName[i], department[i], salary[i]);
                }
                break;

            case 2:
                // Search employee by ID
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID         : %d\n", empId[i]);
                        printf("Name       : %s\n", empName[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %d\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 3:
                // Update salary
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%d", &salary[i]);

                        printf("Salary updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
            {
                // Display employee with highest salary
                int max = salary[0];
                int index = 0;

                for(i = 1; i < n; i++)
                {
                    if(salary[i] > max)
                    {
                        max = salary[i];
                        index = i;
                    }
                }

                printf("\nEmployee with Highest Salary\n");
                printf("ID         : %d\n", empId[index]);
                printf("Name       : %s\n", empName[index]);
                printf("Department : %s\n", department[index]);
                printf("Salary     : %d\n", salary[index]);
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