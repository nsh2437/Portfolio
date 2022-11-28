//2. 자연수를 입력받다가 100 이상의 값이 입력되면 평균과 합 출력하기

#include <stdio.h>
#include <stdlib.h>

//계속 n값을 입력받다가 100이상의 수를 입력받으면 합과 평균을 출력한다.

int main()
{
    int n; int sum = 0; int time = 1;
    do {
        printf("\n%d : ", time);
        scanf("%d", &n);
        sum += n;
        time++;
        printf("\n%d times you entered, now %d, sum is %d\n", time - 1, n, sum);
    } while (n < 100);
    printf("\nsum is %d\n", sum);
    printf("everage is %.1f\n", (float)sum / (time - 1));
    return 0;

}