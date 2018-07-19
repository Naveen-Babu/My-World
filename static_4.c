#include<stdio.h> 
int tmp=20;
main( )
{
int r;
printf("%d ",tmp);
func( );
printf("r=%d tmp=%d ",r,tmp);
}

int func( )
{
static int tmp=10;
printf("%d ",tmp);
return tmp;
}

