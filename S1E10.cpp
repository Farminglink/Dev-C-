//0. ���� char *name = ��FishC�� �� char name[] = {��F��, ��i��, ��s��, ��h��, ��C��} �Ƿ�ȼۣ�
//��char *name = "FishC" �� char name[] = {'F','i','s','h','C','\n'}�ȼۣ� 

//1. �����Ϊ���±߱��� a ��ֵΪ�δ�ӡ������ 144����д���������̣���MmO
/*
#include <stdio.h>

int main()
{
        unsigned char a, b, c;//a,b,c��char������int 

        b = c = 200;
        a = b + c;//�ô��ļ���Ҳ���Ƕ����Ƶļ��㣬 a = 11001000 + 11001000 = 110010000����char��8λ�ַ����ȣ��ͻ�������λ�����ɶ�����תΪʮ������� 

        printf("a = %u\n", a);

        return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int count,sum;
	count != 0 && sum/count;//�ô����߼�������þ���ʹ����count��Ϊ0�� 
	printf("sum = %d",sum);
	return 0;
	
}
*/
//Ҫȷ��һ������Ƿ�Ϊ����Ҫ������������������
//A��������ܱ�4����
//B��������ܱ�400����
#include <stdio.h>

int main()
{
	int year,judge;
	printf("����Ҫ����Ƿ�Ϊ�����ƽ�����ݣ�\n");
	scanf("%d",&year);
	
	judge = year % 4 != 0 && year % 100 != 0 || year % 400;
	
	if(judge = 1)
	{
		printf("�����������\n");
	}
	
	else
	{
		printf("�������ƽ��\n");
	}
		
	return 0;
	
} 
