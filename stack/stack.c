#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10
#define boolean	unsigned char
#define true 1 
#define false 0

typedef char Element;

// Global stack 
Element stack[MAX_SIZE]; 
int top = -1;

void push(Element e); 
Element pop(); 
void stack_show();

int main()
{
	char c, e;
	
	while (1) 
	{
		printf("\nCommand> ");
		c = getch();
		putch(c); 
		c = toupper(c);

		switch (c) 
		{
		case '+': 
			e = getch(); 
			putch(e); 
			push(e); 
			break;
		case '-': 
			e = pop(); 
			printf("\n %c \n", e);
			break;
		case 'S': 
			stack_show(); 
			break; 
		case 'Q': 
			printf("\n"); 
			exit(1); 
		default: 
			break;
		}
	}

	return 0;
}

void push(Element e)
{
	if (top == 9)printf("\n Stack is full !!!\n");
	else stack[++top] = e;
}

Element pop()
{
	if (top == -1)
	{
		printf("\n Stack is empty !!!");
		return '\0';
	}
	else return stack[top--];	
}

void stack_show()
{
	putchar('\n');
	for (int i = 0; i < top + 1; i++)
		printf(" %c", stack[i]);
	putchar('\n');
}
