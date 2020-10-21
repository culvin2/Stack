#include <bits/stdc++.h>
# define MAX 3 // kita definisikan nilai max = 3

int nilai;
int stack[MAX],top = -1;
int push (int stack[],int nilai);
int pop(int stack[]);
int peek(int stack[]);
void display (int stack[]);

int push (int stack[], int nilai)
{
	if (top == MAX-1 )
	{
		printf("\n Stack Overfloww !");
	}
	else
	{
		top++;
		stack [top] = nilai;
		return nilai;
	}
};

int pop(int stack[])
{
	if (top == -1)
	{
		printf ("\n Stack Underfloww !");
		return -1;
	}
	else
	{
		nilai = stack[top];
		top--;
		return nilai;
	}

}
int peek (int stack [])
{
	if (top ==-1)
	{
		printf ( "\n Stack is Empty !");
		return -1;
	}
	else
	{
		return (stack[top]);
	}
}

void display (int stack[])
{
	int i;
	if (top == -1)
	{
		printf("\n Stack is Empty !");
	}
	else
	{
		for (i=top; i>=0;i--){
		
		printf("\n %d", stack[i]);
			printf("\n");
	}
	}
};

int main()
{
	int option;
	int nilai;
	do {
		
		printf("\n =======Menu Utama========");
		printf("\n 1. Push  ");
		printf("\n 2. Pop   ");
		printf("\n 3. Peek  ");
		printf("\n 4. Display    ");
		printf("\n 5. Exit       ") ;
		printf("\n 6. Choooseee  ");
		scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("\n Masukkan angka  : ");
			scanf("%d",&nilai);
			push(stack,nilai);
			break;
		case 2:
			nilai = pop(stack);
			printf("\n Angka yang ingin di delet ! %d ",nilai);
			break;
		case 3:
			nilai = peek(stack);
			printf("\n Angka Teratas ! %d",nilai);
			break;
		case 4:
			display(stack);
			break;
			
		}	
	}while(option!=5);
	return 0;
}

