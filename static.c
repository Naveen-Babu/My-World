#include<stdio.h>
int i=5;
int main()
{
//int i=5;
i=f1();
printf("...in...main..%d\n",i);
}




int f1()
{
if(--i)
{
printf("%d\n",i);
printf("before....recursion\n");
i=f1();
printf("after...recursion\n");
printf("%d\n",i);
return i;
}
}




