#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *createLinkedList(int arr[],int arrSize){
    struct node *head =NULL,*temp=NULL,*current = NULL;
    for (int i = 0; i < arrSize; i++)
    {
       temp =(struct node *)malloc(sizeof(struct node));
       temp->data = arr[i];
       temp->next = NULL;
       if(head == NULL){
        head = temp;
        current = temp;
       }
       else{
        current->next = temp;
        current = current->next;
       }
       }
       return head;
    
}
/*
// Searching an element
 int searchLinkedList(struct node *head,int value){
    int index = 1;
    while (head != NULL)
    {
        if(head->data == value){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
 }
*/

int main()
{
    int n;
    cout << "HELLO USER!\nInput the number of digits : ";
    cin >> n;
    int num[n];
    cout << "Enter the digits : ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    struct node *head;
    head = createLinkedList(num,n);
    cout << "The Array : ";
    //  Array 
    while (head != NULL)
    {
      printf("%d ", head->data);
      head = head->next;
    }
    /*
    // Searching a value 
    cout << "\nThe value you need :";
    int v;
    cin >> v;
    int result = searchLinkedList(head,v);
    cout << result;
    // printf("Ans : %d",searchLinkedList(head,v));

    */
    


    return 0;
}