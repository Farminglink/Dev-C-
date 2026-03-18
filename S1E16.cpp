//0. 假设小甲鱼和黑夜手上均有 10000 元，小甲鱼以 10% 的单利息投资，黑夜则以每年 5% 的复合利息投资。请编写一个程序，计算需要多少年黑夜手头的 Money 才会超过小甲鱼？
/*#include <stdio.h>

#define MONEY   10000

int main()
{
        double a_total = MONEY, b_total = MONEY;
        int count = 0;

        do
        {
                a_total += MONEY * 0.1;
                b_total += b_total * 0.05;
                count++;
        } while(a_total >= b_total);

        printf("%d年后，黑夜的投资额超过小甲鱼！\n", count);
        printf("小甲鱼的投资额是：%.2f\n", a_total);
        printf("黑夜的投资额是：%.2f\n", b_total);

        return 0;
}*/
//1. 都说天降横财不是什么好事儿，这不，小甲鱼中了双色球一等奖，扣除税收后还剩下 400 万人民币。假设小甲鱼把这些钱做固定投资，每年可以获得 8% 的红利，但在每年的第一天，小甲鱼都会取出 50 万作为本年度的开销……
/*#include <stdio.h>

int main()
{
        double total = 4000000;
        int year = 0;

        while (total >= 0)
        {
                total -= 500000;
                total += total * 0.08;
                year++;
        }
        
        printf("%d年之后，小甲鱼败光家产，再次一贫如洗。\n",year);

        return 0;
}*/
//2. 根据以下已知公式求 Pi 的近似值，要求正确计算出小数点后前 7 位（即3.1415926）。
/*#include <stdio.h>
#include <math.h>

int main()
{
        int sign = 1;
        double PI = 0.0,n = 1.0,temp = 1.0;

        while (fabs(temp)>=pow(10,-8))
        {
                PI = PI + temp;
                n = n + 2;
                sign = - sign;
                temp = (double)sign / n;
        }

        PI *= 4;
        printf("%.10f\n",PI);
        
        return 0;
}*/
//3. 这是一个有趣的古典数学问题：如果说兔子在出生两个月后，就有繁殖能力，在拥有繁殖能力之后，这对兔子每个月能生出一对小兔子来。假设所有兔子都不会死去，能够一直干下去，那么两年之后可以繁殖多少对兔子呢？
/*
#include<stdio.h>
int main()
{
        long a=1,b=1,c,i;
        for(i=3;i<=24;i++)
        {
                c=a+b;
                a=b;
                b=c;
        }
        printf("%ld",c);
        return 0;
}
*/
//Fibonacci 数列
/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  // 求第n项
    
    if (n <= 0) {
        printf("Invalid\n");
        return 0;
    }
    
    if (n == 1 || n == 2) {
        printf("1\n");
        return 0;
    }
    
    long long F[100];  // 根据题目范围调整大小
    F[1] = 1;
    F[2] = 1;
    
    for (int i = 3; i <= n; i++) {
        F[i] = F[i-1] + F[i-2];  // 核心递推公式
    }
    
    printf("%lld\n", F[n]);
    
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid\n");
        return 0;
    }
    
    long long a = 1, b = 1, c;  // 只保留前两项
    
    if (n == 1 || n == 2) {
        printf("1\n");
        return 0;
    }
    
    for (int i = 3; i <= n; i++) {
        c = a + b;  // F[i] = F[i-2] + F[i-1]
        a = b;      // 更新 F[i-2]
        b = c;      // 更新 F[i-1]
    }
    
    printf("%lld\n", b);
    
    return 0;
}
*/