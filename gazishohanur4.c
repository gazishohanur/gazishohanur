#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("Value: %d\n", x);
    printf("Address: %p\n", ptr);
    return 0;
}