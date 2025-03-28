#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count = 0;
    cout << "Input value : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       for (int  j = 0; j  < n; j++)
       {
         count = count+1;
       }
    }
    cout << " N = " << n << endl << "Count = " << count;


    return 0;
}