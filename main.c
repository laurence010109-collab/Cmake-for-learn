#include<stdio.h>
#include"head.h"

int main()
{
    int a=10,b=5;
    printf("a+b=%d\n",add(a,b));
    printf("a-b=%d\n",subtract(a,b));
    printf("a*b=%d\n",multiply(a,b));
    printf("a/b=%f\n",div(a,b));
    return 0;
}