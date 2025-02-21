#include <stdio.h>

int main() {
    int age, i, baby = 0, school = 0, adult = 0;
    
    for (i = 1; i <= 15; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);
        
        if (age < 5) {
            baby++;
        } else if (age >= 5 && age < 18) {
            school++;
        } else {
            adult++;
        }
    }
    
    printf("Baby Age Count: %d\n", baby);
    printf("School Age Count: %d\n", school);
    printf("Adult Age Count: %d\n", adult);
    
    return 0;
}

