#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    y=x/100;
    printf("%d",y);
    printf("0");
    y=x%10;
    printf("%d",y);
}