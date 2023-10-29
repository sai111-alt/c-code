#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<windows.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%5d", i);
		count++;
		if (10 == count)
		{
			printf("\n");
			count = 0;
		}
	}
	system("pause");

	return 0;
}