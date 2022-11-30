//13. 두 사각형의 꼭짓점 좌푯값을 각각 입력받고, 두 사각형이 겹치는 범위와 두 사각형을 포함하는 최소의 사각형의 좌푯값을 출력

/** 정보과학 문제 풀이 답안 설명용  / 171037 2PAC 이호은 **/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //색깔 출력하는 함수
#include <conio.h> //색깔 출력하는 함수

//변수명을  sqi로 하고 x, y를 정수값으로 갖는 구조체 선언
typedef struct {
    int x;
    int y;
}sqi;

/** 메인 함수 **/
int main(int argc, char* argv[]) {

    //구조체 변수 선언(사각형 A, B 각각 두 개씩(직사각형을 구성하기 위한 최소 좌표))
    sqi a_one, a_two, b_one, b_two;

    //x, y 좌표 정렬을 위한 x, y 4칸짜리 배열 선언
    int arr_x[4]; int arr_y[4];

    //x, y 입력받음
    printf("enter x, y\nenter x (space) y ex) 3 4\n");
    printf("first point of squar one : ");
    scanf("%d %d", &a_one.x, &a_one.y);
    printf("second point of squar one : ");
    scanf("%d %d", &a_two.x, &a_two.y);
    printf("first point of squar two : ");
    scanf("%d %d", &b_one.x, &b_one.y);
    printf("second point of squar two : ");
    scanf("%d %d", &b_two.x, &b_two.y);

    //입력 받은 x, y의 좌표들을 차례대로 정렬 없이 배열에 대입
    arr_x[0] = a_one.x; arr_x[1] = a_two.x; arr_x[2] = b_one.x; arr_x[3] = b_two.x;
    arr_y[0] = a_one.y; arr_y[1] = a_two.y; arr_y[2] = b_one.y; arr_y[3] = b_two.y;

    //정렬을 위해 temp 변수(임시 변수)에 크기, 순서 상관 없이 x, y의 첫 번째 좌표 값을 넣어줌
    int temp_x = arr_x[0]; int temp_y = arr_y[0];

    //반복문 변수 i, j 선언 그리고 x, y에 최소, 최대를 저장할 변수 선언
    int i, j; int minx, miny, maxx, maxy, temp;

    //x정렬(temp로 하나씩 비교해가며 비교한 수 작고 큰 수를 대입)
    for (i = 0; i < 4; i++)
    {
        for (j = i; j < 4; j++)
        {
            if (arr_x[i] > arr_x[j])
            {
                temp = arr_x[i];
                arr_x[i] = arr_x[j];
                arr_x[j] = temp;
            }
        }
    }

    //y정렬(temp로 하나씩 비교해가며 비교한 수 작고 큰 수를 대입)
    for (i = 0; i < 4; i++)
    {
        for (j = i; j < 4; j++)
        {
            if (arr_y[i] > arr_y[j])
            {
                temp = arr_y[i];
                arr_y[i] = arr_y[j];
                arr_y[j] = temp;
            }
        }
    }

    //크기순으로 정렬된 배열에서 최대, 최소값을 변수에 저장
    minx = arr_x[0];
    maxx = arr_x[3];
    miny = arr_y[0];
    maxy = arr_y[3];

    /** 겹치는 부분 출력 **/

    //j는 y좌표 반복하여 설정(y의 최댓값+2부터 0까지)
    for (j = maxy + 2; j >= 0; j--) {
        //i는 x좌표 반복하여 설정(0부터 x의 최댓값+3까지)
        for (i = 0; i < maxx + 3; i++) {
            //만약 현재 가르키고 있는 좌표(j, i)가 두 사각형 범위 안에 있다면 겹치는 것으로 처리
            if ((i >= a_one.x && i <= a_two.x && j >= a_one.y && j <= a_two.y) && (i >= b_one.x && i <= b_two.x && j >= b_one.y && j <= b_two.y)) {
                //빨간색으로 글자 출력
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
                printf("■");
            }
            //만약 현재 가르키고 있는 좌표(j, i)가 한 사각형 범위 안에만 있다면 한 사각형 범위로 처리
            else if (i >= a_one.x && i <= a_two.x && j >= a_one.y && j <= a_two.y) {

                //노란색으로 글자 출력
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("■");
            }

            else if (i >= b_one.x && i <= b_two.x && j >= b_one.y && j <= b_two.y) {

                //초록색으로 글자 출력
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("■");
            }

            //만약 현재 가르키고 있는 좌표(j, i)가 어느 사각형 범위에도 포함되어 있지 않다면
            else {
                //흰색으로 글자 출력
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("■");
            }
        }
        //해당 y좌표 라인에서 x좌표의 반복이 끝나면 엔터를 쳐서 다음 y좌표(y-1)로 넘어감
        printf("\n");
    }

    /** 포함하는 최소 크기의 사각형 출력 **/

    //x, y 각각의 최소값, 최대값 좌표를 출력
    printf("points of the squar is (%d, %d), (%d, %d)", minx, miny, maxx, maxy); printf("\n");

    //j는 y좌표 반복하여 설정(y의 최댓값+2부터 0까지)
    for (j = maxy + 2; j >= 0; j--) {
        //i는 x좌표 반복하여 설정(0부터 x의 최댓값+3까지)
        for (i = 0; i < maxx + 3; i++) {
            //만약 현재 가르키고 있는 좌표(j, i)가 최소, 최대 범위에 들어있다면
            if (i >= minx && i <= maxx && j >= miny && j <= maxy) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("■");
            }
            else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("■");
            }
        }
        printf("\n");
    }

    //메인 함수 종료
    return 0;
}