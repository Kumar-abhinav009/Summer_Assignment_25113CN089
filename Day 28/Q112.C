//Write a program to Create contact management system
// Contact Management System

#include <stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n = 0;
    int choice, i, id, found;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Contact ID: ");
                scanf("%d", &c[n].id);

                printf("Enter Contact Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo contacts available.\n");
                }
                else
                {
                    printf("\n----- Contact List -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Contact ID   : %d\n", c[i].id);
                        printf("Name         : %s\n", c[i].name);
                        printf("Phone Number : %s\n", c[i].phone);
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo contacts available.\n");
                }
                else
                {
                    printf("\nEnter Contact ID to Search: ");
                    scanf("%d", &id);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(c[i].id == id)
                        {
                            printf("\nContact Found!\n");
                            printf("Contact ID   : %d\n", c[i].id);
                            printf("Name         : %s\n", c[i].name);
                            printf("Phone Number : %s\n", c[i].phone);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Contact not found.\n");
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