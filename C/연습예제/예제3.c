//3. 입력받은 정수가 음수인지 양수인지 판별하기

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("정수 n을 입력하세요. 종료하려면 0을 입력하세요.");

    do {
        printf("\n\nn : ");
        scanf("%d", &n);
        if (n > 0)
            printf("%d은(는) 양수입니다.\n", (int)n);
        else if (n < 0)
            printf("%d은(는) 음수입니다.\n", (int)n);
    } while (n != 0);
    printf("프로그램을 종료합니다.");
    return 0;
}