#include <stdio.h>

int main() {
    int arr[5], *ptr;
    printf("Enter 5 elements: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    ptr = arr;
    for (int i = 0; i < 5; i++)
        printf("Element: %d, Address: %p\n", *ptr, ptr++);
    return 0;
}

