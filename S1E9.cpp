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

 	printf("int的字符串长度为：%d\n",sizeof(int));
 	return 0;
 	
 }
 */

/*

#include <stdio.h>
#include <math.h>
 
 int main()
 {
 	double ALL,loan,S,P,C,Y,R,In,Month,lease,R1,R2,R3;
 	
 	printf("请输入房屋面积：\n");
 	scanf("%f",&S);
 	
	printf("请输入每平方米单价：\n");
	scanf("%f",&P);
	
 	printf("请输入按揭成数：\n");
 	scanf("%f",&C);
 	
 	printf("请输入按揭年数：\n");
 	scanf("%f",&Y);

 	printf("请输入当前基准年利率：\n");
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
	 
 	printf("房款总额：%.2f\n",ALL);
 	printf("贷款总额：%.2f\n",loan);
 	printf("还款总额：%.2f\n",loan + In);
 	printf("支付利息：%.2f\n",In);
 	printf("首期付款金额：%.2f\n",ALL - loan);
 	printf("月均还款：%.2f\n",lease);
 	
 	return 0;
 	
 }


*/

#include <stdio.h>
#include <math.h>

/* 常量：百分比转换 */
const double PERCENT = 0.01;

int main(void)
{
    double area,          /* 房屋面积         */
           price,         /* 每平方米单价     */
           ratio,         /* 按揭成数（80 表示 80%） */
           years,         /* 按揭年数         */
           rate_year;     /* 基准年利率（%）  */

    /* 提示输入 */
    printf("请输入房屋面积（㎡）：");
    if (scanf("%lf", &area) != 1 || area <= 0) {
        puts("面积输入非法！");
        return 1;
    }

    printf("请输入每平方米单价（元）：");
    if (scanf("%lf", &price) != 1 || price <= 0) {
        puts("单价输入非法！");
        return 1;
    }

    printf("请输入按揭成数（如 70 表示 70%%）：");
    if (scanf("%lf", &ratio) != 1 || ratio <= 0 || ratio > 100) {
        puts("按揭成数输入非法！");
        return 1;
    }

    printf("请输入按揭年数：");
    if (scanf("%lf", &years) != 1 || years <= 0) {
        puts("按揭年数输入非法！");
        return 1;
    }

    printf("请输入当前基准年利率（%%）：");
    if (scanf("%lf", &rate_year) != 1 || rate_year < 0) {
        puts("利率输入非法！");
        return 1;
    }

    /* 核心计算 */
    double total_price = area * price;
    double loan_ratio  = ratio * PERCENT;
    double loan_amount = total_price * loan_ratio;
    double months      = years * 12.0;
    double rate_month  = (rate_year * PERCENT) / 12.0;

    double payment;
    if (rate_month == 0.0) {              /* 零利率分支 */
        payment = loan_amount / months;
    } else {
        double temp = pow(1.0 + rate_month, months);
        payment = loan_amount * (rate_month * temp) / (temp - 1.0);
    }

    double total_pay = payment * months;
    double interest  = total_pay - loan_amount;
    double down_pay  = total_price - loan_amount;

    /* 结果输出 */
    printf("\n-------- 计算结果 --------\n");
    printf("房款总额：       %.2f 元\n", total_price);
    printf("贷款总额：       %.2f 元\n", loan_amount);
    printf("还款总额：       %.2f 元\n", total_pay);
    printf("支付利息：       %.2f 元\n", interest);
    printf("首期付款：       %.2f 元\n", down_pay);
    printf("月均还款：       %.2f 元\n", payment);

    return 0;
}













