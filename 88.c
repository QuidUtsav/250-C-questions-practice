#include <stdio.h>

int main() {
    int choice;
    double balance = 1000, amount;
    
    printf("ATM Menu:\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\nEnter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Balance: $%.2lf\n", balance);
            break;
        case 2:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            balance += amount;
            printf("Updated Balance: $%.2lf\n", balance);
            break;
        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);
            if (amount > balance)
                printf("Insufficient Balance!\n");
            else {
                balance -= amount;
                printf("Updated Balance: $%.2lf\n", balance);
            }
            break;
        default:
            printf("Invalid Choice!\n");
    }
    
    return 0;
}

