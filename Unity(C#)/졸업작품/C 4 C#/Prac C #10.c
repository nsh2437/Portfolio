//1-1 정수 값을 인자로 받아 3배 하여 리턴 하는 함수를 만들고,(  int  tripleValue(int ) ) 호출해보시오.

#include <stdio.h>

int tripleValue(int a)
{
	return a * 3;
}
void main() {
	int x, res;

	
	printf("정수 값을 입력!\n");
	scanf_s("%d", &x);
	res = tripleValue(x);
	printf("%d\n", res);
}
-----------------------------------------------------------------------------------------------------------------
//1 - 2 정수변수 주소를 인자로 받아 3배 하여 리턴 하는 함수를 만들어(int  triplePointer1(int*)) 호출해보시오.

#include <stdio.h>

int triplePointer(int* p)
{
	return(*p) * 3;
}
void main() {
	int x, res;


	printf("정수 값을 입력!\n");
	scanf_s("%d", &x);
	res = triplePointer(&x);
	printf("%d\n", res);
}
---------------------------------------------------------------------------------------------------------------
//2 두 실수를 입력 받고, swap함수를 구현하고 호출하여 교환해 보시오.

#include <stdio.h>

void swap(double *, double *);

void main() {
	
	double a,b;

	printf("두 실수를 입력!\n");
	scanf_s("%lf %lf", &a, &b);
	swap(&a, &b);
	printf("a=%lf, b=%lf", a, b);
}
void swap(double* p, double* q)
{
	double t;

	t = *p;
	*p = *q;
	*q = t;
}
----------------------------------------------------------------------------------------------------------
// 3 정수 2개를 입력 받고, 다음의 함수 void  cubic(int *, int *)를 호출 하여 그 두 변수를 각각 세제곱하시오. 그리고 출력해 보시오.

#include <stdio.h>

void* cubic(int* a, int* b) {
	
	*a = (*a) * (*a) * (*a);
	*b = (*b) * (*b) * (*b);
	printf("result: %d, %d", *a, *b);
}
void main() {

	int f, s;
	int res;

	printf("정수 두개를 입력하십시오.>>");
	scanf_s("%d %d", &f, &s);
	cubic(&f, &s);
}
--------------------------------------------------------------------------------------------------------


01 다음에서 서술 내용이 맞으면 O 틀리면 X 하시오.

1) *는 피연산자인 변수의 메모리 주소를 반환하는 주소연산자이다. (X)
2) int형 포인터 pi에 저장된 주소값이 100이라면 (pi+1)은 101이다. (X)
3) 포인터 변수는 자료 유형에 따라 그 크기가 다르다.(X)
4) 연산식 ++*p는 ++(*p)으로 포인터 p가 가르키는 값을 1증가시킨 후 참조한다. (X)
5) 변수의 주소값은 형식제어문자 %u 또는 %d로 직접 출력할 수 있다.(O)
6) '*포인터변수는) l-value와 r-value로 모두 사용 가능하나, 주소값인'&변수'는 r-value로만 사용가능하다.(O)

02 다음에서 비어있는 부분을 적당히 채우시오.

1) 메모리 공간은 바이트마다 고유한 ( 주소 )가 있다.
2) ( & ) 는 피연산자의 변수의 메모리 주소를 반환하는 주소연산자이다.
3) 포인터 변수 선언에서 자료형과 포인터 변수 이름 사이에 연산자 ( * )를 삽입한다.
4) 포인터 변수가 가르키고 있는 변수를 참조하려면 간접연산자(indirection operator) ( * )를 사용한다.
5) 포인터 변수에 data 주소를 대입하려면 주소 연산자 &를 사용한 연산식 ( &data )를 이용한다.

03 다음 각각의 문제에서 가장 적절한 것을 하나 선택하시오.

1) 다음은 주소와 포인터에 대한 설명이다. 다음 중에서 잘못 설명하고 있는 것은 무엇인가? ( 라 )
	
	가) 포인터는 주소를 저장할 수 있는 변수이다.
	나) 포인터의 자료형도 명시적으로 형변환이 가능하다.
	다) 주소연산자는 &으로 전위연산자이다.
	라) 간접연산자는 *으로 후위연산자이다.

2) 다음 코드가 수행된 후 이어질 문장으로 바른 것은 무엇인가? ( 다 )
// int i = 10;	
	가) int *p =i;	나) int *p = *i;
	다) int *p =&i;	라) int *p = @i;

3) 다음 코드가 수행된 후 이어질 문장으로 바르지 못한 것은 무엇인가? ( 가 )
// int data1 = 100, data2;
// int *p;
	가) p = data1;	나) p = &data2;
	다) data2 = 20;	라) data2 = data1;

4) 다음과 같은 문장이 수행된 후 변수 i에 저장된 값은 무엇 인가? (라  )
// int i = 10;
// int *p = &i;
// (*p)++;
	가) 8	나) 9
	다) 10	라) 11

5) 다음 코드가 수행된 후 이어질 문장으로 바르지 못한 것은 무엇인가?( 가 )
// int i = 10; int *pi;
// double d = 3.7; double *pd;
	가)  pi = pd;	나) pd = &d;
	다)  pi = &i;	라) *pd = 5.8;	

06 다음 프로그램에서 문법 오류 및 실행 오류를 찾아 수정하시오.

1)
#include <stdio.h>
int main(void) {
	int* p = 100;
	int input = 20;
	p = &input;
	*p = 50;
	printf("%d %d\n", *p, input);
	return 0;
}
2)
#include <stdio.h>
int main(void) {
	int a = 20;
	double *p = &a;
	printf("%d\n", *p);
	return 0;
}


07 다음 프로그램의 결과를 기술하시오

1)
#include <stdio.h>
int main(void) {
	int value = 20;
	printf("%d %d\n", value, *&value);
	return 0;
}
20 20

2)
#include <stdio.h>

int main(void) {
	double x = 3.92;
	double *p = &x;
	*p = 5.27;
	printf("%.2f %.2f\n", x, *p);
	printf("%d\n", p == &x);
	return 0;
}
5.27 5.27
1

3) 
#include <stdio.h>
int main(void)
{
	int a = 5, b = 7;
	int* p = &a, * q = &b;
	printf("%d %d\n", ++a, b--);
	printf("%d %d\n", ++*p, --*p);
	printf("%d %d\n", (*p)++, (*q)--);
	return 0;
}
6 7
6 6
6 6	