#include <stdio.h>

void *myMemcpy(void *dest, const void *src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    myMemcpy(dest, src, sizeof(src));
    printf("Copied String: %s\n", dest);

    return 0;
}

