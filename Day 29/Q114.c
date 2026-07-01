//Write a program to Create menu-driven array operations system.
// Menu-Driven Array Operations System

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice;
    int value, position;
    int sum = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n========== ARRAY OPERATIONS MENU ==========\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Largest Element\n");
        printf("6. Find Smallest Element\n");
        printf("7. Calculate Sum of Elements\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Display array
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                // Insert element
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &position);

                printf("Enter value: ");
                scanf("%d", &value);

                if(position < 1 || position > n + 1)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(i = n; i >= position; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[position - 1] = value;
                    n++;

                    printf("Element inserted successfully.\n");
                }
                break;

            case 3:
                // Delete element
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &position);

                if(position < 1 || position > n)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(i = position - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 4:
                // Search element
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Element not found.\n");
                }
                break;

            case 5:
                // Find largest element
                value = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] > value)
                    {
                        value = arr[i];
                    }
                }

                printf("Largest Element = %d\n", value);
                break;

            case 6:
                // Find smallest element
                value = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] < value)
                    {
                        value = arr[i];
                    }
                }

                printf("Smallest Element = %d\n", value);
                break;

            case 7:
                // Calculate sum
                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                printf("Sum of Elements = %d\n", sum);
                break;

            case 8:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 8);

    return 0;
}