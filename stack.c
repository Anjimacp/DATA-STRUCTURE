#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
int ch;
while(1)
{
printf("\n*** Stack Menu ***");
printf("\n\n\t1.Insertion of an element\n\t2.Deletion of an element\n\t3.Display the stack elements \n\t4.Exit");
printf("\n\nChoose your choice(1-4):");
scanf("%d",&ch);
    switch(ch)
        {
            case 1: push();
                    printf("\n_________________________________________________________________\n");
                    display();
                    printf("\n_________________________________________________________________\n");
                    break;
            case 2: pop();
                     printf("\n_________________________________________________________________\n");
                     display();
                     printf("\n_________________________________________________________________\n");
                     break;
            case 3: display();
                     printf("\n_________________________________________________________________\n");
                     break;
            case 4: exit(0);

            default: printf("\nWrong Choice!!");
        }
}
}

void push()
{
int val;
if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}

void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
printf("\n the resultend stack is  \n");
for(int i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}

void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
