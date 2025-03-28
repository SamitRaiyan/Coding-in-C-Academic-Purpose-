#include<bits/stdc++.h>
using namespace std;
int top = -1;
int bottom = 0;
int arr[100];

void push(){
    int value;
    if(top == 99){
        cout << "No Space";
        return;
    }
    cout << "Enter the value : ";
    cin >> value ;
    arr[++top] = value;
    cout << "Pushed"<<endl;
}

void pop(){
    if(top == -1 || bottom > top){
        cout << "Queue is empty.\n";
        return;
    }
    cout << arr[bottom] << " is popped"<<endl;
    bottom++;
}

void display(){
    if(top ==-1){
        cout << "Queue is empty.\n";
        return;
    }
    cout<< "The Queue : ";
    for (int i = bottom; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

}

int main(){
    
 int op;
 while (1)
 {
    cout << "1.Push a data\n2.Pop a data\n3.Display\n4.Exit\nWhich Operation you want to try : ";
 cin >>op;
   switch (op)
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
    cout << "Exited";
    return 0;
 default:
  cout << "Wrong.";
    break;
 }
 }
 
 return 0;
}