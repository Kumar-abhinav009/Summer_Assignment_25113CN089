//Write a program to Create library management system
// Library Management System

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n = 0;
    int choice, i, id, found;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo books available.\n");
                }
                else
                {
                    printf("\n----- Book Records -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", b[i].id);
                        printf("Title   : %s\n", b[i].title);
                        printf("Author  : %s\n", b[i].author);
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo books available.\n");
                }
                else
                {
                    printf("\nEnter Book ID to Search: ");
                    scanf("%d", &id);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(b[i].id == id)
                        {
                            printf("\nBook Found!\n");
                            printf("Book ID : %d\n", b[i].id);
                            printf("Title   : %s\n", b[i].title);
                            printf("Author  : %s\n", b[i].author);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found.\n");
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