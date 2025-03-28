#include<stdio.h>
#define CAP 10
int stack[CAP];
int high = -1;

//  Push 
void push(int x){
    if(high<CAP-1){
        high +=1;
        stack[high] = x;
        printf("Successfully added : %d\n",x);
    }
    else{
        printf("Exception : No space .\n");
    }
}

//  Pop
int pop(){
   if(high>=0){
    int val = stack[high];
    high -= 1;
    return val;
   }
    printf("Exception : Stack Empty\n");
  return -1;
};

//  Peek
int peek(){
   if(high>=0){
    return printf("The value : %d\n",stack[high]);
   }
   else{ 
   printf("Exception : Stack Empty\n");
   } 
  return -1;
};

//  Main Function
int main()
{   
    // printf("The value is : %d\n",peek());
    peek();
    push(30);
    push(301);
    push(303);
    // printf("The value is : %d\n",peek());
    peek();
    pop();
    peek();
    // printf("The value is : %d\n",peek());
}