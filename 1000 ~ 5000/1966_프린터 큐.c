#include <stdio.h>

#define MAX_QUEUE_SIZE 105
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
	int T, N, M, doc;
	int i, max;
	int first, last, level[10];
	int count;
	QueueType q;

	scanf("%d", &T);

	while (T--)
	{
		for (i = 0; i < 10; i++)
			level[i] = 0;

		count = 0;
		init(&q);
		scanf("%d %d", &N, &M);

		for (i = 0; i < N; i++)
		{
			scanf("%d", &doc);
			enqueue(&q, doc);
			level[doc]++;
		}

		for (i = 9; i >= 0; i--)
			if (level[i] != 0)
			{
				max = i;
				break;
			}

		while (M > -1)
		{
			first = (q.front + 1 ) % MAX_QUEUE_SIZE;
			last = (q.rear + 1) % MAX_QUEUE_SIZE;

			if (q.queue[first] != max)
			{
				enqueue(&q, dequeue(&q));
				M--;
				if (M == -1)
					M = N -1;
				continue;
			}

			dequeue(&q);
			M--;
			N--;
			count++;

			level[max]--;
			if (level[max] == 0)
				for (i = max - 1; i >= 0; i--)
					if (level[i] != 0)
					{
						max = i;
						break;
					}
		}

		printf("%d\n", count);
	}
}