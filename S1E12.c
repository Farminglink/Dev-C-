/*
#include <stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	if (i == '\n');
	else{
    i = i + 1;}
    return 0;
}
*/
/*对下列代码进行改错和修正
#include <stdio.h>

int main()
{
        int i;

        printf("请输入成绩：");
        scanf("%d", &i);

        switch (i)
        {
                case i >= 90: printf("A\n"); break;
                case i >= 80 && i < 90: printf("B\n"); break;
                case i >= 70 && i < 80: printf("C\n"); break;
                case i >= 60 && i < 70: printf("D\n"); break;
                case i < 60: printf("E\n"); break;
                default: printf("请输入合法的数字！\n"); break;
        }

        return 0;
}
*/
//switch的case后只能接整型，而判断语句应该使用if语句
/*同上
#include <stdio.h>

int main()
{
        float i;

        printf("请输入一个小数：");
        scanf("%f", &i);

        switch (i)
        {
                case 1.2: printf("1.2\n"); break;
                case 2.2: printf("2.2\n"); break;
                case 3.2: printf("3.2\n"); break;
                case 4.2: printf("4.2\n"); break;
                case 5.2: printf("5.2\n"); break;
        }

        return 0;
}
*/
//switch语句的case后面不能接浮点型
/*同上
#include <stdio.h>

int main()
{
        int i;

        printf("请输入一个整数：");
        scanf("%d", &i);

        switch (i)
        {
                case 1 + 1: printf("1 + 1\n"); break;
                case 8 / 4: printf("2 / 1\n"); break;
                case 1 + 2: printf("1 + 2\n"); break;
                case 1 - 2: printf("1 - 2\n"); break;
                case 1 - 3: printf("1 - 3\n"); break;
        }

        return 0;
}
*/
//case 1 + 1同case 8 / 4的值相同，故错误
//写一个查找使用 if 语句，对数组进行越界检查，让代码只允许访问数组内的数据 
/*
#include <stdio.h>

int main()
{
        char ch[6] = "FishC";
        int i;

        printf("请输入你想访问的字符序号(0~5)：");
        scanf("%d", &i);
        if(i >= 0 && i <= 5){
        printf("%c\n", ch[i]);
    	}
        else{
        printf("非法语句\n");
		}
		
        return 0;
} 
*/
/*
#include <stdio.h>
int main()
{
	int i;
	char ch[7]="ILoveMe";
	
	printf("请输入您想要查找的字符(0 ~ 6):\n");
	scanf("%d",&i);
	
	if(!(i >= 0 && i <= 6 && printf("您要查找的字符为:%c",ch[i]))){
		printf("非法字符!\n");
	}
	return 0;
}
*/
//写一个最简单的计算器，支持四则运算
/*
#include <stdio.h>

int main()

{
	float a,b;
	char ch;
	float result;
	
	printf("请输入式子：\n");
	scanf("%d %c %d",&a,&ch,&b);
	
	switch(ch)
	{
		case'-': b = -b;//no break
		case'+':result = a + b;break;
		case'*':result = a * b;break;
		case'/':result = a / b;break; 
	}
	printf("%.2f",result);
	
	return 0;
}
*/
//......无法正常运算
#include <stdio.h>
#include <stdbool.h>

int main()
{
        float op1, op2;
        char ch;
        float result;
        bool invalid = false;

        printf("请输入式子：");
        scanf("%f %c %f", &op1, &ch, &op2);

        switch (ch)
        {
                case '-': op2 = -op2; // no break
                case '+': result = op1 + op2; break;
                case '*': result = op1 * op2; break;
                case '/':
                        if (op2 != 0)
                        {
                                result = op1 / op2;
                                break;
                        }
                        else
                        {
                                invalid = true;
                                break;
                        }
        }

        if (invalid)
        {
                printf("除数不能为零！\n");
        }
        else
        {
                printf("结果是：%.2f\n", result);
        }

        return 0;
}
//在上述代码中，引入bool语句帮助解决当除数为0时的问题 
