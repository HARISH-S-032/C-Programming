#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d",&a);
   c=a;
   for(b=0;c>1;b++)
   {
    c=a%10;
    a=a/10;
    printf("%d",c);

   }

}