//7. 50 이하의 자연수를 입력받고, 내림차순으로 출력하기

#include <stdio.h>
#include <stdlib.h>

void f(int b)
{
    if (b >= 1) {
        printf("%d\n", b);
        f(b - 1);
    }
}

int scanprint(void)
{
    int a;
    printf("number : ");
    scanf("%d", &a);
    return a;
}

int main(void)
{
    int n;

    n = scanprint();

    if (n <= 50 && n >= 1) {
        f(n);
    }
    else {
        printf("\nenter the natural number smaller than 50\n");
    }
    return 0;
}
