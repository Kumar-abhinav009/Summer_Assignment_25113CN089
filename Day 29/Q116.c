//Write a program to Create inventory management system
#include <stdio.h>

int main()
{
    int itemCode[100], quantity[100];
    float price[100];
    int n, i;
    int choice;
    int code, found;

    // Enter number of items
    printf("Enter number of items: ");
    scanf("%d", &n);

    // Input item details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item Code: ");
        scanf("%d", &itemCode[i]);

        printf("Quantity: ");
        scanf("%d", &quantity[i]);

        printf("Price: ");
        scanf("%f", &price[i]);
    }

    do
    {
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Display Inventory\n");
        printf("2. Search Item\n");
        printf("3. Update Quantity\n");
        printf("4. Calculate Total Inventory Value\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Display all items
                printf("\nCode\tQuantity\tPrice\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%d\t\t%.2f\n",
                           itemCode[i], quantity[i], price[i]);
                }
                break;

            case 2:
                // Search an item
                printf("Enter Item Code: ");
                scanf("%d", &code);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(itemCode[i] == code)
                    {
                        printf("\nItem Found\n");
                        printf("Code     : %d\n", itemCode[i]);
                        printf("Quantity : %d\n", quantity[i]);
                        printf("Price    : %.2f\n", price[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Item not found.\n");
                }
                break;

            case 3:
                // Update quantity
                printf("Enter Item Code: ");
                scanf("%d", &code);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(itemCode[i] == code)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &quantity[i]);

                        printf("Quantity updated successfully.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Item not found.\n");
                }
                break;

            case 4:
            {
                // Calculate total inventory value
                float total = 0;

                for(i = 0; i < n; i++)
                {
                    total = total + (quantity[i] * price[i]);
                }

                printf("Total Inventory Value = %.2f\n", total);
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