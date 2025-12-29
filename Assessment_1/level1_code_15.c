#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    num = num - ((num % 2) * 5);
    printf("%d\n", num);
    return 0;
}