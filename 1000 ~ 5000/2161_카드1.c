#include <stdio.h>
#include <string.h>

#define MAX_QUEUE_SIZE 1000
typedef int element;
typedef struct
{
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

void init(QueueType* q)
{
	q->front = q->rear = 0;
}

element dequeue(QueueType* q)
{

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

void enqueue(QueueType* q, element item)
{
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->queue[q->rear] = item;
}

int main()
{
	QueueType q;

	int N, i;

	scanf("%d", &N);

	if (N < 3)
	{
		for (i = 1; i <= N; i++)
			printf("%d ", i);
		return 0;
	}

	init(&q);

	for (i = 3; i <= N; i++)
		enqueue(&q, i);
	enqueue(&q, 2);

	printf("1");

	while (N != 1)
	{
		printf(" %d", dequeue(&q));
		enqueue(&q, dequeue(&q));
		N--;
	}
}