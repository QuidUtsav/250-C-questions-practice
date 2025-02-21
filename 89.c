#include <stdio.h>

int main() {
    double height;
    printf("Enter height (in cm): ");
    scanf("%lf", &height);
    
    if (height < 150)
        printf("Dwarf\n");
    else if (height <= 180)
        printf("Average Height\n");
    else
        printf("Tall\n");
    
    return 0;
}

