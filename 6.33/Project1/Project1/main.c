#include<stdio.h>
#define SIZE 15 

int  binarysearch(const int b[], int searchKey, int  low, int  high);

int main(void)
{
	int a[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = 2 * i;
	}
	printf("%s", "Enter a number between 0 and 28 :");
	int key;
	scanf_s("%d", &key);

	int result = binarysearch(a, key, 0, SIZE - 1);

	if (result != -1)
	{
		printf("\n%d found at index %d\n", key, result);
	}
	else
	{
		printf("\n%d not found\n", key);
	}
}

int  binarysearch(const int b[], int searchKey, int  low, int  high)
{
	if (low > high)
	{
		return -1;
	 }
	
		int middle = (low + high) / 2;
		
		if (searchKey == b[middle])
		{
			return middle;
		}
		else if (searchKey < b[middle])
		{
			high = middle - 1;
			return  binarysearch(b, searchKey, low, high);
		}
		else
		{
			low = middle + 1;
			return  binarysearch(b, searchKey, low, high);
		}
	
	
}