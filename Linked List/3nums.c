#include<stdio.h>

int main()
{
    int a,b,c;
    float A,s;
    printf("input : ");
    scanf("%d %d %d",&a,&b,&c);
    s= (a+b+c)/2;
    printf("the half : %f",s);
    A= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Ans : %f",A);

    return 0;
}