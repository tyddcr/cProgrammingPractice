/************************
 * P83 3				*
 * ���㱾Ϣ				*
 *						*
 * ���� 2017301020154	*
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
		//�ӵ�4����,���ʽ�Ϊ2.7%
		if (years == 3)
			rate = 0.027;
	} while(years <= 10 && total <= 10000);
	
	printf("���������ڵ�%d�꽫Ǯȡ��,��Ϣ�ܼ�:%.2fԪ\n", years, total);

	return 0;
}
