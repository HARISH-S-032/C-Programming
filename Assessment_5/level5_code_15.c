#include <stdio.h>
int main()
{
   int a,b,c=1,d,e,i;
   scanf("%d",&a);
   i=a;
   d=a%10;
   if(d%2==0)
   {
    printf("%d",a);
   }
   if(d%2!=0)
   {
    for(b=0;i>9;b++)
   {
    i=i/10;
    c=c*10;
   }
   e=a/c;
   printf("%d",e-1);
   printf("%d",a=a%c);
   }
}