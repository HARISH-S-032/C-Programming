#include <stdio.h>

int main() {
    int a,b,c=0;
    scanf("%d", &a);
    b=a%10;
    c=c+b;
    b=a/10;
    c=c+b;
    a = a - ((c % 2) * 5);
    printf("%d", a);
}
