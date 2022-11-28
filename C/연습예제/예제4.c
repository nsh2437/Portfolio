//4. 구구단 a단부터 b단까지 출력하기

#include <stdio.h>
#include <stdlib.h> 

int main(void)
{

    int i; int j; int a; int b;

    printf("구구단! a단부터 b단까지!\n\n");
    printf(" a단 : ");
    scanf("%d", &a);
    printf(" b단 : ");
    scanf("%d", &b);

    if (a >= b) {
        printf("b는 a보다는 커야 합니다!");
    }
    else {
        for (i = a; i <= b; i++) {
            printf("\n%d단 : \n", i);
            for (j = 1; j <= 9; j++) {
                printf("%d*%d=%d\n", i, j, i * j);
            }
            printf("\n\n");
        }

    }
    return 0;
}