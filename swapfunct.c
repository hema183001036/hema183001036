#include<stdio.h>
int swap();

int main()
{
swap();
}
int swap()
{
    int a=10,b=20,c;
c=a;
a=b;
b=c;
printf("%d %d",a,b);
}
