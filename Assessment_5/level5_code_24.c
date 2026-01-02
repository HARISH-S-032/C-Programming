
#include <stdio.h>
int main()  
{
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=a;i>0;i=i/10)
    {
        b=i%10;
        if(b==0 || b==1 || b==4 || b==9)
        {
            c++;
        }
    }
    printf("%d",c);
}