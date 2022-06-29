#include <stdio.h>

#define MAX_QUEUE_SIZE 5000
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
	long long player, kill;
	long long i;

	scanf("%lld %lld", &player, &kill);

	init(&q);

	for (i = 1; i <= player; i++)
		enqueue(&q, i);

	printf("<");

	while (player != 1)
	{
		for (i = 1; i < kill; i++)
			enqueue(&q, dequeue(&q));

		printf("%d, ", dequeue(&q));

		player--;
	}

	printf("%d>", q.queue[(q.front + 1) % MAX_QUEUE_SIZE]);
}