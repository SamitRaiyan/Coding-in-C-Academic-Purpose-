#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return (a>b)?a:b;
}
int knapsack(int W,int val[],int wt[],int n){
  if(n == 0 || W == 0) return 0;
  if(wt[n-1]> W) return knapsack(W,val,wt,n-1);
  else
  return max(val[n-1]+knapsack(W-wt[n-1],val,wt,n-1),
        knapsack(W,val,wt,n-1));
}

int main()
{
    int n,W;
    cout << "Enter the number of items : ";
    cin >> n;
    int val[n],wt[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value and weight for item - " << i+1 << ":";
     cin >> val[i];
     cin >> wt[i];
    }
    cout << "Capacity of Knapsack : ";
    cin >> W;
    cout << "Max Profit : " << knapsack(W,val,wt,n) ;
    
    return 0;
}