//1 숫자 2개를 입력 받아 차이를 구하라.

#include <stdio.h>

void main() {

	int a, b, res;

	printf("숫자 2개를 입력하시오\n");
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		res = a - b;
	}
	else {
		res = b - a;

	}
	printf("차이 : %d\n", res);
}
---------------------------------------------------
//2 숫자 입력 받아 양수이면 "positive", 음수이면 "negative", 0이면 "zero"를 출력하시오.

#include <stdio.h>

void main() {
	int a;

	printf("숫자 입력하시오\n");
		scanf_s("%d", &a);
	
		if (a > 0)			puts("positive");
		else if (a < 0)		puts("negative");
		else			puts("zero");
}
---------------------------------------------------------------
//3 세변의 길이를 입력 받아 삼각형의 둘레를 구하시오.(단 삼각형이 형성 안 되는 경우 체크하여 오류 처리 할 것)
#include <stdio.h>
void main()
{
	int a, b, c;

	printf("세변의 길이를 입력하시오\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < b + c && b < c + a && c < a + b)
		printf("삼각형 둘레: %d\n", a + b + c);
	else
		printf("삼각형이 형성 안 됨\n");
}
-------------------------------------------------------------------
// 4 연도를 입력 받아 윤년인지 아닌지 알려주기
#include <stdio.h>

void main() {
	int y;

	printf("연도를 입력하시오\n");
	scanf_s("%d", &y);

	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		printf("%d년은 윤년입니다\n", y);
	else
		printf("%d년은 윤년이 아닙니다\n", y);
}
-------------------------------------------------------------------
//5 연봉에 따른 세금 계산하기
//(단, 10, 000, 000원까지는 10 %, 10, 000, 000원 초과액은 40, 000, 000원까지 20 %, 40, 000, 000원 초과액은 30 % 로 할 것!)
//(예)23, 000, 000원이면 세금은 10, 000, 000원 * 10 % +13, 000, 000원 * 20 % = 1, 000, 000 + 2, 600, 000 = 3, 600, 000원임
#include <stdio.h>

void main() {

	int money;
	int use;

	int interest;
	
	int interest2;
	printf("연봉을 입력하십시오.\n");
	scanf_s("%d", &money);
	
	if (money <= 10000000) {
		interest = money * 0.1;
		printf("세금은 %d 원입니다\n", interest);
	}
	else if (40000000 > money && money > 10000000) {
		interest2 = (10000000 * 0.1) + ((money - 10000000) * 0.2);
		printf("세금은 %d 원입니다\n", interest2);
	}
	else
		interest = money * 0.3;
		printf("세금은 %d 원입니다.\n", interest);
	
}
-------------------------------------------------------------------------------
//6 두 정수를 입력 받아  큰 수를 작은 수로 나눈 결과를 실수값으로 정확히 출력하시오.

#include <stdio.h>;

void main() {

	int a, b;
	double c;

	puts("두 정수를 입력하시오.");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		c = (double)a / (double)b;
		printf("두 수의 나눈값은 %lf ", c);
	}
	else if (b > a) {
		c = (double)b / (double)a;
		printf("두 수의 나눈값은 %lf ", c);
	}
	else if (a = b)
		c= (double)b / (double)a;
		printf("두 수의 나눈값은 %lf ", c);

}
----------------------------------------------------------------------------------
//7 입력 받은 문자가 대문자이면 소문자로, 소문자이면 대문자로, 그 외는 그대로 출력하시오.
#include <stdio.h>


void main() {

	char word;

	printf("문자를 입력하십시오 \n");
	scanf_s("%c", &word);

	if (word >= 'A' && word <= 'Z') {
		printf("문자는: %c", word += 32);
	}
	else if( word >= 'a' && word <= 'z'){

		printf("문자는: %c", word -= 32);
	}
}
-------------------------------------------------------------------------------------
// 8 표준입력으로 받은 연도의 윤년을 판단하는 프로구램을 if문을 사용하여 작성하시오
// 4로 나누어지나 100으로 나누어 떨어지는 않는 해는 윤년
// 또는 400으로 나누어 떨어지는 해는 윤년
#include <stdio.h>

void main() {
	int y;

	printf("년도를 입력: ");
	scanf_s("%d", &y);

	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		printf("%d 년은 윤년입니다\n", y);
	else
		printf("%d 년은 윤년이 아닙니다\n", y);
}
--------------------------------------------------------------------------------------