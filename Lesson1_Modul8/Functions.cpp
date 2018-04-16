#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>
void zapMass(char *mass, int *col, int *str)
{
	int i, j;
	for (i = 0;i < *str;i++)
	{
		for (j = 0;j < *col;j++)
		{
			*(mass + i**col + j) = 33 + rand() % 10;
		}
	}
}
void printmass(char *mass, int *col, int *str)
{
	int i, j;
	for (i = 0;i < *str;i++)
	{
		for (j = 0;j < *col;j++)
		{
			printf("%c\t", *(mass + i**col + j));
		}
		printf("\n");
	}
}
void searchSimbol(char*mass, int *col, int *str)
{
	int i, j;
	int chek = 0;
	for (i = 0;i < *str;i++)
	{
		for (j = 0;j < *col;j++)
		{
			if ((*(mass + i**col + j) == '+') || (*(mass + i**col + j) == '-') || (*(mass + i**col + j) == '*'))
				chek++;
		}
	}
	printf("סטלגמכû '+' '-' '*' גסענוקאבעסÿ %d נאח\n", chek);
}