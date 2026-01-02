#include<stdio.h>
int main()
{
    int i=1,a=0;
    loop: if(i<6)
    {
        
        a=a+i; // add the number 1 to 5
        i=i+1;
        goto loop;
    }
    printf("%d",a);

}
