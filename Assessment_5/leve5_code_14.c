#include <stdio.h>
int main()
{
   int a,b,c=1,d,e,i;
   scanf("%d",&a);
   i=a;
   d=a%10;
   printf("%d",d);
   for(b=0;i>9;b++)
   {
    i=i/10;
    c=c*10;
   }
   e=(a%c)/10;
   printf("%d",e);
   printf("%d",a=a/c);

}