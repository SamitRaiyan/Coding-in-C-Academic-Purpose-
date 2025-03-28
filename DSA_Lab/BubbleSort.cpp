#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the number of Inputs : ";
    cin >> size;
    int arr[size];
    cout << "Enter the digits : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    cout << "Ascending Order : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    


    return 0;
}
