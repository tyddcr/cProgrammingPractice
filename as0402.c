//	as0402.c		第5章 实验2(2):
//	输出2~1000之间的所有完数
//	完数：该数的各因子之和正好等于该数本身

#include <stdio.h>

int main(void)
{
	int num, sum, j;
	printf("2~1000之间的所有完数: \n");
	for (num = 2; num <= 1000; num++) {
		sum = 1;
		for (j = 2; j <= num/2; j++) {
			if (num % j == 0)
				sum += j;
		}
		if (sum == num)
			printf("%d ", num);
	}

	putchar('\n');

	return 0;
}
