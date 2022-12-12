<h1 align="center">Chapter 4</h1>

전처리기의 역할 : 컴파일(compile) 전, 전처리기(preprocessor)의 전처리 (preprocess) 과정이 필요, 컴파일 이전에 하는 작업, 처리 이후 전처리기가 생성한 소스를 컴파일

전처리 지시자(preprocess directives) : 전처리 과정에서 처리되는 문장

↓주요 헤더파일

![image](https://user-images.githubusercontent.com/119505410/207085419-453a0bc8-b009-4b43-87d5-17ada7a7aa67.png)

출력함수 printf() : 일련의 문자 및 값으로 서식을 지정하여 표준 출력인 명령 프롬프트 콘솔(console)에 다양한 변수와 상수를 출력하는 함수, 형식지정자 형식에 맞게 콘솔로 출력할 값이 표시, 형식지정자는 출력 값의 목록과 순서대로 서로 일치해야 함

입력함수 scanf() : 대표적인 입력 함수, %d와 %c, %lf 등의 형식 지정자를 사용, 반드시 변수 앞에 주소 를 의미하는 &을 붙여 ‘&변수이름’으로 사용


문자 입력 함수 getchar(),  출력 함수 putchar() ※헤더파일 stdio.h가 필요하다



