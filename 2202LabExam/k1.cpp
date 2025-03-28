#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    return (a>b)?a:b;
}
int knapsack(int c,int wt[],int val[],int n){
    if (n == 0 || c == 0) return 0;
   if (wt[n-1] > c) return knapsack(c,wt,val,n-1);
   else
   return max(val[n-1]+knapsack(c-wt[n-1],wt,val,n-1),
    knapsack(c,wt,val,n-1));
}

int main()
{
    int n,c;
    cout << "Enter the number of items : ";
    cin >> n;
    int val[n],wt[n];
    for(int i; i< n;i++){
        cout << " Enter weight of item " << i+1 << " : ";
        cin >> wt[i];
        cout << " Enter weight of item " << i+1 << " : ";
        cin >> val[i];
    }
    cout << "Capacity : ";
    cin >> c;
    cout << "Max Profit : " << knapsack(c,wt,val,n);

    return 0;
}