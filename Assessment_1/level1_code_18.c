#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a=a-((((a%10)%2)*((a/100)%2))* 5);
    printf("%d",a);
    return 0;
}