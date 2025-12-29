#include <stdio.h>
int main()
{
    int i,a,prime;
    scanf("%d",&i);
    if(i==2)
    {
        printf("Prime");
        return 0;
    }
    if(i%2==0)
    {
        printf("Not Prime");
        return 0;
    }
    a=2;
   loop:
   if(a<i)
   { if(i%a==0)
    {
        printf("Not Prime");
        return 0;
    }
    if(i%a!=0)
    {
       prime=1; 
    }
    a=a+1;
    goto loop;
}
    if(prime==1)
    {
        printf("Prime");
    }


}