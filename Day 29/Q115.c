//Write a program to Create menu-driven string operations system.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[50], newstr[100];
    int choice, len, pos, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    do
    {
        printf("\n========== STRING OPERATIONS MENU ==========\n");
        printf("1. Find Length of String\n");
        printf("2. Concatenate Strings\n");
        printf("3. Copy String\n");
        printf("4. Compare Strings\n");
        printf("5. Find Substring\n");
        printf("6. Replace Substring\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                len = strlen(str);
                printf("Length of the string is: %d\n", len);
                break;

            case 2:
                printf("Enter another string to concatenate: ");
                scanf("%s", substr);
                strcat(str, substr);
                printf("Concatenated string is: %s\n", str);
                break;

            case 3:
                strcpy(newstr, str);
                printf("Copied string is: %s\n", newstr);
                break;

            case 4:
                printf("Enter another string to compare: ");
                scanf("%s", substr);
                if(strcmp(str, substr) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Enter substring to find: ");
                scanf("%s", substr);
                pos = strstr(str, substr) - str;
                if(pos >= 0)
                    printf("Substring found at position %d\n", pos);
                else
                    printf("Substring not found.\n");
                break;

            case 6:
                printf("Enter substring to replace: ");
                scanf("%s", substr);
                printf("Enter new substring: ");
                scanf("%s", newstr);
                pos = strstr(str, substr) - str;
                if(pos >= 0)
                {
                    for(i = pos + strlen(newstr); i < strlen(str); i++)
                        str[i] = str[i + strlen(substr) - strlen(newstr)];
                    for(i = pos; i < pos + strlen(newstr); i++)
                        str[i] = newstr[i - pos];
                    printf("String after replacement is: %s\n", str);
                }
                else
                    printf("Substring not found.\n");
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 7);

    return 0;
}