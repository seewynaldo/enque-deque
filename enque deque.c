#include <stdio.h>
void enqueue();
void dequque();
int queue[10];
int front=-1;
int rear=-1;
int data;
int main()
{
	enqueue();
	dequque();
}


	void enqueue()
	{
		main=printf("Enter the value:");
		scanf("%d,&main");
		if (rear==9)
		{
		printf("overflow");
		}
		else{
		rear=rear+1;
		queue[rear]=data;
		}
		if (front=-1)
		front=0;
		
	}
	void dequeue()
	{
		if (front==-1)
		{
		
		printf("Underflow");
		}
	
		else if(front>rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{front=front+1;
		}
	}
