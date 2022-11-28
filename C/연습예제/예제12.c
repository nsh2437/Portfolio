//12. 이름, 전화번호, 주소를 문자열로 입력받아 각각의 배열에 저장하고 출력하기
 
#include <stdio.h>
#include <stdlib.h>

struct info
{
    char name[100];
    char number[100];
    char city[100];
};

int main(void)
{
    struct info a;
    printf("이름, 전화번호, 주소를 입력하세요 : ");
    scanf("%s %s %s", a.name, a.number, a.city);
    printf("이름 : %s\n", a.name);
    printf("전화번호 : %s\n", a.number);
    printf("주소 : %s\n", a.city);

    return 0;
}