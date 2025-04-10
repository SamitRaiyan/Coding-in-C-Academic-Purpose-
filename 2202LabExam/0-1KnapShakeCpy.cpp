#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){  
  return (a > b) ? a : b;
  }
int knapSack(int W, int wt[], int val[], int n){
  if (n == 0 || W == 0)    return 0;
  if (wt[n - 1] > W)
    return knapSack(W, wt, val, n - 1);
  else
    return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
               knapSack(W, wt, val, n - 1));
}
int main()
{  
  int n, W; 
  cout << "Enter the number of items in a Knapsack : "; 
  cin >> n;
  int val[n], wt[n];
  for (int i = 0; i < n; i++)
  {    cout << "Enter value and weight for item - " << i+1 << ":";
    cin >> val[i];    
    cin >> wt[i];
  }  
  cout << "Enter the capacity of knapsack : ";
  cin >> W;  
  cout << "Max Profit" << knapSack(W, wt, val, n);
  return 0;}
