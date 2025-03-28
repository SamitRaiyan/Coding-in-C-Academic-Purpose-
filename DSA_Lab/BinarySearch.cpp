#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Create
    int size;
    cout << "Enter the number of Inputs : ";
    cin >> size;
    int arr[size];
    cout << "Enter the digits : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Bubble Sorting
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    // Searching 
    cout << "The value you need : ";
    int x;
    cin >> x;

    int left=0,right=size-1,middle;
    
    while (left <= right)
    {
        middle = (left+right)/2;
        if(arr[middle] == x){
            cout << "Found at : " << middle+1;
            return 0;
        }
        else if(arr[middle] < x){
            left = middle+1;
        }
        else{
            right = middle-1;
        }
    }
    cout << "Item Not Found";

    

    return 0;
}