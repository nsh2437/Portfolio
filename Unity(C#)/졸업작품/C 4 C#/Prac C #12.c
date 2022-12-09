//1 입력된 문자열에서 소문자가 있으면 대문자로 바꾸어 문자열을 출력하시오.(라이브러리 쓰지 말고 직접 하시오)

#include <stdio.h>

void main() {

	char str[100];
	int i = 0;

	printf("문자열 입력!\n");
	scanf_s("%s", str, 100);
	while (str[i]) {	//str[i] != '\0'
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	puts(str);
}
--------------------------------------------------------------------------------------------------
//2 문자열의 빈칸(스페이스) 개수를 리턴해주는 함수를 만들고, 호출하시오.
//(int spaceCnt(char *) //문자열 입력 받을 때 gets_s() 사용할 것!)

#include <stdio.h>
int spaceCnt(char* p)
{
	int cnt = 0;

	while (*p) {
		if (*p == ' ') cnt++;
		p++;
	}
	return cnt;
}
void main() {

	char str[100];
	
	printf("공백이 포함된 문자열 입력\n");
	gets_s(str, 100);
	
	printf("공백의 개수 :%d\n", spaceCnt(str));
}
---------------------------------------------------------------------------------
//3 입력 받은 문자열 중 알파벳 아닌 것 개수 구하기.
#include <stdio.h>
void main()
{
	char str[100];
	int cnt = 0;
	scanf_s("%s", str, 100);
	int i = 0;
	while (str[i]) {
		if (!(str[i] >= 'A' && str[i] <= 'Z'
			|| str[i] >= 'a' && str[i] <= 'z'))
			cnt++;
		i++;
	}
	printf("result : %d\n", cnt);
}
------------------------------------------------------------------------------
// 4 문자열을 입력 받아 3 글자씩 잘라 각각 새 라인에 출력하시오.

#include <stdio.h>
#include <string.h>
void main() {

	char str[100];
	
	gets_s(str, 100);
	int i = 0;
	while (str[i]) {
		printf("%c", str[i]);
		if ((i+1) % 3 == 0) {
			
			puts("");
		}
		i++;
	}
	puts("");
}
--------------------------------------------------------------------------
// 5 입력 받은 문자열 중 맨 가운데 문자를 출력하시오.(길이가 짝수면 2개 출력)

#include <stdio.h>
#include <string.h>

void main() {

	char str[100];

	gets_s(str, 100);

	int size = strlen(str);

	if (size % 2 != 0) {
		printf("%c", str[size / 2]);
	}
	else if (size % 2 == 0) {
		printf("%c, %c", str[size / 2 - 1], str[size / 2]);
	}
	
}
-------------------------------------------------------------------------
//01 표준입력으로 문자를 하나 입력 받아 아스키코드 값을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main() {

	char ch;
	
	printf("문자를 하나 입력하세요 >>");
	scanf_s("%c", &ch, 1);

	int askii = (int)ch;
	printf("%c의 아스키 코드값은 십진수로 %d 입니다.", ch, askii);

}