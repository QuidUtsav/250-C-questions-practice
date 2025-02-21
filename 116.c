#include <stdio.h>

int main() {
    int num, choice;
    
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num > 0)
            printf("Positive Number\n");
        else if (num < 0)
            printf("Negative Number\n");
        else
            printf("Zero\n");
        
        printf("Do you want to continue? (1-Yes, 0-No): ");
        scanf("%d", &choice);
    } while (choice != 0);
    
    return 0;
}

