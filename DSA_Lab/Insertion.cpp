#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j =i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        
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
    
    insertion(arr,length);

    cout << "After Insertion : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    
    return 0;
}