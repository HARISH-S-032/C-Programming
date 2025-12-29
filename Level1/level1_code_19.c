#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    int d1 = x / 100;        
    int d2 = (x / 10) % 10;     
    int d3 = x % 10;       
    y = d1 + d2 + d3;
    y = (y / 10) + (y % 10);     
    y = (y / 10) + (y % 10);     
    printf("%d\n", y);
    return 0;
}