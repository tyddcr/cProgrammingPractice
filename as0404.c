// P99 第5章 编程题3(2)	
// 自然对数的底数e的值
//

#include <stdio.h>

int main(void)
{
	const int PRECISION = 1000000;
	double e = 1.0;
	int temp = 1;

	while (temp <= PRECISION) {
		e = e + 1 / (double) temp;
		temp = temp * (temp + 1);
	}

	printf("e = %f\n", e);
	
	return 0;
}
