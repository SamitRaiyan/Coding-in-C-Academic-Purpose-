#include<bits/stdc++.h>
using namespace std;

#define size 100
int arr[size];
int top = -1;

void push(){
    int value;
    if(top == size-1){
        cout << "No space";
        return;
    }
    cout << "Input data : ";
    cin >> value;
    arr[++top] = value;
    cout << value << " is pushed";
}

void pop(){
    if(top == -1){
        cout << "No data is inputted" << endl;
        return;
    }
    cout <<arr[top]<< " Successfully popped." << endl;
    top --;
}

void display(){
    if(top == -1){
        cout << "No data is inputted"<<endl;
    }
    cout << "The Stack : ";
    for (int  i = 0; i <=top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\nHello User!\nOptions\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    push();
        break;
    case 2:
    pop();
        break;
    case 3:
    display();
        break;
    case 4:
    cout << "Exited for option.";
        return 0;
    default:
    cout << "Wrong Input";
        break;
    }
    }
    
    
    return 0;
}