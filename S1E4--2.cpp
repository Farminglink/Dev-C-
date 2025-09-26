#include <stdio.h>

int main()
{
	int r;
	double c,s;

	r = 5;
	c = r * 2 * 3.14;
	s = r * r * 3.14;
	printf("圆的半径是%d,圆的周长是%.2f,圆的面积是%.2f\n",r,c,s);
	
	return 0;
	
}
