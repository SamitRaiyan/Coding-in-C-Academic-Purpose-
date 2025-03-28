#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

// defining a node
struct node{
  int data;
  struct node *next;  
};

int main()
{
    //  defining a node variable
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;

    // allocating memory
    a = (struct node*) malloc(sizeof(struct node)); 
    b = (struct node*) malloc(sizeof(struct node)); 
    c = (struct node*) malloc(sizeof(struct node)); 

    //  inputting Data
    int p,q,r;
    cout << "HELLO USER  !\nInput the data : ";
    cin >> p >> q >> r;
    a->data = p;
    b->data = q;
    c->data = r;

    // pointing address
    a->next = b;
    b->next = c;
    c->next = NULL;
    // Traversing a List
    cout << "The data : ";
    while (a != NULL)
    {
        printf("%d ",a->data);
        a = a->next;
    }
    



    return 0;
}