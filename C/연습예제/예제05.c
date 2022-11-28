//5. 크기가 100인 배열을 차례로 입력받다가 0이 입력되면 반대 순서로 배열 출력하기

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int arr[100] = {};

    for (i = 0; i < 100; i++) {
        printf("int arr[%d] : ", i);
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            break;
        }
    }


    for (i += 1; i >= 0; i--) {
        printf("arr[%d] = %d", i, arr[i]);
    }

    return 0;
}
