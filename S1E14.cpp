//0. 请写一个程序，帮小甲鱼计算 20 公斤内的运费。（顺丰起步价 23 元，每超一公斤加 14 元）
/*
#include <stdio.h>
int main()
#define FIRST_KG 23
#define NEXT_KG 14
{
	int weight,cost;
	
	for(weight = 1 , cost = FIRST_KG;weight <= 20;weight++,cost += NEXT_KG)
	{
		printf("%-3d ---%3d\n",weight,cost);
	}
	
	return 0;
}
*/
//1. 写一个程序，对用户输入的整数进行求和。当用户输入任意字符时，结束程序并打印结果。
/*
#include <stdio.h>
int main()
{
	int num;
	long sum = 0;
	int temp;
	
	do
	{
		printf("请输入一个合法数字：\n");
		sum = sum + num;
		temp = scanf("%d",&num);//scanf中 
	}while(temp == 1);//当用户输入任意字符时，结束程序并打印结果
		printf("结果是：%d",sum);
		
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int x;
	int temp;
	temp =scanf("%d",&x);
	printf("%d知识%d\n",x,temp);
	return 0;
}
*/
//2. 为上一题的数字求和程序写一个 2.0 版本，请实现以下要求：
//A. 用户可以输入整数和浮点数
//B. 用户可以在同一行输入多个数字，数字之间可以是任意一个分隔符
//C. 结果保留两位小数
/*
#include <stdio.h>
int main()
{
	float num;
	double sum = 0.0;
	int temp;
	
	do
	{
		printf("输入合法的数字：\n");
		do
		{
			sum = sum + num;
			temp = scanf("%f",&num);
		}while(getchar() != '\n'&& temp == 1);
	}while(temp==1);
	
	printf("%.2lf",sum);
	
	return 0;
}
*/
/*将该循环结构中的第二行与第三行换位后； 
		do
		{
			sum = sum + num;
			temp = scanf("%f",&num);
		}while(getchar() != '\n'&& temp == 1);
		//在执行scanf时，即使已经到了'\n'，但仍会继续循环
		//所以会错误地再加一次结尾的数字 
		do
		{
			temp = scanf("%f",&num);
			sum = sum + num;
		}while(getchar() != '\n'&& temp == 1);
*/
//下面是上列计算器的简易版（舍弃了多余的一次do-while循环）
/* 
#include <stdio.h>
int main()
{
	float num;
	double sum = 0.0;
	
	printf("输入合法的数字串（以非数字结尾）：\n");
	
	while(scanf("%f",&num) == 1)
	{
		sum = sum + num; 
	}
	
	printf("%.2lf",sum);
	
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
        int i, j;

        for (i = 1; i <= 9; i++)
        {
                for (j = 1; j <= 9; j++)
                {
                        if (i <= j)
                        {
                                printf("%d*%d=%-2d  ", i, j, i * j);

                        }
                }
                putchar('\n');
        }

        for (i = 1; i <= 9; i++)
        {
                for (j = 1; j <= 9; j++)
                {
                        if (j < i)
                        {
                                printf("        ");
                        }
                        else
                        {
                                printf("%d*%d=%-2d  ", i, j, i * j);
                        }
                }
                putchar('\n');
        }

	int k;
		for (i = 1; i <= 9; i++)
        {
                for (k = 1; k <= 9-i; k++)
                {
                        printf("        ");
                }

                for (j = 1; j <= i; j++)
                {
                        printf("%d*%d=%-2d  ", i, j, i * j);
                }
                putchar('\n');
        }

        return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=(10-i);j++)
		{
			printf("%d * %d=%-2d   ",i,j,i*j);//左下角的九九乘法表； 
		}
		putchar('\n');
	}
	
	for(i = 1;i <= 9;i++)
	{
		for(j = 1 ; j <= i;j++)
		{
			printf("%d * %d=%-2d   ",i,j,i*j);//左下角的九九乘法表； 
		}
		putchar('\n');
	}
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<i)
			{
				printf("           ");
			}else{
				printf("%d * %d=%-2d   ",i,j,i*j);//右上角的九九乘法表； 
			}
		}
		putchar('\n');
	}
	
	int k; 
	
	for(i=1;i<=9;i++)
	{
			for(k=1;k<=9-i;k++)
			{
				printf("           ");
			}
			for(j=1;j<=i;j++)
				{
					printf("%d * %d=%2d   ",i,j,i*j);//右上角的九九乘法表；
				}
		putchar('\n');
	}
	
	return 0;
}
*/
