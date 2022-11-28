//9. 자연수 N을 입력받고 짝수이면 2, 홀수이면 3으로 나누는 작업을 반복, 1이 되면 나눈 횟수 출력
 
#include <stdio.h>
#include <stdlib.h>

//# 4월 16일 100만 이하의 자연수 N을 입력받아 짝수이면 2로 홀수이면 3으로 나누는 작업을 반복하다가 그 값이 1이 되면 그때까지 나누었던 작업의 횟수를 출력하는 프로그램을 구성하시오.

int scan(void) //정수를 입력받는 함수
{
    int enter;

    printf("number : ");
    scanf("%d", &enter);

    return enter;
}

void intprint(int print) //정수를 간단히 출력하는 함수
{
    printf("\nresult : %d\n", print);
    return 0;
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
    int slc = numsize(2, 1000000, n);     //수의 범위를 지정
    if (slc == 1) {
        /*if(n%2==0){     //짝수이면
            return 1 + f(n/2);
        }
        else{   //홀수이면
            return 1 + f(n/3);
        }*/
        return 1 + f(n / ((n % 2 == 0) ? 2 : 3)); //삼항연산자 사용 -> (조건)?(참일때):(거짓일때)
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