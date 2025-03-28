#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int *ptr1,*ptr2;

    ptr1 = (int*)malloc(40);
    ptr2 = (int*)calloc(10,4);
    if(ptr1 == NULL || ptr2 == NULL){
        cout << "Memory not allocated.\n";
    }
    else{
        cout << "Memory allocated.\n";
        /*for (int  i = 1; i <= 20; i++)
        {
            printf("%d. %u\n",i,(ptr1+i));
        }*/
        
        for (int  i = 1; i <= 100; i++)
        {
            printf("%d. %u\n",i,(ptr2+i));
        }

        
        free(ptr1);
        realloc(ptr2,60);
        free(ptr2);
        cout << "Memory Freed.";

    }

    return 0;
}
