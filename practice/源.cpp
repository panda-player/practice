#include<stdio.h>
int main()
{
	int arr1[5] = { 0 };
	int* pa = arr1;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(pa + i));
	}
	return 0;
}