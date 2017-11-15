// P75 第5章实验题1(4):		*
// 求Fibonacci数列的前12项		
//

#include <stdio.h>

#define N 100

int main(void)
{
	int i, n, seq[N];

	printf("Please input the number of elements: \n");
	scanf_s("%d", &n);

	seq[1] = seq[2] = 1;
	printf("A Fibonacci sequence of %d elements: \n", n);
	if (n == 1 || n == 2)
		for (i = 1; i <= n; i++)
			printf("%d, ",seq[i]);
	else {
		printf("%d, %d, ", seq[1], seq[2]);
		for (i = 3; i <= n; i++) {
			seq[i] = seq[i - 2] + seq[i - 1];
			printf("%d, ", seq[i]);
		}
	}
	printf("\b\b  \n");

	return 0;
}
