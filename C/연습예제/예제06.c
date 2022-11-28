//6. 반지름 길이가 r인 원넓이 출력하기
 
#include <stdio.h>
#include <stdlib.h>

int r = 0; double s = 0;

int Cir(int a)
{
    s = a * a * 3.1415926535897932;//384626433832795;
    return s;
}

int main(void)
{
    printf("r을 입력하세요 : ");
    scanf("%d", &r);
    Cir(r);
    printf("%lf", s);
    return 0;
}
