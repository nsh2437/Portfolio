//1. 1부터 n까지 홀수의 평균, 짝수의 합 구하기
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; int i = 0; int sum = 0;

	printf("100 이하의 정수를 입력하세요 : ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		if ((i % 2) == 0) {
			sum = sum + i;
		}
	}
	printf("\n\n짝수의 합은 %d", sum);

	sum = 0;

	for (i = 1; i <= n; i++) {
		if ((i % 2) != 0) {
			sum += i;
			sum /= (n / 2);
		}
	}
	printf("\n\n홀수의 평균은 %d\n\n", sum);

	return 0;
}
