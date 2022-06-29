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
	long long player, stage, fail;
	long long i;

	scanf("%lld", &player);

	if (player < 3)
	{
		printf("%lld", player);
		return 0;
	}

	init(&q);

	for (i = 2; i <= player; i++)
		enqueue(&q, i);

	player--;
	stage = 2;

	while (player != 1)
	{
		fail = stage * stage * stage; 
		if (fail % player == 0)
			fail = player;
		else
			fail %= player;

		for (i = 1; i < fail; i++)
		{
			enqueue(&q, dequeue(&q));
			i=i;
		}
			
		dequeue(&q);

		player--;
		stage++;
	}

	printf("%d", q.queue[(q.front + 1) % MAX_QUEUE_SIZE]);
}