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

element peek(QueueType* q)
{
	return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
}


int main()
{
	QueueType q;

	int n, w, L;
	int i, j;
	int time = 0, current_weight = 0, truck_time[1002], truck_weight[1002], first = 0, last = 0;

	scanf("%d %d %d", &n, &w, &L);

	init(&q);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &j);
		enqueue(&q, j);
	}

	truck_weight[last] = dequeue(&q);
	current_weight += truck_weight[last];
	truck_time[last] = w;
	last++;

	while (n != 0)
	{
		for (i = first+1; i < last; i++)
			truck_time[i]--;

		truck_time[first]--;

		if (truck_time[first] == 0)
		{
			current_weight -= truck_weight[first];
			first++;
			n--;
		}

		if (current_weight + peek(&q) <= L && q.front != q.rear)
		{
			truck_weight[last] = dequeue(&q);
			current_weight += truck_weight[last];
			truck_time[last] = w;
			last++;
		}

		time++;
	}
	printf("%d", time+1);
}