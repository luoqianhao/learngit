//���Ұ���
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define M 30
void Input(int m, int n, int(*a)[M]);
void Search(int(*a)[M], int m, int n);
void Print(int(*a)[M], int m, int n);
int main(void)
{
	int m, n;
	int a[M][M] = { 0 };
	printf("\n����������");
	scanf("%d", &m);
	printf("\n����������");
	scanf("%d", &n);
	Input(m, n, a);
	Print(a, m, n);
	Search(a, m, n);
	getch();
	return 0;
}
void Input(int m, int n, int(*a)[M])
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		printf("��%d�У�\n", i);
		for (j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	return;
}
void Print(int(*a)[M], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return;
}
void Search(int(*a)[M], int m, int n)
{
	int i, j, y,flag=0;
	int max = 0, p = 0, q = 0;
	for (i = 0; i < m; i++)
	{
		max = a[i][0];
		for (j = 0; j < n; j++)
		{
			if (a[i][j]>max)
			{
				max = a[i][j];
				p = i;
				q = j;
			}
		}
		for (y = 0; y < m; y++)
		{
			if (max>a[y][q])
			{
				flag = 0;
			}
			else
				flag = 1;
		}
		if (flag)
		{
			printf("\n��%d�У���%d�е�%d�ǰ���\n", p, q, max);
			break;
		}
	}
	if (!flag)
		printf("\n�������ް���!\n");
	
	return;
}