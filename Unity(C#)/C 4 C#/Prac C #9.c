//1. 입력 받은 실수의 1승, 2승, …, 5승을 계산하시오.(라이브러리 함수 pow() 사용)
#include <stdio.h>
#include <math.h>

void main() {

	double a;

	printf("실수를 입력하시오\n");
	scanf_s("%lf", &a);
	for (double i = 1; i <= 5; i++) {
		printf("%.2lf ", pow(a, i));
	}
}
---------------------------------------------------------------------------------------------
//2. √1 + √2 + … + √10 를 계산하시오.(라이브러리 함수 sqrt()이용)

#include <stdio.h>
#include <math.h>

void main() {

	double a, res;

	for (double i = 1; i <= 10; i++) {
		res = sqrt(i);
	}
	printf("%lf", res);
}
--------------------------------------------------------------------------------------------
//3. 가위, 바위, 보를 랜덤으로 10개를 출력하시오.(srand()사용할 것)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {

	int val;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		val = rand() % 3;
		if (val == 0)		 printf("가위 ");
		else if (val == 1)	 printf("바위 ");
		else				 printf("보 ");
	}
}
--------------------------------------------------------------------------------------------
// 4. 배열의 합을 구해주는 함수를 만들고, main에서 배열을 입력받고 
// 합 구해주는 함수를 호출하여 평균을 구하시오.

#include <stdio.h>

int sumA(int aa[], int sz)
{
	int sum = 0;

	for (int i = 0; i < sz; i++) {
		sum += aa[i];
	}
	return sum;
}

void main()
{
	int ary[5];
	
	double avg;

	printf("정수 5개를 입력하시오\n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &ary[i]);
	}
	avg = (sumA(ary, 5)) / 5.0;
	printf("avg = %lf\n", avg);

}
--------------------------------------------------------------------------------------------
//5. 배열의 원소 중 최댓값을 리턴하는 함수를 만들고, 호출해보시오.

#include <stdio.h>
int maxA(int aa[], int sz) {
	 
	int max;
	max = aa[0];
	for (int i = 1; i < sz; i++) {
		if (aa[i] > max)
			max = aa[i];
	}
	return max;
}

void main() {

	int ary[6];

	printf("배열값을 입력하세요\n");
	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &ary[i]);
	}
	
	printf("%d", maxA(ary, 6));
}
--------------------------------------------------------------------------------------------
// 6. 배열의 각 원소값을 거꾸로 바꿔주는 함수를 만들고, 호출해 보시오.(예: {1, 4, 7, 5} -> {5, 7, 4, 1})

#include <stdio.h>
void reverseA(int aa[], int sz)
{
	int tmp;

	for (int i = 0; i < sz / 2; i++) {
		tmp = aa[i];
		aa[i] = aa[sz - 1 - i];
		aa[sz - 1 - i] = tmp;
	}
}

void main() {
	int ary[10] = { 1,2,3,4,5,6,7,8,9,10 };

	reverseA(ary, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", ary[i]);
	}
}
--------------------------------------------------------------------------------------------
//7. 직각 삼각형이 되는 세변으로 이루어지는 정수집합을 10세트 찾아 보시오.
//(함수를 적절히 만드시오.단, (3, 4, 5)와(4, 3, 5)처럼 순서만 다른 세트는 같은 세트임)

#include <stdio.h>
#include <math.h>

int tri(int a, int b, int c) {

	if ((pow(a, 2) + pow(b, 2)) == pow(c, 2)) {
		return 1;

	}
	else
		return 0;
}
void main() {
	int cnt = 0;
	
	int a, b, c;
	for (c = 1; ; c++) {
		for (b = 1; b < c; b++) {
			for (a = 1; a < b; a++) {
				if (tri(a,b,c)==1) {
					cnt++;
					printf("(%d, %d, %d)\n", a, b, c);
					
				}
			}
		}
		if(cnt==10)
			break;
	}
}
------------------------------------------------------------------------------
// 01. 인치(inch)를 센티미터(cm)로 바꾸는 함수를 작성하여, 
// 표준입력으로 받은 인치를 센티미터로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

double trans(double inch) {
	double tr = 0;
	tr = inch * 2.54;
	return tr;
}

void main() {

	double in;

	printf("거리를 인치로 입력하세요. -> ");
	scanf_s("%lf", &in);

	printf("입력한 %lf인치는 %lf센티미터이다.", in, trans(in));

}