/*ĳ�����տ��Կ�ĿΪ�ߵ���ѧMT��Ӣ��EN������PH����5�˲μӿ��ԡ�Ϊ������ѧ��Ҫ��ͳ�Ʋ����һ����񣬱�����ݰ���ѧ�š����Ʒ������ֺܷ�ƽ���֣���������ſξ���90�������ߣ�������־�����Y�������������N�����������ʽ���£�
NO	MT	EN	PH	SUM	V	>90
------------------------------------------------------
1	88	87	83	258	86	N
2	69	90	88	247	82	N
3	77	70	79	226	75	N
4	96	99	98	293	97	Y
5	77	88	90	255	85	N
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter No. and score as: MT EN PH\n"
**�����ʽҪ��
"NO\tMT\tEN\tPH\tSUM\tV\t>90\n"  
"------------------------------------------------------\n"  
"%d\t%d\t%d\t%d\t%d\t%d\t%c\n"*/
#include<stdio.h>
#define M 5
#define N 3
void input(int (*a)[N]);
void account(int (*a)[N]);
int main()
{
	int a[M][N];
	printf("Enter No. and score as: MT EN PH\n");
	input(a);
	printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n");
	printf("------------------------------------------------------\n");
    account(a);
	return 0;
}
void input(int (*a)[N])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	}
}
void account(int (*a)[N])
{
	int i,j,aver[M]={0},sum[M]={0};
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			sum[i]+=a[i][j];
		}
        aver[i]=sum[i]/N;
	}
    
	j=0;
	for(i=0;i<M;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",i+1,a[i][j],a[i][j+1],a[i][j+2],sum[i],aver[i],(aver[i]>=90?'Y':'N'));
		j=0;
	}
	//printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n");
}
