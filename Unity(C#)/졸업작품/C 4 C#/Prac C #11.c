//1 세 개의 정수포인터를 인자로 받아 제일 큰 수를 리턴 하는 함수를 만들고 호출해 보시오.
// (예)int  maxValue(int*, int*, int*)

#include <stdio.h>

int maxValue(int* a, int* b, int* c) {
	if (*a >= *b && *a >= *c)
		return *a;
	else if (*b >= *a && *b >= *c)
		return *b;
	else
		return *c;
}

void main() {

	int a, b, c, max;

	printf("세 개의 값을 입력하시오\n");
	scanf_s("%d %d %d", &a, &b, &c);
	max = maxValue(&a, &b, &c);
	printf("%d", max);
}
-----------------------------------------------------------------------------------------------------------
//2 세 개의 정수포인터를 인자로 받아 제일 큰 수의 주소를 리턴 하는 함수를 만들고 호출해 보시오.
//(예)int * maxPosition(int *, int *, int *)


#include <stdio.h>

int* maxPosition(int* a, int* b, int* c) {
	if (*a >= *b && *a >= *c)
		return a;
	else if (*b >= *a && *b >= *c)
		return b;
	else
		return c;
}

void main() {

	int a, b, c, *maxp;

	printf("세 개의 값을 입력하시오\n");
	scanf_s("%d %d %d", &a, &b, &c);
	maxp = maxPosition(&a, &b, &c);
	printf("%p", maxp);
}
-----------------------------------------------------------------------------------------------------------
//3 포인터 인자가 가리키는 변수를 N만큼 더해주는 함수를 만드시오.(void   addN(int* p, int N))

#include <stdio.h>

void addN(int* p, int N);

void main() {

	int a, plus;
	scanf_s("%d %d", &a , &plus);
	addN(&a, plus);
	printf("%d", a);
}

void addN(int* p, int N) {
	*p = *p + N;
}
-----------------------------------------------------------------------------------------------------------
// 4 배열 원소 일부분을 0으로 초기화 하는 함수 void tozero(int *start_pointer, int count) 를 만드시오. 
// (예) int aa[] = {1,3,5,7,9}에서 함수호출 tozero(&aa[2],2)하면 aa[]는 {1,3,0,0,9}로 바뀜

#include <stdio.h>
void tozero(int* start_pointer, int count) {

	for (int cnt = 0; cnt < count; cnt++) {
		*start_pointer = 0;
		*start_pointer++;
	}
	

}

void main() {

	int aa[] = { 1,3,5,7,9 };

	tozero(&aa[2],2);

	for (int i = 0; i < (sizeof(aa)/sizeof(aa[0])); i++) {
		printf("%d ", aa[i]);
	}

}
-----------------------------------------------------------------------------------------------------------
//5 수업시간에 구현한 swap()함수를 이용하여 배열의 각 원소를 거꾸로 만들어 보시오. (예) {1,4,5,7,9} -> {9,7,5,4,1}

#include <stdio.h>

void swap(int *first, int *last){
	int tmp;
		
	tmp = *first;
	*first = *last;
	*last = tmp;
}


void main() {

	int aa[] = { 1,4,5,7,9 };

	for (int i = 0; i < (sizeof(aa) / sizeof(aa[0])) / 2; i++) {
		swap(&aa[i], &aa[(sizeof(aa) / sizeof(aa[0])) - 1 - i]);
	}

	for (int i = 0; i < (sizeof(aa) / sizeof(aa[0])) ; i++) {
		printf("%d", aa[i]);
	}

	
}
-----------------------------------------------------------------------------------------------------------
// 01 int형 변수 data에 100을 저장하고 변수 data의 주소와 저장 값을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main() {

	int data = 100;

	int* p = &data;

	printf("%d %p", *p, p);
}