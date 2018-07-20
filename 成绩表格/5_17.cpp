/*某班期终考试科目为高等数学MT，英语EN和物理PH，有5人参加考试。为评定奖学金，要求统计并输出一个表格，表格内容包括学号、各科分数、总分和平均分，并标出三门课均在90分以上者（该栏标志输出“Y”，否则输出“N”），表格形式如下：
NO	MT	EN	PH	SUM	V	>90
------------------------------------------------------
1	88	87	83	258	86	N
2	69	90	88	247	82	N
3	77	70	79	226	75	N
4	96	99	98	293	97	Y
5	77	88	90	255	85	N
**输入格式要求："%d" 提示信息："Enter No. and score as: MT EN PH\n"
**输出格式要求：
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
