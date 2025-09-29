/*
#include <stdio.h>

int main()
{
        int a = 2, b = 1;

        printf("%d\n", a / 'b');

        return 0;        
}
*/
/*
#include <stdio.h>

int main()
{
        int a;
        (a = 2) + 3 * 4;
        printf("a = %d\n", a);

        return 0;
}
*/
/*
#include <stdio.h>

int main() 
{
	float a,b,c,d,e,f,g;
	a = 5 / 3;
	b = 1 / 0;
	c = 1.2 + 3;
	d = 1.2 * 0;
	e = 6.0 / 2;
	f = 10 / 6.0;
	g = 3 / 5;

	printf("%.6f\n\
	%.6f\n\
	%.6\n\
	%.6\n\
	%.6\n\
	%.6\n\
	%.6\n",a,b,c,d,e,f,g);
	return 0;
}
*/
//
//
//
//
//
/*#include <stdio.h>
#include <math.h>

int main()
{
	printf("%c,%c,%c,%c%c",1010,120,150,175,110);
	
	return 0;
	
 } 
 */
 /* 
 #include <stdio.h>
 int main()
 {

 	printf("int���ַ�������Ϊ��%d\n",sizeof(int));
 	return 0;
 	
 }
 */

/*

#include <stdio.h>
#include <math.h>
 
 int main()
 {
 	double ALL,loan,S,P,C,Y,R,In,Month,lease,R1,R2,R3;
 	
 	printf("�����뷿�������\n");
 	scanf("%f",&S);
 	
	printf("������ÿƽ���׵��ۣ�\n");
	scanf("%f",&P);
	
 	printf("�����밴�ҳ�����\n");
 	scanf("%f",&C);
 	
 	printf("�����밴��������\n");
 	scanf("%f",&Y);

 	printf("�����뵱ǰ��׼�����ʣ�\n");
 	scanf("%f",&R);
 	
 	C = C * 0.01;
 	R1 = R / 100;
 	R2 = R1 / 12;
	ALL = S * P;
	Month = Y * 12;
 	loan = ALL * C;
 	R3 = pow(1 + R2 , Month );
 	lease = loan* (R2 * R3) / ( R3 - 1);
 	In = Month * lease - loan;
	 
 	printf("�����ܶ%.2f\n",ALL);
 	printf("�����ܶ%.2f\n",loan);
 	printf("�����ܶ%.2f\n",loan + In);
 	printf("֧����Ϣ��%.2f\n",In);
 	printf("���ڸ����%.2f\n",ALL - loan);
 	printf("�¾����%.2f\n",lease);
 	
 	return 0;
 	
 }


*/

#include <stdio.h>
#include <math.h>

/* �������ٷֱ�ת�� */
const double PERCENT = 0.01;

int main(void)
{
    double area,          /* �������         */
           price,         /* ÿƽ���׵���     */
           ratio,         /* ���ҳ�����80 ��ʾ 80%�� */
           years,         /* ��������         */
           rate_year;     /* ��׼�����ʣ�%��  */

    /* ��ʾ���� */
    printf("�����뷿��������O����");
    if (scanf("%lf", &area) != 1 || area <= 0) {
        puts("�������Ƿ���");
        return 1;
    }

    printf("������ÿƽ���׵��ۣ�Ԫ����");
    if (scanf("%lf", &price) != 1 || price <= 0) {
        puts("��������Ƿ���");
        return 1;
    }

    printf("�����밴�ҳ������� 70 ��ʾ 70%%����");
    if (scanf("%lf", &ratio) != 1 || ratio <= 0 || ratio > 100) {
        puts("���ҳ�������Ƿ���");
        return 1;
    }

    printf("�����밴��������");
    if (scanf("%lf", &years) != 1 || years <= 0) {
        puts("������������Ƿ���");
        return 1;
    }

    printf("�����뵱ǰ��׼�����ʣ�%%����");
    if (scanf("%lf", &rate_year) != 1 || rate_year < 0) {
        puts("��������Ƿ���");
        return 1;
    }

    /* ���ļ��� */
    double total_price = area * price;
    double loan_ratio  = ratio * PERCENT;
    double loan_amount = total_price * loan_ratio;
    double months      = years * 12.0;
    double rate_month  = (rate_year * PERCENT) / 12.0;

    double payment;
    if (rate_month == 0.0) {              /* �����ʷ�֧ */
        payment = loan_amount / months;
    } else {
        double temp = pow(1.0 + rate_month, months);
        payment = loan_amount * (rate_month * temp) / (temp - 1.0);
    }

    double total_pay = payment * months;
    double interest  = total_pay - loan_amount;
    double down_pay  = total_price - loan_amount;

    /* ������ */
    printf("\n-------- ������ --------\n");
    printf("�����ܶ       %.2f Ԫ\n", total_price);
    printf("�����ܶ       %.2f Ԫ\n", loan_amount);
    printf("�����ܶ       %.2f Ԫ\n", total_pay);
    printf("֧����Ϣ��       %.2f Ԫ\n", interest);
    printf("���ڸ��       %.2f Ԫ\n", down_pay);
    printf("�¾����       %.2f Ԫ\n", payment);

    return 0;
}













