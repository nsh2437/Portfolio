#include <stdio.h>

void main() {

	int a;
	char ch;

	a = 33;
	ch = 'A';

	printf("정수 : %d, 문자: %c\n, ", a, ch);
------------------------------------------------------------1번문제
#include <stdio.h>


void main()
{
	const double pi = 3.14;
	double dule;

	dule = 2 * pi * 6400;
	printf("지구의 둘레 : %lf Km입니다. \n" , dule);
}
--------------------------------------------------------------2번문제
#include <stdio.h>

void main() {

	long double space = 2e11L;
	long double star = 35e10L;

	 long double result =  space * star;

	printf("별의 총개수는 %.0Le개 입니다. \n", result);

}
-------------------------------------------------------------3번문제
#include <stdio.h>


void main() {
	
	double money = 1e8;
	double interest = 0.035;

	printf("1억의 1달 이자는 %.0lf 원입니다", money * interest / 12);

}
----------------------------------------------------------------4번문제

#include <stdio.h>

void main() {
#define PI 3.14;
	double circle = 5.37;

	double area = circle * circle * PI;
	double dule = 2 * circle * PI;

	printf("원 반지름: %lf \n원 면적: %lf \n 원 둘레: %lf \n", circle, area, dule);
	
	
}
---------------------------------------------------------------5번문제