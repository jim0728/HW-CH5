
#include <stdio.h>
#include <string.h>


void reverse()
{
	char a;
	scanf_s("%c", &a, 1);
	if (a != '\n')
	{
		reverse();
		printf("%c", a);
	}
}
int main()
{
	printf("��J�@�r��: ");
	reverse();
	return 0;
}
