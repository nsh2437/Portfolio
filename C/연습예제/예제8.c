//8. 100 이하의 자연수를 입력받고, 1부터 그 자연수까지의 합을 출력하기

#include <stdio.h>
#include <stdlib.h>

//# 4월 16일 100이하의 자연수를 입력받아 1부터의 합을 출력하는 함수

int scan(void) //정수를 입력받는 함수
{
    int enter;

    printf("number : ");
    scanf("%d", &enter);

    return enter;
}

void intprint(int print) //정수를 간단히 출력하는 함수
{
    printf("\n%d\n", print);
}

int numsize(int min, int max, int num) //수의 범위를 측정하는 함수
{
    if (min <= num && num <= max) {
        return 1;
    }
    else {
        return 2;
    }
}

int f(int n)
{
    int slc;
    slc = numsize(1, 100, n);
    if (slc == 1) {
        n += f(n - 1);
        //printf("\n%d\n", n);
        return n;
    }
    else return 0;
}

int main()
{
    int n;
    n = scan();
    intprint(f(n));
    return 0;
}