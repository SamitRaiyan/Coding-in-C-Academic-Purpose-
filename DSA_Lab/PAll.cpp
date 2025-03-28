#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    int arr[size];
    cout << "Enter the inputs : ";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }
    
    for (int i = 0; i < size-1; i++)
    {
        /* code */
        for (int j = 0; j < size-i-1; j++)
        {
            /* code */
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
        
    }
    cout << "Ascending Order : ";
    for (int  i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    // Binary Search 
    int x;
    cout << "\nValue : ";
    cin >> x;
    int left = 0,right = size - 1,middle;
    
    while (left<=right)
    {
        /* code */
        middle = (left+right)/2;
        if(arr[middle] == x){
            cout << x << " founded at : " << middle+1;
            return 0;
        }
        else if(arr[middle] < x){
            left = middle+1;
        }
        else
        {
            right = middle -1;
        }
    }
    cout << "Not found";
    

    return 0;
    
}