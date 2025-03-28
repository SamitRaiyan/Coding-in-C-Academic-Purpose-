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
    //  Linear search
    cout << "The value you need : ";
    int x,pos = -1;
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if(x == arr[i]){
            pos = i+1;
            break;
        }
    }
        if(pos == -1)
        cout << "Not Found";
        else
        cout << "The position : " << pos;

    
    


    return 0;
}