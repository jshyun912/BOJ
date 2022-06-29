#include <stdio.h>
#include <string.h>

#define MAX_QUEUE_SIZE 10000
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
	if (q->front == q->rear)
		return -1;

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

	int N, i, input;
	char order[6];

	scanf("%d", &N);

	init(&q);

	for (i = 0; i < N; i++)
	{
		scanf("%s", order);

		if (strcmp(order, "push") == 0)
		{
			scanf("%d", &input);
			enqueue(&q, input);
		}

		else if (strcmp(order, "pop") == 0)
			printf("%d\n", dequeue(&q));

		else if (strcmp(order, "size") == 0)
		{
			if (q.rear < q.front)
				printf("%d\n", q.front - q.rear);
			else
				printf("%d\n", q.rear - q.front);
		}
		else if (strcmp(order, "empty") == 0)
		{
			if (q.rear == q.front)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(order, "front") == 0)
		{
			if (q.rear == q.front)
				printf("-1\n");
			else
				printf("%d\n", q.queue[(q.front + 1) % MAX_QUEUE_SIZE]);
		}
		else
		{
			if (q.rear == q.front)
				printf("-1\n");
			else
				printf("%d\n", q.queue[(q.rear) % MAX_QUEUE_SIZE]);
		}
	}
}