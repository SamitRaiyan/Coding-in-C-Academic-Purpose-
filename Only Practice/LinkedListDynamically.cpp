#include<bits/stdc++.h>
using namespace std;

//Create Node
 typedef struct myList{
 int data;
 struct myList *next;
 }node;


// Creation + Insertion
void insert(node *s, int data) {
    if (s == NULL) {
        s = (node*) malloc(sizeof(node));
        s->data = data;
        s->next = NULL;
        return;
    }
    while (s->next != NULL) {
        s = s->next;
    }
    s->next = (node*) malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}

 void insertMany(node *head){
    cout << "Number of data : ";
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Give input : ";
        int value;
        cin >> value;
        insert(head,value);
    }
    

 }


// Display
void display(node *s){
    cout << "The output is : ";
    while (s->next != NULL)
    {
        cout << s->next->data << " ";
        s = s->next;
    }
    
}


// Search
void search(node *s,int data){
    int count = 0;
    while (s->next != NULL)
    {
        if(s->next->data == data){
            count++;
        }
        s=s->next;
    }
    cout << "Data founded : " << count << " times";
}


// Delete
void deleteNode(node *s,int data){
     while (s->next != NULL)
    {
        if(s->next->data == data){
            node* temp = s->next;
            s->next = s->next->next;
            free(temp);
            return;
        }
        s=s->next;
    }
    
}

int main(){
    node* head = (node*) malloc(sizeof(node));
    head-> next = NULL;

    int del,s;
    
    insertMany(head);

    display(head);

    cout << "\nThe data you search : ";
    cin >> s;
    search(head,s);

    cout << "\nThe data you delete : ";
    cin >> del;
    deleteNode(head,del);
    display(head);


    return 0;
}