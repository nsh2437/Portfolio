//1 크기가 30인 배열을 만들어 {3,6,9...}로 초기화 한 후 배열의
//총 합을 구하시오
#include <stdio.h>

void main() {

	int array[30];
	int sum = 0;
	for (int i = 0; i < 30; i++) {
		array[i] = (i+1)* 3;

		sum += array[i];
		
	}
	printf("배열의 총합은 : %d", sum);
}
--------------------------------------------------------------------------
// 2 크기가 3*4인 이차원배열을 만들어, 임의의 값(rand() 이용)으로 초기화 한 후
// 평균을 구하시오. (단, int rand() = 0~32767 리턴, stdlib.h 필요

#include <stdio.h>
#include <stdlib.h>

void main() {

	int array[3][4];
	double res = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++){
			array[i][j] = rand();
			

			res += array[i][j];
		}
	}
	
	printf("평균 : %f",res/12.0);
}
--------------------------------------------------------------------------
//3 10개의 값으 입력 받아 일차원 배열에 저장한 후,
//그 값들 중에 최대값을 찾아 출력하시오

#include <stdio.h>

void main() {

	int a;
	int array[10];
	
	printf("10개값 입력하세요 \n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}
	a = array[0];
	for (int i = 1; i < 10; i++) {
		if ( array[i] > a) a = array[i];
	}

	printf("최대값: %d\n", a);
}
------------------------------------------------------------------------------
//4 길이가 9인 문자열을 입력 받아, 그 문자열에서 소문자를 찾아 모두 대문자로 바꾸어 문자열을 출력하시오.

#include <stdio.h>

void main() {
	
	char array[10];
	printf("아무 알파벳을 입력해보세요\n");
	scanf_s("%s", array, 10);

	for (int i = 0; i < 9; i++) {
		if (array[i] > 'Z')
			array[i] = array[i] - 32;
	}
	printf("%s", array);
}
-------------------------------------------------------------------------------------
// 5 자연수를 1개 입력 받아, 한 숫자씩 영어로 바꾸어 출력하시오.
//(만일 203 이면, two zero three);

#include <stdio.h>

void main() {

	char* ary[] = { "zero", "one", "two","three","four","five","six","seven","eight","nine"};
	int ary2[100];
	int input;
	printf("자연수를 입력하세요 \n");
	scanf_s("%d", &input);

	
	int j = 0;
	int i;
	for (i = 0; input>0; i++) {
		ary2[i] = input % 10;
		input /= 10;
		j++;
	}
	
	for (j=i; j >= 0; j--) {
		switch (ary2[j]) {
		case 0: printf("%s ", ary[0]);
			break;
		case 1: printf("%s ", ary[1]);
			break;
		case 2: printf("%s ", ary[2]);
			break;
		case 3: printf("%s ", ary[3]);
			break;
		case 4: printf("%s ", ary[4]);
			break;
		case 5: printf("%s ", ary[5]);
			break;
		case 6: printf("%s ", ary[6]);
			break;
		case 7: printf("%s ", ary[7]);
			break;
		case 8: printf("%s ", ary[8]);
			break;
		case 9: printf("%s ", ary[9]);
			break;
		}

	}
	

}
----------------------------------------------------------------------------------------------------------------
//10 다음 [C 프로그래밍] 점수를 2차원 배열에 저장하고, 각 학생의 합과 평균을 구하여 출력하는 프로그램을 작성하시오

#include <stdio.h>

void main() {
	int res = 0;
	
	int ary[5][4] = { {97,90,88,95},{76,89,75,83},{60,70,88,82},{83,89,92,85},{75,73,72,78}};
	char *name[] = { "이현수", "김기수", "김범용", "장기태", "이명수" };
	puts("      이름	    중간	 중간	      기말	   기말");
	puts("====================================================================================");

	
	for (int i = 0; i < 5; i++) {
		printf("%11s", name[i]);
		for (int j = 0; j < 4; j++) {
			printf("%12d ", ary[i][j]);
			res += ary[i][j];
		}
		
		printf("%10d ", res);
		printf("%9.2f", (double)res/4.0);
		puts("");
		
		res = 0;
 	}
}
