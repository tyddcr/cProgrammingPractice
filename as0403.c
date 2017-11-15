/************************
 * P83 3				*
 * 计算本息				*
 *						*
 * 何泽楷 2017301020154	*
 ************************/

#include <stdio.h>

int main(void)
{
	const int  CAPITAL = 8000;
	int years = 0;
	double total, rate;

	total = CAPITAL;
	rate = 0.028;
	do {
		total = total * (1 + rate);
		years++;
		//从第4年起,利率降为2.7%
		if (years == 3)
			rate = 0.027;
	} while(years <= 10 && total <= 10000);
	
	printf("储户将会于第%d年将钱取出,本息总计:%.2f元\n", years, total);

	return 0;
}
