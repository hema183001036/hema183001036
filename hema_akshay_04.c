// 04
#include<stdio.h>
int main()
{
int a,b,temp,c,d,e,f;
printf("Enter the 6 digit value");
scanf("%d %d %d %d %d %d",&a,&f,&c,&d,&e,&b);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
}
