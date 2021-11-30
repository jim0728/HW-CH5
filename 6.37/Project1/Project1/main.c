#include<stdio.h>
#include<stdlib.h>
#define s 5
int maxi(int *b,int n);

int main(void)
{
	int a[s] = { 34,83,22,32,41 };
	int M;
	for (int i = 0; i < s; i++)
	{
		printf("%3d", a[i]);
	}
	M = maxi(a,s);
	printf("³Ì¤j­È¬°:%d",M ) ;

	system("pause");
	return 0;

}
int maxi(int *b,int n)
{
	
	if (n == 0)
	{
		return b[0];
	}
	else
	{
		return b[n] > maxi(b, n - 1) ? b[n] : maxi(b, n - 1);
	}
}

