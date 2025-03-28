#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    int x =5;
    ptr = &x;
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",x);
    return 0;
}