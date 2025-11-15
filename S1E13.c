/*
#include <stdio.h>

int main()
{
        while (1)
                ;

        return 0;
}
*/
/*
#include <stdio.h>

int main()
{
        signed char i = 0;

        while (i <= 0)
        {
                printf("%d", i);
                i = i - 1;
        }

        return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	while ((ch = getchar()) == ' ')
        ;
	return 0;
	
}
*/
/*
#include <stdio.h>
int main()
{
	int ch,count = 0;
	
	printf("ï¿½ï¿½ï¿½ï¿½Ò»ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½");
	
	while((ch = getchar()) != '\n')
	{
		if(ch <= 'A' && ch >= 'z')
		{
				count++;		
		}
	}
	printf("%d",count);
	return 0;
}
*/
//Ð¡Ð´×ªï¿½ï¿½Ð´ï¿½ï¿½ï¿½ï¿½Ð´×ªÐ¡Ð´
/* 
#include <stdio.h>
int main()
{
	int ch;
	printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ò»ï¿½ï¿½Ó¢ï¿½Ä¾ï¿½ï¿½Ó£ï¿½");
	 
	while((ch = getchar()) != '\n')
	{
		if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 'A' + 'a';
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			ch = ch - 'a' + 'A';
		}
		putchar(ch);
	}
	putchar('\n');
	
	return 0;
}
*/
//Î±atoiº¯Êý£¬ÎÞ·¨Ê¶±ð'-'ºÅ 
/*
#include <stdio.h>
int main()
{
	int ch;
	int num = 0;

	printf("è¯·è¾“å…¥æƒ³è¦è½¬æ¢çš„æ•°å­—ï¼š");
	
	do
	{
		ch = getchar();

		if (ch >= '0' && ch <= '9')
		{
			num = num * 10 + (ch - '0');
		}
		else
		{
			if (num)
			{
				break;
			}
			
		}
		
	} while (ch != '\n');
	
	printf("%d",num); 

	return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int ch;
	long long num = 0;
	long long temp = 0;
	const int int_MAX = pow(2,sizeof(int) * 8) / 2 - 1;
	const int int_MIN = pow(2,sizeof(int) * 8) / 2 * (-1);
	int yes_not;
	
	printf("ÊäÈëÐèÒª×ª»»µÄ×Ö·û:");
	
	do
	{
		ch = getchar();
		
		if(ch >= '0' && ch <= '9')
		{
			temp = temp * 10 + (ch - '0');
			if(temp <= int_MIN || temp >= int_MAX)
			{
				yes_not = 1;
				break;
			}
			else
			{
				num = temp;
			}
		}
		else
		{
			if(num)
			{
				break;
			}
		}
		
	}while(ch != '\n');
	if(yes_not)
	{
		printf("Êý¼¯³¬³ö¶¨Òå£¡");
	}
	else
	{
		if(!num)
		{
			printf("ÎÞÊý×Ö¼¯");
			}
		else
		{
			printf("×ª»»ÎªÊý×ÖÊÇ£º%lld",num);
					}			
	}
	
	return 0;
}
