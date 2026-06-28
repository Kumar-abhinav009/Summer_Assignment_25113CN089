//Write a program to Create ticket booking system.
// Ticket Booking System

#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
    float totalFare;
};

int main()
{
    struct Ticket t;
    int choice;
    float farePerSeat = 500.0;

    printf("===== TICKET BOOKING SYSTEM =====\n");

    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    t.seats = 0;
    t.totalFare = 0;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Ticket Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                t.totalFare = t.seats * farePerSeat;

                printf("Ticket booked successfully!\n");
                break;

            case 2:
                t.seats = 0;
                t.totalFare = 0;

                printf("Ticket cancelled successfully!\n");
                break;

            case 3:
                printf("\n----- Ticket Details -----\n");
                printf("Ticket Number  : %d\n", t.ticketNo);
                printf("Passenger Name : %s\n", t.name);
                printf("Seats Booked   : %d\n", t.seats);
                printf("Total Fare     : %.2f\n", t.totalFare);
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