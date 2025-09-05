#include<stdio.h>
#define size 20
void insert(int *ptr);
void delete(int *ptr);
void display(int *ptr);
int count=0;
void main()
   {
    int arr[size], *pointer;
    int i,opt;
    for(i=0;i<size; i++)
    arr[i]=-1;
    pointer=&arr[0];
    do {
        printf("Select option:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&opt);
        switch(opt){
                    case 1: insert(pointer);
                            break;
                    case 2: delete (pointer);
                            break;
                    case 3: display (pointer);
                            break;
                    case 4: printf("Exit");
                            break;
                    default: printf("Invalid input");
                    }
        }while(opt!=4);
    }

void insert(int *ptr)
    {
        int data, pos;
        int *q;
        printf("Enter the element and position of insertion: \n");
        scanf("%d %d", &data, &pos);
        q=ptr+size-1;
        for(int i=size-1; i>pos-1; i--) //Right shifting
            {
                *q= *(q-1);
                q--;
            }
        *q= data;
    }

void display(int *ptr)
    {
        printf("\n");
        for(int i=0; i < size; i++)
            printf("%d ", *(ptr+i));
    }        

void delete(int *ptr)
    {
        int pos, *q;
        printf("Enter a value to search:\n");
        scanf("%d", &pos);
        for(int i=0; i<size-1; i++)
            *ptr= *(ptr+1);
    }    