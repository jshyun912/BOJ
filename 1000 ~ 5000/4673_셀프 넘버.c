#include <stdio.h>

main()
{
	int table[10500] = {0};
	int start = 1;
	int self;

	while(start < 10)
	{
		table[start*2]++;
		start++;
	}

	while(start < 100)
	{
		self = start + (start/10) + (start%10);
		table[self]++; 
		start++;
	} 
	while(start < 1000)
	{
		self = start + (start/100) + ((start%100)/10) + (start%10);
		table[self]++; 
		start++;
	}
	while(start < 10000)
	{
		self = start + (start/1000) + ((start%1000)/100) + ((start%100)/10) + (start%10);
		table[self]++; 
		start++;
	}

	for(self=1; self<=10000; self++)
	{
		if(table[self]==0)
			printf("%d\n", self);
	}
}