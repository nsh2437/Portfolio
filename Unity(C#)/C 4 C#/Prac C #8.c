//1. 가로 세로 높이를 입력 받아 직육면체의 부피와 표면적을 구하시오.
//(부피와 표면적 리턴(반환) 하는 함수 만들 것)
#include <stdio.h>

int bupi(int a, int b, int c);
int pyo(int a, int b, int c);

void main() {
	int a, b, c, volume, surface;

	printf("가로 세로 높이를 입력!\n");
	scanf_s("%d %d %d", &a, &b, &c);
	volume = bupi(a, b, c);
	surface = pyo(a, b, c);
	printf("부피 = %d, 표면적 = %d", volume, surface);

	
}
int bupi(int a, int b, int c) {
	return(a * b * c);
}

int pyo(int a, int b, int c) {
	return 2 * ((a * b) + (b * c) + (c * a));
}
------------------------------------------------------
//2. 상금 액수를 입력 받아 만원 이상이면 10%를, 만원 미만이면 5%의 수수료를 계산하여,
// 계산서를 발급하시오.(수수료 리턴 하는 함수 만들 것)

#include <stdio.h>

int susu(int money);

void main() {

	int sang, tax;

	printf("상금 액수를 입력!\n");
	scanf_s("%d", &sang);

	tax = susu(sang);
	printf("수수료 : %d\n", tax);
}

int susu(int money) {
	if (money >= 10000)
		return (int)(money * 0.1);
	else
		return (int)(money * 0.05);
}
----------------------------------------------------------------------
//3. 숫자 3개를 입력 받아 최솟값과 최댓값의 곱을 구하시오.(최솟값과 최댓값을 반환하는 함수를 2개 만들 것)

#include <stdio.h>
int maxf(int a, int b, int c);
int minf(int a, int b, int c);

void main() {

	int a, b, c;

	printf("숫자 3개를 입력!\n");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("결과: %d\n", maxf(a, b, c) * minf(a, b, c));
}

int maxf(int a, int b, int c) {

	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;

}

int minf(int a, int b, int c) {

	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;

}
-------------------------------------------------------------------
//4. 시작 수에서 끝 수까지의 모든 수의 합을 리턴해 주는 함수를 직접 만들고,
// 두 정수를 입력 받아 호출해 보시오.(예. isum(5,3) => 5+4+3 = 12

#include <stdio.h>
int sum(int a, int b);

void main() {

	int a, b;

	printf("두수를 입력 : \n");
	scanf_s("%d %d", &a, &b);

	int res = sum(a, b);

	printf("%d", res);
}

int sum(int a, int b) {
	int res = 0;
	if (a > b) {
		for (a; a >= b; a--) {
			res += a;
		}
		return res;
	}
	else {
		for (a; a <= b; a++) {
			res += a;
		}
		return res;
	}
}
-----------------------------------------------------------
//5. 태어난 해를 입력하면, 태어난 해 1월1일부터 2030년12월31일 까지의 날짜수를 구하시오.
// (윤년 여부는 함수로 만들 것: int is_leap() )

#include <stdio.h>
int is_leap(int year);

void main() {

	int year;
	int day = 0;
	int cnt = 0;
	printf("태어난 해를 입력하세요.\n");
	scanf_s("%d", &year);

	day = 2030 - year;

	cnt = day * 365 + 365; //+365 = 마지막 2030년(윤년x)째 1월1일부터 365일 ,
	cnt += is_leap(year);
	printf("%d", cnt);
}

int is_leap(int year) {
	int cnt = 0;
	for (int i = year; i <= 2030; i++) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			cnt++;
	}
		return cnt;
}
----------------------------------------------------------
//6. 입력된 수보다 크지 않은 가장 큰 소수(prime number) 찾기.(소수 인지 아닌지 알려 주는 함수 만듦)

#include <stdio.h>
int is_prime(int a)


void main() {

	int pri, num;
	printf("수를 입력하십시오 : \n");
	scanf_s("%d", &num);


	for (pri = num - 1; pri > 1; pri--) {
		if (is_prime(pri)==1) {
			printf("%d", pri);
			break;
		}
	}

}
int is_prime(int a) {

    for (int i = 2; i < a; i++) {
        if (a % i == 0)
            return 0;
    }
    return 1;

}
-----------------------------------------------
// 13 다음과 같이 1차원 배열의 동등함을 검사하는 함수를 작성하여 결과를 알아보는 프로그램을 작성 하시오.

#include <stdio.h>

int isequalarray(int a[], int b[], int n/*배열원소 수*/)
{
	
	for (int i = 0; i < n; i++) {
		if (a[n] == b[n] && a[i] == b[i]) {
			return 1;
		}
		else
			return 0;
	}
	
}
int main()
{
	int a[] = { 4, 7, 9, 3, 6 };
	int b[] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
		
	}
	puts("");
	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);

	}
	
	if (isequalarray(a, b, 5) == 1)
		printf("\n두 배열은 같다");

	else if (isequalarray(a, b, 5) == 0)
		printf("\n두 배열은 다르다.");


}
--------------------------------------------------------------