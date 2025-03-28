#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
}

int main()
{
    int length;
    cout << "Enter the number of digits : ";
    cin >> length;
    int arr[length];
    cout  << "Input the digits : ";
    for (int  i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Insertion : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    selection(arr,length);

    cout << "After Insertion : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    
    return 0;
}