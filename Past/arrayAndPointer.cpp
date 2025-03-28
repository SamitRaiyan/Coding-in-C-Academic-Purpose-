#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit[] = {1,2,3,4,5};
    int sum = 0;
    for (int  i = 0; i < 5; i++)
    {
        // printf("%u \n",&digit[i]);
        printf("%d ",*(digit+i));
         sum += *(digit+i);
    }
    cout << "\n";
    cout << sum;
    // printf("Address : %u \n",&digit);
}