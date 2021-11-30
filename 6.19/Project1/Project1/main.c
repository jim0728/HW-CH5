#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	float a[13] = { 0 };
	int dice1, dice2,total;

	srand(time(NULL));

	for (int i = 0; i < 36000; i++)
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		total = dice1 + dice2;
		++a[total];

	}
	printf("%s%17s\n", "total", "Frequency");
	for (total = 2; total <=12; total++)
	{
		printf("%4d%17.1f\n", total, a[total]);
	}
	if (a[7] / 6000 > 1.01 || a[7] /6000 < 0.983)
	{
		printf("結果不合理");
	}
	else
	{
		printf("結果合理");
	}


}