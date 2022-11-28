//1 N Factorial 구하기

#include <Stdio.h>

void main() {

	int n, mul = 1;

	printf("양의 정수를 입력하시오\n");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		mul *= i;
	}
	printf("%d! = %d\n", n, mul);
}
--------------------------------------------------------
//2 자연수 하나를 입력 받아 그 수 이하의 3의 배수 모두 출력하시오.
#include <stdio.h>

void main()
{
	int n, i;

	printf("자연수 하나를 입력!\n");
	scanf_s("%d", &n);

	for ( i = 0; i < n; i+=3)
	{
		printf("%d ", i);
	}
	puts("");
	for ( i = 0; i < n; i++)
	{
		if (i%3 == 0) printf("%d ", i);
	}

}
------------------------------------------------------
//3 1 - 2 +3 - 4 + 5 - ... + 99 - 100를 계산

#include <stdio.h>

void main() {

	int a, b, res = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0)
			res += i;
		else if (i % 2 == 0)
			res -= i;

	}
	printf("%d", res);
}
--------------------------------------------------------
//4 1부터 10000 까지 5또는 7의 배수는 몇 개인지 구하시오.
#include <stdio.h>

void main() {
	int i, cnt = 0;

	for (i = 1; i <= 10000; i++) {
		if (i % 5 == 0 || i % 7 == 0)
			cnt++;
	}
	printf("개수: %d\n", cnt);
}
-------------------------------------------------------------
//5 첫 번째 입력 받은 숫자부터 두 번재 입력 받은 숫자까지의 총합을 구하시오.
#include <stdio.h>

void main() {
	int a, b, sum = 0;

	printf("숫자 2개를 입력하시오\n");
	scanf_s("%d %d", &a, &b);

	for (int i = 0; i <=b ; i++)
	{
		sum += i;
	}
	printf("합: %d\n", sum);
}
--------------------------------------------------------------
//6 A부터 Z까지 알파벳과 해당 아스키값 쌍을 모두 출력하시오.

#include <stdio.h>

void main() {

	char ch;
	
	for ( ch = 'A'; ch <= 'Z'; ch++)
	{
		printf("%c %d \n", ch,ch);
	}
}
------------------------------------------------------------------
//7서기 1년부터 서기 4000년 까지의 윤년의 개수를 구하시오.
#include <stdio.h>

void main() {

	int y;
	int count = 0;
	for (int y = 1; y <= 4000; y++) {
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) 
			count++;
			
	}
	
	printf("윤년의 개수는 %d개", count);
}
-----------------------------------------------------------------

//8 주사위를 2개 던질 때 나올수 있는 경우를 모두 출력하시오.
//(예: (1,1) (1,3) (1,3)....)

#include <stdio.h>

void main() {
	int i, j;

	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			printf("(%d,%d)", i, j);
		}
		printf("\n");
	}
}
---------------------------------------------------------
//9 loop(반복문)을 이용하여 다음처럼 출력하게하시오
//987654321
//98765432
//...
//98
//9

#include <stdio.h>

void main() {

	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j =9; j >=i; j--) {
			printf("%d", j);
		}
		puts("");

	}
}
--------------------------------------------------
//09 반복적으로 정수를 입력받아 0이면 종료하고 0이 아니면 32비트의 비트 정보를 모두 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main() {

	int input;

	printf("정수 또는 0(종료)를 입력 >>");
	scanf_s("%d", &input);

	while (input != 0) {
		
		
		for (int i = 31; i >= 0; i--)
		{
			
			printf("%d", (input>> i) & 1);
		}
		
		printf("\n정수 또는 0(종료)를 입력 >>");
	
		scanf_s("%d", &input);
	}
	if(input==0)
	printf("정수 %d의 내부값:\n", input);
	printf("00000000000000000000000000000000\n");
	printf("종료합니다.");
			
}