#include<stdio.h>
int main()
{
    int i=6,a=0;
    loop: if(i>0)
    {
        
        a=a+i; // add the number 6 to 1
        i=i-1;
        goto loop;
    }
    printf("%d",a);

}
