#include <iostream>

using namespace std;

void insertion(int arr[], int size) {
    for (int i = 1; i < size; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current&&j>=0)
        {arr[j+1]=arr[j];
        j--;
            /* code */
        }
        arr[j+1]=current;
    }
    
    
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    insertion(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
return 0;
}