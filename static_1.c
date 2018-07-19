#include<stdio.h>
main()
{
int i, a,b,result=0;
printf("enter two  numbers");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
 result+=a;
}
printf("%d*%d=%d",a,b,result);
}

