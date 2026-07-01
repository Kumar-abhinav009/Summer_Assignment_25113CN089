//Write a program to Create mini library system
// Mini Library System using Arrays and Strings

#include <stdio.h>

int main()
{
    int bookId[100];
    char bookName[100][50];
    char author[100][50];
    int quantity[100];
    int n, i;
    int choice;
    int id, found;

    // Input number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Name: ");
        scanf(" %[^\n]", bookName[i]);

        printf("Author Name: ");
        scanf(" %[^\n]", author[i]);

        printf("Quantity: ");
        scanf("%d", &quantity[i]);
    }

    do
    {
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Display All Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Display all books
                printf("\nID\tBook Name\t\tAuthor\t\tQuantity\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%s\t\t%d\n",
                           bookId[i], bookName[i], author[i], quantity[i]);
                }
                break;

            case 2:
                // Search a book by ID
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID   : %d\n", bookId[i]);
                        printf("Book Name : %s\n", bookName[i]);
                        printf("Author    : %s\n", author[i]);
                        printf("Quantity  : %d\n", quantity[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }
                break;

            case 3:
                // Issue book
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        found = 1;

                        if(quantity[i] > 0)
                        {
                            quantity[i]--;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book is not available.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                // Return book
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        quantity[i]++;
                        printf("Book returned successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }
                break;

            case 5:
                printf("Thank you! Exiting the program.\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}