#include <stdio.h>
int a, b, c = 0;
void prtFun (void);
int main ()
{
    int a = 1; /* line 1 */
    prtFun();
    a += 1;
    //a=10;
printf ( "n %d\n " , a) ;
    prtFun();
    printf ( "n %d %d\n " , a, b) ;
    prtFun();
    printf ( "n %d %d\n " , a, b) ;
}
  
void prtFun (void)
{
    static int a = 2; /* line 2 */
    static int b = 1;
    a += ++b;
    printf (" n %d %d\n " , a, b);
}
