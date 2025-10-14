/*
#include <stdio.h>

#define INT int
#define BEGIN{
#define END}
#define IF if(
#define THEN ){
#define ELSE }else{
#define FI ;}

INT main()
BEGIN
	INT i;
	
	printf("请输入您的年龄：");
	scanf("%d",&i);
	
	IF i < 18
	THEN
		printf("您未满18周岁，不得使用这个程序！\n");
	ELSE
		printf("您已满18周岁，欢迎使用本程序，嘿嘿嘿...\n");
	FI
	
	return 0; 
END
*/
//以上为使用Steve Bourne的方法所改写出来的C语言变型
//要求用户输入一个字符，如果是大写字母，将其转换为小写；如果是小写字母，将其转换为大写；其他字符不做处理，并输出结果
#include <stdio.h>

int main()
{
	char i;
	printf("请输入单个字符：\n");
	scanf("%c",&i);
	if(i >= 'A'&& i <= 'Z')
	{
			i = i+32;
	}
	else if(i >= 'a' && i <= 'z')
	{
		i = i - 32;
	}
	
	printf("%c\n",i);
	
	return 0;
	
}
