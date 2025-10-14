/*
#include <stdio.h>
int main()
{
	printf("你好，世界\n");
	printf("Hello,world\n");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	unsigned char a,b;
	a = 200;
	b = a + a;
	printf("结果为：%d\n",b);
	
	return 0;	
}
*/

/*
#include <stdio.h>
int main()
{
	int number,a,b,c;
	printf("输入你需要倒装的三位数数：\n");
	scanf("%d",&number);
	if (number/1000 >= 1)
	{
		printf("请不要输入超过三位的数字\n\
		!!!!!!!!!!\n");
	}else{
		printf("倒装的数是：%d\n",number);
	a = number/100;
	b = (number - a * 100)/10;
	c = number % 10;
	printf("%d%d%d",c,b,a);
	}
	
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int a,b,t;
	printf("输入要互换的两个数其中之一a=\n");
	scanf("%d",&a);
	printf("输入要互换的两个数其中之一b=\n");
	scanf("%d",&b);
	printf("两数为，a=%d,b=%d",a,b);
	t = a;
	a = b;
	b = t;
	printf("两数互换后为：a=%d,=%d",a,b);
	return 0;
	
}
*/

/*
#include <stdio.h>
int main()
{
	
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int a,b,c,n;//a为起始数，b为终止数，n为项数，c为结果数 
	printf("输入需要累加的起始数与终止数a与b\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	n = b - a + 1;
	c = (a + b)*n/2;
	printf("结果为：%d",c);
	
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("起始数a=");
	scanf("%d",&a);
	
	printf("终止数b=");
	scanf("%d",&b);
	
	while(a <= b){
	c += a;
	a ++;
}

	printf("结果为：%d",c);
	
	return 0;
	
}
*/

/*
#include <stdio.h>
int main()
{
	int i;
	double s = 1;
	for(i=1;i<=5;i++)
	s=s*i;
	printf("s=%lf",s);

	return 0;
	
}
*/
