//0. 请问 char *name = “FishC” 和 char name[] = {‘F’, ‘i’, ‘s’, ‘h’, ‘C’} 是否等价？
//否，char *name = "FishC" 和 char name[] = {'F','i','s','h','C','\n'}等价； 

//1. 请解释为何下边变量 a 的值为何打印出来是 144（请写出分析过程）？MmO
/*
#include <stdio.h>

int main()
{
        unsigned char a, b, c;//a,b,c是char而不是int 

        b = c = 200;
        a = b + c;//该处的计算也就是二进制的计算， a = 11001000 + 11001000 = 110010000，而char仅8位字符长度，就会舍弃首位，再由二进制转为十进制输出 

        printf("a = %u\n", a);

        return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int count,sum;
	count != 0 && sum/count;//该处的逻辑与的作用就是使除数count不为0； 
	printf("sum = %d",sum);
	return 0;
	
}
*/
//要确定一个年份是否为闰年要满足以下两个条件；
//A。该年份能被4整除
//B。该年份能被400整除
#include <stdio.h>

int main()
{
	int year,judge;
	printf("输入要检测是否为闰年或平年的年份：\n");
	scanf("%d",&year);
	
	judge = year % 4 != 0 && year % 100 != 0 || year % 400;
	
	if(judge = 1)
	{
		printf("该年份是闰年\n");
	}
	
	else
	{
		printf("该年份是平年\n");
	}
		
	return 0;
	
} 
