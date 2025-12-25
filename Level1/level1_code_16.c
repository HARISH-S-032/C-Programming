#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a=a-(((a/10) % 2) * 5);
    printf("%d\n",a);
    return 0;
}