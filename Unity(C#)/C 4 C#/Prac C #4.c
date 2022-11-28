//1. 실수 2개를 입력 받아 정수 값만의 곱을 구하시오.
#include <stdio.h>

void main() {
	double a, b;
	int result;

	printf("실수 2개를 입력하시오\n");
	scanf_s("%lf %lf",&a,&b);

	result = (int)a * (int)b;
	printf("result: %d\n", result);
}
-----------------------------------------------------------------
//2. 2,3,5,7,11,13,17의 평균을 정확히 실수값으로 계산하시오.
#include <stdio.h>

void main() {

	double avg;

	avg = (2 + 3 + 5 + 7 + 11 + 13 + 17) / 7.0;
	printf("평균: %lf \n", avg);

}
-----------------------------------------------------------------
//3. 키는[cm]단위로 몸무게는 [kg]단위로 입력 받아 BMI(body mass index)를 소수 첫째 자리까지 보이시오 
// (단, BMI = 몸무게/키^2; 몸무게는 kg 키는 m단위임)

#include <stdio.h>

void main() {
	double height;
	double weight;
	
	printf("키와 몸무게를 입력하시오: \n");
	scanf_s("%lf %lf", &height, &weight);
	double BMI = weight /  (height/100)/(height/100);

	printf("BMI : %.1lf", BMI);


}
------------------------------------------------------------------------------------
//4. 실수 5개를 입력받아, 정수 부분만의 합과 소수 부분만의 합을 각각 구하시오.
#include <stdio.h>

void main() {

	double a, b, c, d, e;
	long J;
	double S;
	printf("실수를 입력하십시오: \n");
	scanf_s("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	J = (int)a +(int)b + (int)c + (int)d +(int)e;
	S = (a - (int)a)+ (b - (int)b)+ (c - (int)c)+ (d - (int)d)+ (e- (int)e);
	printf("정수 부분의 합: %d\n 소수 부분의 합: %lf\n", J, S);
}
-----------------------------------------------------------------------------------
//5. 비트논리연산자와 조건연산자를 이용하여 입력 받은 문자의 아스키값을 이진수로 출력하시오
#include <stdio.h>

void main() {

	char input;
	
	printf("문자를 입력하세요: \n");
	scanf_s("%c", &input);
	int askii = input;
	
	printf("%d", ((askii >> 7) & 1) ? 1: 0 );
	printf("%d", ((askii >> 6) & 1) ? 1 : 0);
	printf("%d", ((askii >> 5) & 1) ? 1 : 0);
	printf("%d", ((askii >> 4) & 1) ? 1 : 0);
	printf("%d", ((askii >> 3) & 1) ? 1 : 0);
	printf("%d", ((askii >> 2) & 1) ? 1 : 0);
	printf("%d", ((askii >> 1) & 1) ? 1 : 0);
	printf("%d", ((askii >> 0) & 1) ? 1 : 0);
		

}
---------------------------------------------------------------------------------
// 07. 원금이 1,000,000인 경우, 예치 기간을 년 단위로 입력 받아 단리 이자 만기 시 총 금액을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main() {

	int money = 1000000;
	int year;
	double interest;
	interest = 0.045;

	
	printf("예치 기간 입력(년) >> ");
	scanf_s("%d", &year);
	double res = money+ (money * interest * year);
	printf("이율: 4.5% 총금액 : %.2lf", res);

}
-------------------------------------------------------------------------------