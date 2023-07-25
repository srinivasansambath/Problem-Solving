#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    printf ("%d %d %d\n",a,b,c);
    /*a = a+b+c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;*/
    a = a + b;
    b = a - b;
    a = a - b;
    b = b + c;
    c = b - c;
    b = b - c;
    printf("%d %d %d", a,b,c);
    return 0;
}
