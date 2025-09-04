#include <stdio.h>

int main() {
    int choice, tickets, totalTickets = 0;
    float totalCost = 0, discount = 0;

    do {
        
        printf("\n===== Cinema Ticket Booking System =====\n");
        printf("1. Premium Seat - Rs.200\n");
        printf("2. Standard Seat - Rs.150\n");
        printf("3. Economy Seat - Rs.100\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Enter number of tickets: ");
            scanf("%d", &tickets);

            switch (choice) {
                case 1:
                    totalCost += tickets * 200;
                    break;
                case 2:
                    totalCost += tickets * 150;
                    break;
                case 3:
                    totalCost += tickets * 100;
                    break;
            }

            totalTickets += tickets;
            printf("Tickets added successfully!\n");
        } 
        else if (choice != 4) {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    
    if (totalTickets >= 5) {
        discount = totalCost * 0.05;
        totalCost -= discount;
    }

    
    printf("\n===== Final Bill =====\n");
    printf("Total Tickets: %d\n", totalTickets);
    printf("Discount: Rs.%.2f\n", discount);
    printf("Total Amount to Pay: Rs.%.2f\n", totalCost);
    printf("======================\n");

    return 0;
}