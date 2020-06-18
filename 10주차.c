//--------------------if문 사용하기--------------------------------------
// #include<stdio.h>
//
//scanf에러가 나타나는것을 방지한다.
// #define _CRT_SECURE_NO_WARNINGS

// int main()
// {
//    int num1 = 10, num2 = 21;
//    char a = 'a';
    
    //if문의 사용법
//    if (num1 > num2) {
//        printf("num1 이 num2 보다 큽니다.");
//    }else{
//        printf("num2가 num1보다 작습니다.");
//    }
    
//    if (0) {
//        printf("참입니다.");
//    }else{
//        printf("거짓입니다.");
//    }
    
    //if문의 사용법
//    if (num2 == 10) {
//        printf("num2가 10입니다.");
//    }else if (num2 == 20){
//        printf("num2는 20입니다.");
//    }else{
//        printf("num2는 10도 20도 아닙니다.");
//    }
//
//    if (num1 == 10)
//        printf("num1은 10입니다.");
//
    //if문 뒤에는 세미콜론을 붙이면 안됩니다.
//    if (num1 == 20);
//    {
//        printf("num1은 20입니다.");
//    }
    
//    if (a == 97) {
//        printf("a의 값은 97입니다.");
//    }
//    if (a == 'a') {
//        printf("변수 a의 값은 a입니다.");
//    }
    
    
    //사용자에게 숫자를 입력 받아서 10보다 큰지 확인해주는 프로그램
//    int whatNum;
//    printf("숫자를 하나 입력해 주세요 : ");
//    scanf("%d",&whatNum);
//
//    if (whatNum > 10) {
//        printf("입력하신 숫자는 10보다 큽니다.\n");
//    }else{
//        printf("입력하신 숫자는 10보다 작습니다.\n");
//    }
    
//
//    //삼항연산자 ?
//   int num4 = 10;
//   int num5;
//
//   num5 = num4 == 10 ? 100 : 200; // num1이 10이면 num2에 100을 할당, 10이 아니면 num2에 200을 할당
//
//   printf("%d\n", num5);    // 100: num1이 10이므로 num2에는 100이 할당됨
//

//       int num6 = 10;
//
//       if (num6 == 10)    // num1이 10과 같은지 검사
//           printf("10입니다.\n");
//
//       if (num6 != 5)     // num1이 5와 다른지 검사
//           printf("5가 아닙니다.\n");
//
//       if (num6 > 10)     // num1이 10보다 큰지 검사
//           printf("10보다 큽니다.\n");
//
//       if (num6 < 10)     // num1이 10보다 작은지 검사
//           printf("10보다 작습니다.\n");
//
//       if (num6 >= 10)    // num1이 10보다 크거나 같은지 검사
//           printf("10보다 크거나 같습니다.\n");
//
//       if (num6 <= 10)    // num1이 10보다 작거나 같은지 검사
//           printf("10보다 작거나 같습니다.\n");
    
//    printf("%d\n", 1 && 1);    // 1: 1 AND 1은 참
//       printf("%d\n", 1 && 0);    // 0: 1 AND 0은 거짓
//       printf("%d\n", 0 && 1);    // 0: 0 AND 1은 거짓
//       printf("%d\n", 0 && 0);    // 0: 0 AND 0은 거짓
//
//       printf("%d\n", 2 && 3);    // 1: 2 AND 3은 참
    
//    printf("%d\n", 1 || 1);    // 1: 1 OR 1은 참
//       printf("%d\n", 1 || 0);    // 1: 1 OR 0은 참
//       printf("%d\n", 0 || 1);    // 1: 0 OR 1은 참
//       printf("%d\n", 0 || 0);    // 0: 0 OR 0은 거짓
//
//       printf("%d\n", 2 || 3);    // 1: 2 OR 3은 참

//       printf("%d\n", !1);    // 0: NOT 1은 거짓
//       printf("%d\n", !0);    // 1: NOT 0은 참
//
//       printf("%d\n", !3);    // 0: NOT 3은 거짓
    
//       int num1 = 20;
//       int num2 = 10;
//       int num3 = 30;
//       int num4 = 15;
//
//       printf("%d\n", num1 > num2 && num3 > num4);    // 1: 양쪽 모두 참이므로 참
//       printf("%d\n", num1 > num2 && num3 < num4);    // 0: 앞만 참이므로 거짓
//
//       printf("%d\n", num1 > num2 || num3 < num4);    // 1: 앞만 참이므로 참
//       printf("%d\n", num1 < num2 || num3 < num4);    // 0: 양쪽 모두 거짓이므로 거짓
//
//       printf("%d\n", !(num1 > num2));    // 0: 참의 NOT은 거짓
    
//    int num1;
//
//    scanf("%d", &num1);    // 값을 입력받음
//
//    switch (num1)   // num1의 값에 따라 분기
//    {
//    case 1:         // 1일 때
//        printf("1입니다.\n");
//        break;
//    case 2:         // 2일 때
//        printf("2입니다.\n");
//        break;
//    default:        // 아무 case에도 해당되지 않을 때
//        printf("default\n");
//        break;
//    }
    
    
//    for (int i = 0; i < 10; i++)    // 0부터 9까지 증가하면서 10번 반복
//       {
//           printf("Hello, world! %d\n",i);
//       }

//    for (int i = 0; i < 100; i++);    // for 루프 선언문 끝에 세미콜론을 붙이면 안됨
//    {
//        printf("Hello, world!\n");
//    }
    
//    초기식
//    while (조건식) // ← 루프 선언문(loop statement)
//    {
//        반복할 코드
//        변화식
//    }
//    // ↑ 루프 본체(loop body) 및 변화식
    
//    int i = 0;
//    while (i < 100)    // i가 100보다 작을 때 반복. 0에서 99까지 증가하면서 100번 반복
//    {
//        printf("Hello, world!\n");
//        i++;           // i를 1씩 증가시킴
//    }

    
//    int i = 0;
//
//    do     // 처음 한 번은 아래 코드가 실행됨
//    {
//        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
//        i++;                                // i를 1씩 증가시킴
//    } while (i < 100);    // i가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복
    
    
    
//    int num1 = 0;
//
//    while (1)   // 무한 루프
//    {
//        num1++;  // num1을 1씩 증가시킴
//
//        printf("%d\n", num1);
//
//        if (num1 == 100)    // num1이 100일 때
//            break;          // 반복문을 끝냄. while의 제어흐름을 벗어남
//    }


//    for (int i = 1; i <= 100; i++)    // 1부터 100까지 증가하면서 100번 반복
//    {
//        if (i % 2 != 0)               // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
//            continue;                 // 아래 코드를 실행하지 않고 건너뜀
//
//        printf("%d\n", i);
//    }
    
// }

/*---------------------------------------------------------------------*/
/*-------------------------------goto 문법--------------------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int num1;
//
//    scanf("%d", &num1);
//
//    if (num1 == 1)         // num1이 1이면
//        goto ONE;          // 레이블 ONE으로 즉시 이동
//    else if (num1 == 2)    // num1이 2이면
//        goto TWO;          // 레이블 TWO로 즉시 이동
//    else                   // 1도 아니고 2도 아니면
//        goto EXIT;         // 레이블 EXIT로 즉시 이동
//
//ONE:    // 레이블 ONE
//    printf("1입니다.\n");
//    goto EXIT; // 레이블 EXIT로 즉시 이동
//
//TWO:    // 레이블 TWO
//    printf("2입니다.\n");
//    goto EXIT; // 레이블 EXIT로 즉시 이동
//
//EXIT:    // 레이블 EXIT
//    return 0;
//}
/*---------------------------------------------------------------------*/
/*---------------------------------------------------------------------*/
// 중첨 루프문의 탈출
//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//    int num1 = 0;
//
//    bool exitOuterLoop = false;    // 바깥쪽 루프를 빠져나올지 결정하는 변수
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            if (num1 == 20)              // num1이 20이라면
//            {
//                exitOuterLoop = true;    // 바깥쪽 루프도 빠져나가겠음
//                break;                   // 안쪽 루프를 끝냄
//            }
//
//            num1++;
//        }
//
//        if (exitOuterLoop == true)    // 바깥쪽 루프도 빠져나오겠다고 결정했으면
//            break;                    // 바깥쪽 루프를 끝냄
//    }
//
//    printf("%d\n", num1);    // 20
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*------------------------중첩 루프문의 탈출---------------------------------------------*/
//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            if (num1 == 20)    // num1이 20이라면
//                goto EXIT;     // 레이블 EXIT로 즉시 이동
//
//            num1++;
//        }
//    }
//
//EXIT:    // 레이블 EXIT
//    printf("%d\n", num1);    // 20
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*-------------------------보기 쉬운 코드란?--------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    for (int i = 1; i <= 100; i++)   // 1부터 100까지 100번 반복
//    {
//       //if (i % 3 == 0 && i & 5 == 0) 이 사람이 더 보기 편하다.

//        if (i % 15 == 0)             // 15의 배수(3과 5의 공배수)일 때
//            printf("FizzBuzz\n");    // FizzBuzz 출력
//        else if (i % 3 == 0)         // 3의 배수일 때
//            printf("Fizz\n");        // Fizz 출력
//        else if (i % 5 == 0)         // 5의 배수일 때
//            printf("Buzz\n");        // Buzz 출력
//        else
//            printf("%d\n", i);       // 아무것도 해당되지 않을 때 숫자 출력
//    }
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*-------------------------배열의 선언과 참조--------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 배열을 생성하고 값 할당
//
//    printf("%d\n", numArr[0]);    // 11: 배열의 첫 번째(인덱스 0) 요소 출력
//    printf("%d\n", numArr[5]);    // 66: 배열의 여섯 번째(인덱스 5) 요소 출력
//    printf("%d\n", numArr[9]);    // 110: 배열의 열 번째(인덱스 9) 요소 출력
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------배열의 초기화-----------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int numArr[10] = { 0, };      // 배열의 요소를 모두 0으로 초기화
//
//    printf("%d\n", numArr[0]);    // 0: 배열의 첫 번째(인덱스 0) 요소 출력
//    printf("%d\n", numArr[5]);    // 0: 배열의 여섯 번째(인덱스 5) 요소 출력
//    printf("%d\n", numArr[9]);    // 0: 배열의 열 번째(인덱스 9) 요소 출력
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------------for문을 이용한 배열의 요소 출력-----------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
//
//    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
//    {
//        printf("%d\n", numArr[i]);    // 배열의 인덱스에 반복문의 변수 i를 지정
//    }
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*---------------------------학생들의 점수 평균 프로그램2------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
//    int sum = 0;    // 합을 저장할 변수는 0으로 초기화
//
//    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
//    {
//        sum += numArr[i];    // sum과 배열의 요소를 더해서 다시 sum에 저장
//    }
//
//    printf("%d\n", sum);    // 605
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*--------------------------함수의 선언법-------------------------------------------*/
//#include <stdio.h>
//
//void hello()    // 반환값이 없는 hello 함수 정의
//{
//    printf("Hello, world!\n");    // Hello, world! 출력
//}
//
//int main()
//{
//    hello();    // hello 함수 호출
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*---------------------------함수의 반환값------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    hello();    // hello 함수를 찾을 수 없음. 컴파일 에러
//
//    return 0;
//}
//
//void hello()    // 반환값이 없는 hello 함수 선언 및 정의
//{
//    printf("Hello, world!\n");    // Hello, world! 출력
//}

/*--------------------------------------------------------------*/
/*-------------------------빈환값이 있는 함수--------------------------------------------*/
//#include <stdio.h>
//
//int one()    // 반환값이 int형인 one 함수 정의
//{
//    return 1;    // 1을 반환
//}
//
//int main()
//{
//    int num1;
//
//    num1 = one();    // int형을 반환했으므로 int형 변수에 저장
//
//    printf("%d\n", num1);    // 1
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*---------------------------반환값이 있는 함수의 사용------------------------------------------*/
//#include <stdio.h>
//
//void helloNumber(int num1)    // 반환값 없음, int형 매개변수 한 개 지정
//{
//    printf("Hello, %d\n", num1);    // Hello, 와 매개변수를 조합하여 문자열 출력
//}
//
//int main()
//{
//    helloNumber(10);    // Hello, 10: helloNumber에 10을 넣어서 호출
//    helloNumber(20);    // Hello, 20: helloNumber에 20을 넣어서 호출
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*-------------------------두수를 더하는 함수--------------------------------------------*/
//#include <stdio.h>
//
//int add(int a, int b)    // 반환값 자료형은 int, int형 매개변수 두 개 지정
//{
//    return a + b;    // 매개변수 a와 b를 더한 결과를 반환
//}
//
//int main()
//{
//    int num1;
//
//    num1 = add(10, 20);     // 함수를 호출할 때 10과 20을 전달. 10과 20을 더한 값인 30이 반환됨
//
//    printf("%d\n", num1);   // 30
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------------변수의 위치-----------------------------------------*/
//https://dojang.io/mod/page/view.php?id=274
//#include <stdio.h>
//
//int main()
//{
//    int num1 = 10;
//
//    printf("%p\n", &num1);    // 008AF7FC: num1의 메모리 주소를 출력
//                              // 컴퓨터마다, 실행할 때마다 달라짐
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*--------------------------포인터 변수의 선언-------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // int형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    printf("%p\n", numPtr);    // 0055FC24: 포인터 변수 numPtr의 값 출력
//                               // 컴퓨터마다, 실행할 때마다 달라짐
//    printf("%p\n", &num1);     // 0055FC24: 변수 num1의 메모리 주소 출력
//                               // 컴퓨터마다, 실행할 때마다 달라짐
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*--------------------------포인터 변수의 선언과 참조-------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // 정수형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    printf("%d\n", *numPtr);    // 10: 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져옴
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*------------------------------역참조 연산자2---------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // 정수형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    *numPtr = 20;     // 역참조 연산자로 메모리 주소에 접근하여 20을 저장
//
//    printf("%d\n", *numPtr);    // 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
//    printf("%d\n", num1);       // 20: 실제 num1의 값도 바뀜
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*-----------------------------다양한 포인터 변수----------------------------------------*/
//#include <stdio.h>

//int main()
//{
//    long long *numPtr1;    // long long형 포인터 선언
//    float *numPtr2;        // float형 포인터 선언
//    char *cPtr1;           // char형 포인터 선언
//
//    long long num1 = 10;
//    float num2 = 3.5f;
//    char c1 = 'a';
//
//    numPtr1 = &num1;    // num1의 메모리 주소 저장
//    numPtr2 = &num2;    // num2의 메모리 주소 저장
//    cPtr1 = &c1;        // c1의 메모리 주소 저장
//
//    printf("%lld\n", *numPtr1);    // 10
//    printf("%f\n", *numPtr2);      // 3.500000
//    printf("%c\n", *cPtr1);        // a
//
//    //포인터 변수의 크기는 같다.
//    printf("%ld\n",sizeof(numPtr1));
//    printf("%ld\n",sizeof(numPtr2));
//    printf("%ld\n",sizeof(cPtr1));
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------------이중 포인터 변수-----------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr1;     // 단일 포인터 선언
//    int **numPtr2;    // 이중 포인터 선언
//    int num1 = 10;
//
//    numPtr1 = &num1;    // num1의 메모리 주소 저장
//
//    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장
//
//    printf("%d\n", **numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근
//
//    return 0;
//}


/*--------------------------------------------------------------*/
/*----------------------------변수의 위치-----------------------------------------*/
////https://dojang.io/mod/page/view.php?id=274
//#include <stdio.h>
//
//int main()
//{
//    int num1 = 10;
//    printf("%p\n", &num1);    // 008AF7FC: num1의 메모리 주소를 출력
//                              // 컴퓨터마다, 실행할 때마다 달라짐
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*--------------------------포인터 변수의 선언-------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // int형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    printf("%p\n", numPtr);    // 0055FC24: 포인터 변수 numPtr의 값 출력
//                               // 컴퓨터마다, 실행할 때마다 달라짐
//    printf("%p\n", &num1);     // 0055FC24: 변수 num1의 메모리 주소 출력
//                               // 컴퓨터마다, 실행할 때마다 달라짐
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*--------------------------포인터 변수의 선언과 참조-------------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // 정수형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    printf("%d\n", *numPtr);    // 10: 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져옴
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*------------------------------역참조 연산자2---------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // 정수형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    printf("%d\n", *numPtr);    // 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
//
//    *numPtr = 20;     // 역참조 연산자로 메모리 주소에 접근하여 20을 저장
//
//    printf("%d\n", num1);       // 20: 실제 num1의 값도 바뀜
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*-----------------------------다양한 포인터 변수----------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    long long *numPtr1;    // long long형 포인터 선언
//    float *numPtr2;        // float형 포인터 선언
//    char *cPtr1;           // char형 포인터 선언
//
//    long long num1 = 10;
//    float num2 = 3.5f;
//    char c1 = 'a';
//
//    numPtr1 = &num1;    // num1의 메모리 주소 저장
//    numPtr2 = &num2;    // num2의 메모리 주소 저장
//    cPtr1 = &c1;        // c1의 메모리 주소 저장
//
//    printf("%lld\n", *numPtr1);    // 10
//    printf("%f\n", *numPtr2);      // 3.500000
//    printf("%c\n", *cPtr1);        // a
//
//    //포인터 변수의 크기는 같다.
//    printf("%ld\n",sizeof(numPtr1));
//    printf("%ld\n",sizeof(numPtr2));
//    printf("%ld\n",sizeof(cPtr1));
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------------이중 포인터 변수-----------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr1;     // 단일 포인터 선언
//    int **numPtr2;    // 이중 포인터 선언
//    int num1 = 10;
//
//    numPtr1 = &num1;    // num1의 메모리 주소 저장
//    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장
//
//    printf("%d\n", **numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------------동적 메모리 할당-----------------------------------------*/
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    int num1 = 20;    // int형 변수 선언
//    int *numPtr1;     // int형 포인터 선언
//
//    numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당
//
//    int *numPtr2;     // int형 포인터 선언
//
//    numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당
//
//    printf("%p\n", numPtr1);    // 006BFA60: 변수 num1의 메모리 주소 출력
//                                // 컴퓨터마다, 실행할 때마다 달라짐
//
//    printf("%p\n", numPtr2);     // 009659F0: 새로 할당된 메모리의 주소 출력
//                                // 컴퓨터마다, 실행할 때마다 달라짐
//
//    free(numPtr2);    // 동적으로 할당한 메모리 해제
//메모리 해제는 선택이 아닌 필수입니다. 예제는 별로 하는 일이 없는 간단한 프로그램이지만 실무에서는 메모리를 자주, 많이 할당합니다.
//따라서 메모리를 할당만 하고 해제를 해주지 않으면 결국에는 시스템의 메모리가 부족해지므로 운영체제가 프로그램을 강제로 종료시키거나 메모리 할당에 실패하게 됩니다.
//특히 메모리를 해제하지 않아 메모리 사용량이 계속 증가하는 현상을 메모리 누수(memory leak)라 부릅니다.
//
//    return 0;
//}
/*--------------------------------------------------------------*/
/*----------------------------메모리에 값 저장하기-----------------------------------------*/
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    int *numPtr;    // int형 포인터 선언
//
//    numPtr = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당
//
//    *numPtr = 10;   // 포인터를 역참조한 뒤 값 할당
//
//    printf("%d\n", *numPtr);    // 10: 포인터를 역참조하여 메모리에 저장된 값 출력
//
//    free(numPtr);    // 동적 메모리 해제
//
//    return 0;
//}
/*--------------------------------------------------------------*/
/*----------------------------메모리의 내용을 한꺼번에 지정하기-----------------------------------------*/
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//#include <string.h>    // memset 함수가 선언된 헤더 파일
//
//int main()
//{
//    long long *numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당
//
//    memset(numPtr, 0x27, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
//
//    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음
//
//    free(numPtr);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}

/*--------------------------------------------------------------*/
/*----------------------------널 포인터 이용-----------------------------------------*/
//#include <stdio.h>
//
//int main()
//{
//    int *numPtr1 = NULL;    // 포인터에 NULL 저장
//
//    printf("%p\n", numPtr1);    // 00000000
//
//    return 0;
//}
/*--------------------------------------------------------------*/
/*----------------------------포인터와 배열을 응용하기-----------------------------------------*/
//https://dojang.io/mod/page/view.php?id=316

/*--------------------------------------------------------------*/
/*----------------------------포인터에 할당된 메모리를 변수처럼 사용하기-----------------------------------------*/
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    int *numPtr = malloc(sizeof(int) * 10);    // int 10개 크기만큼 동적 메모리 할당
//
//    numPtr[0] = 10;    // 배열처럼 인덱스로 접근하여 값 할당
//    numPtr[9] = 20;    // 배열처럼 인덱스로 접근하여 값 할당
//
//    printf("%d\n", numPtr[0]);    // 배열처럼 인덱스로 접근하여 값 출력
//    printf("%d\n", numPtr[9]);    // 배열처럼 인덱스로 접근하여 값 출력
//
//    free(numPtr);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}
/*--------------------------------------------------------------*/
/*----------------------------사용자가 입력한 크기만큼 메모리를 할당하여 배열처럼 써보기-----------------------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    int size;
//
//    scanf("%d", &size);
//
//    int *numPtr = malloc(sizeof(int) * size);    // (int 크기 * 입력받은 크기)만큼 동적 메모리 할당
//
//    for (int i = 0; i < size; i++)    // 입력받은 크기만큼 반복
//    {
//        numPtr[i] = i;                // 인덱스로 접근하여 값 할당
//    }
//
//    for (int i = 0; i < size; i++)    // 입력받은 크기만큼 반복
//    {
//        printf("%d\n", numPtr[i]);    // 인덱스로 접근하여 값 출력
//    }
//
//    free(numPtr);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}



//문자열 사용하기
//에러 나오는게 정상입니다.
//#include <stdio.h>
//
//int main()
//{
//    char s1 = "Hello";    // "Hello"는 문자열, 문자열은 " "로 둘러쌈
//
//    printf("%s", s1);     // 실행 에러
//
//    return 0;
//}


//https://dojang.io/mod/page/view.php?id=328
//문자와 문자열 포인터 알아보기
//#include <stdio.h>
//
//int main()
//{
//    char c1 = 'a';         // 변수에 문자 'a' 저장
//    char *s1 = "Hello";    // 포인터에 문자열 "Hello"의 주소 저장
//
//    printf("%c\n", c1);    // a: %c로 문자 출력
//    printf("%s\n", s1);    // Hello: %s로 문자열 출력
//
//    return 0;
//}


//문자열 포인터에서 인덱스로 문자에 접근
//#include <stdio.h>
//
//int main()
//{
//    char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
//
//    printf("%c\n", s1[1]);    // e: 인덱스 1(두 번째)의 문자 출력
//    printf("%c\n", s1[4]);    // o: 인덱스 4(다섯 번째)의 문자 출력
//    printf("%c\n", s1[5]);    // 문자열 맨 뒤의 NULL(\0) 출력. NULL은 화면에 표시되지 않음
//
//    return 0;
//}


//배열 형태로 문자열 선언하기
//#include <stdio.h>
//
//int main()
//{
//    char s1[10] = "Hello";  // 크기가 10인 char형 배열을 선언하고 문자열 할당
//
//    printf("%s\n", s1);     // Hello: %s로 문자열 출력
//
//    return 0;
//}

//이미 선언된 배열에는 문자열을 할당할 수 없습니다. 정 할당하고 싶다면 다음과 같이 배열의 요소에 문자를 하나 하나 집어넣으면 됩니다.
//
//s1[0] = 'H';
//s1[1] = 'e';
//s1[2] = 'l';


//다음과 같이 문자 배열을 선언하면서 문자열을 바로 할당할 때는 배열의 크기를 생략할 수 있습니다.
//char 배열이름[] = "문자열";
//
//#include <stdio.h>
//
//int main()
//{
//    char s1[] = "Hello";    // 문자열을 할당할 때 배열의 크기를 생략하는 방법
//
//    printf("%s\n", s1);     // Hello: %s로 문자열 출력
//
//    return 0;
//}


//배열 형태의 문자열에서 인덱스로 문자에 접근하기
//#include <stdio.h>
//
//int main()
//{
//    char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
//                              // 배열에 문자열이 복사됨
//
//    s1[0] = 'A';              // 문자 배열의 인덱스 0에 문자 A를 할당
//
//    printf("%s\n", s1);       // Aello: 바뀐 문자열이 출력됨
//
//    return 0;
//}


//입력값을 배열 형태의 문자열에 저장하기
//#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//
//int main()
//{
//    char s1[10];    // 크기가 10인 char형 배열을 선언
//
//    printf("문자열을 입력하세요: ");
//    scanf("%s", s1);     // 표준 입력을 받아서 배열 형태의 문자열에 저장
//
//    printf("%s\n", s1);  // 문자열의 내용을 출력
//
//    return 0;
//}


// 공백을 이용한 문자열 입력받기
//char s1[30];
//
//printf("문자열을 입력하세요: ");
//scanf("%[^\n]s", s1);    // 공백까지 포함하여 문자열 입력받기
//
//printf("%s\n", s1);


//입력값을 문자열 포인터에 저장하기
//#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//
//int main()
//{
//    char *s1 = "Hello";    // 문자열 포인터를 선언하고 문자열 할당
//
//    printf("문자열을 입력하세요: ");
//    scanf("%s", s1);    // 실행 에러
//
//    printf("%s\n", s1);
//
//    return 0;
//}


// 동적할당으로 만든 공간에 문자열 입력 받기
//#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    char *s1 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
//
//    printf("문자열을 입력하세요: ");
//    scanf("%s", s1);      // 표준 입력을 받아서 메모리가 할당된 문자열 포인터에 저장
//
//    printf("%s\n", s1);   // 문자열의 내용을 출력
//
//    free(s1);    // 동적 메모리 해제
//
//    return 0;
//}



//char *s1 = "Hello, world!";       // char 포인터에 문자열의 메모리 주소를 저장
//char s2[20] = "Hello, world!";    // char 배열에 문자열 저장
//char s3[] = "Hello, world!";      // char 배열에 문자열 저장(배열의 크기 생략)
//
//// 문자열을 인덱스로 접근
//printf("%c\n", s1[0]);    // H
//printf("%c\n", s2[4]);    // o
//
//
////이미 선언된 배열에서는 문자열을 할당할 수 없습니다.
//char s1[20];
//
//s1 = "Hello, world";    // 컴파일 에러


//문자열 포인터와 문자 배열의 요소 변경
//char *s1 = "Hello";       // 문자열 포인터에 문자열 리터럴 할당(읽기 전용 메모리를 가리킴)
//s1[0] = 'A';              // 실행 에러: 문자를 변경할 수 없음
//
//char s2[10] = "Hello";    // 문자 배열에 문자열 리터럴 할당(배열에 문자열이 복사됨)
//s1[0] = 'A';              // 문자를 변경할 수 있음

//char s1[6] = "Hello";    // 5글자 + NULL이므로 배열의 최소 크기는 6이상


//문자열의 길이 파악하기
//#include <stdio.h>
//#include <string.h>    // strlen 함수가 선언된 헤더 파일
//
//int main()
//{
//    char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
//    char s2[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
//
//    printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
//    printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함
//
//    return 0;
//}


//문자열이 같은지 비교하기
//#include <stdio.h>
//#include <string.h>    // strcmp 함수가 선언된 헤더 파일
//
//int main()
//{
//    char s1[10] = "Hello";
//    char *s2 = "Hello";
//
//    int ret = strcmp(s1, s2);    // 두 문자열이 같은지 문자열 비교
//
//    printf("%d\n", ret);         // 0: 두 문자열이 같으면 0
//
//    return 0;
//}


// 문자열 빕교의 또다른 기능
//#include <stdio.h>
//#include <string.h>    // strcmp 함수가 선언된 헤더 파일
//
//int main()
//{
//    // aaa는 ASCII 코드로 97 97 97
//    // aab는 ASCII 코드로 97 97 98
//    // aac는 ASCII 코드로 97 97 99
//
//    printf("%d\n", strcmp("aaa", "aaa"));    //  0: aaa와 aaa는 같으므로 0
//    printf("%d\n", strcmp("aab", "aaa"));    //  1: aab와 aaa 중에서 aab가 크므로 1
//    printf("%d\n", strcmp("aab", "aac"));    // -1: aab와 aac 중에서 aac가 크므로 -1
//
//    return 0;
//}


//한 가지 주의할 점이 있는데 strcmp 함수는 운영체제에 따라서 동작 방식이 조금 다르다는 점입니다. Windows(Visual Studio)에서는 문자열이 다르면 1과 -1을 반환하지만 리눅스와 OS X에서는 ASCII 코드값의 차이를 반환합니다. 그러므로 리눅스와 OS X에서 strcmp의 반환값을 판단할 때는 switch 분기문 대신 if조건문을 사용해야 합니다.

//#include <stdio.h>
//#include <string.h>    // strcmp 함수가 선언된 헤더 파일
//
//int main()
//{
//    char s1[20];
//    char s2[20];
//
//    printf("문자열 두 개를 입력하세요: ");
//    scanf("%s %s", s1, s2);
//
//    int ret = strcmp(s1, s2);    // 입력된 문자열 비교
//    printf("반환값: %d\n", ret);
//
//    // 리눅스와 OS X에서는 ASCII 코드값의 차이를 반환하므로
//    // if 조건문으로 판단
//    if (ret == 0)
//    {
//        printf("두 문자열이 같음\n");
//    }
//    else if (ret > 0)    // 양수일 때
//    {
//        printf("%s보다 %s가 큼\n", s2, s1);
//    }
//    else if (ret < 0)    // 음수일 때
//    {
//        printf("%s보다 %s가 큼\n", s1, s2);
//    }
//
//    return 0;
//}


//문자열 복사하기
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//
//int main()
//{
//    char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
//    char s2[10];              // 크기가 10인 char형 배열을 선언
//
//    strcpy(s2, s1);        // s1의 문자열을 s2로 복사
//
//    printf("%s\n", s2);    // Hello
//
//    return 0;
//}

//문자열 포인터에서는 오류가 나온다.
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//
//int main()
//{
//    char *s1 = "Hello";    // 문자열 포인터
//    char *s2 = "";         // 문자열 포인터
//
//    strcpy(s2, s1);    // 실행 에러
//
//    printf("%s\n", s2);
//
//    return 0;
//}


//문자열 붙이기
//#define _CRT_SECURE_NO_WARNINGS    // strcat 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcat 함수가 선언된 헤더 파일
//
//int main()
//{
//    char s1[10] = "world";
//    char s2[20] = "Hello"; // s2 뒤에 붙일 것이므로 배열 크기를 크게 만듦
//
//    strcat(s2, s1);        // s2 뒤에 s1를 붙임
//
//    printf("%s\n", s2);    // Helloworld
//
//    return 0;
//}


//문자열 검색하기
//#include <stdio.h>
//#include <string.h>   // strrchr 함수가 선언된 헤더 파일
//
//int main()
//{
//    char s1[30] = "A Garden Diary";    // 크기가 30인 char형 배열을 선언하고 문자열 할당
//
//    char *ptr = strrchr(s1, 'a');      // 문자열 끝에서부터 'a'로 시작하는 문자열 검색. 포인터 반환
//
//    printf("%s\n", ptr);   // ary
//
//    return 0;
//}


//-------------------------간단한 설명-------------------------------------------------
//char name[20];        // 이름
//int age;              // 나이
//char address[100];    // 주소

//C 언어는 자료를 체계적으로 관리하기 위해 구조체라는 문법을 제공합니다.
//struct Person {
//    char name[20];        // 이름
//    int age;              // 나이
//    char address[100];    // 주소
//};

//구조체는 관련 정보를 하나의 의미로 묶을 때 사용합니다.

//--------------------------구조체 만들고 사용하기----------------------------------------------------
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//
//struct Person {   // 구조체 정의
//    char name[20];        // 구조체 멤버 1
//    int age;              // 구조체 멤버 2
//    char address[100];    // 구조체 멤버 3
//};
//
//int main()
//{
//    struct Person p1;     // 구조체 변수 선언
//
//    // 점으로 구조체 멤버에 접근하여 값 할당
//    strcpy(p1.name, "홍길동");
//    p1.age = 30;
//    strcpy(p1.address, "서울시 용산구 한남동");
//
//    // 점으로 구조체 멤버에 접근하여 값 출력
//    printf("이름: %s\n", p1.name);       // 이름: 홍길동
//    printf("나이: %d\n", p1.age);        // 나이: 30
//    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동
//
//    return 0;
//}

//-------------------------------전역 변수--------------------------------------------
//#include <stdio.h>
//
//int num1 = 10;    // 전역 변수 선언 및 값 초기화
//
//void printGlobal()
//{
//    printf("%d\n", num1);    // 20: main 함수에서 저장한 값이 계속 유지됨
//}
//
//int main()
//{
//    printf("%d\n", num1);    // 10: main 함수에서 전역 변수 num1의 값 출력
//
//    num1 = 20;    // 전역 변수 num1에 20 저장
//
//    printGlobal();    // 20: printGlobal 함수에서 전역 변수 num1의 값 출력
//
//    return 0;
//}

//-----------------------구조체의 정의와 동시에 선언 ----------------------------------------------
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//
//struct Person {    // 구조체 정의
//    char name[20];        // 구조체 멤버 1
//    int age;              // 구조체 멤버 2
//    char address[100];    // 구조체 멤버 3
//} p1;               // 구조체를 정의하는 동시에 변수 p1 선언
//
//int main()
//{
//    // 점으로 구조체 멤버에 접근하여 값 할당
//    strcpy(p1.name, "홍길동");
//    p1.age = 30;
//    strcpy(p1.address, "서울시 용산구 한남동");
//
//    // 점으로 구조체 멤버에 접근하여 값 출력
//    printf("이름: %s\n", p1.name);       // 이름: 홍길동
//    printf("나이: %d\n", p1.age);        // 나이: 30
//    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동
//
//    return 0;
//}

//-----------------------------typedef로 struct없이 구조체 선언하기-------------------------------------------------------
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//
//typedef struct _Person {   // 구조체 이름은 _Person
//    char name[20];            // 구조체 멤버 1
//    int age;                  // 구조체 멤버 2
//    char address[100];        // 구조체 멤버 3
//} Person;                  // typedef를 사용하여 구조체 별칭을 Person으로 정의
//
//int main()
//{
//    Person p1;    // 구조체 별칭 Person으로 변수 선언
//
//    // 점으로 구조체 멤버에 접근하여 값 할당
//    strcpy(p1.name, "홍길동");
//    p1.age = 30;
//    strcpy(p1.address, "서울시 용산구 한남동");
//
//    // 점으로 구조체 멤버에 접근하여 값 출력
//    printf("이름: %s\n", p1.name);       // 이름: 홍길동
//    printf("나이: %d\n", p1.age);        // 나이: 30
//    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동
//
//    return 0;
//}

//------------------typedef------------------------------------------------------

//typedef는 자료형의 별칭을 만드는 기능입니다.
//따라서 구조체 뿐만 아니라 모든 자료형의 별칭을 만들수 있습니다.
//typedef int MYINT;      // int를 별칭 MYINT로 정의
//typedef int* PMYINT;    // int 포인터를 별칭 PMYINT로 정의

//------------------------- 익명 구조체 선언하기 -----------------------------------
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//
//typedef struct {   // 구조체 이름이 없는 익명 구조체
//    char name[20];        // 구조체 멤버 1
//    int age;              // 구조체 멤버 2
//    char address[100];    // 구조체 멤버 3
//} Person;          // typedef를 사용하여 구조체 별칭을 Person으로 정의
//
//int main()
//{
//    Person p1;    // 구조체 별칭 Person으로 변수 선언
//
//    // 점으로 구조체 멤버에 접근하여 값 할당
//    strcpy(p1.name, "홍길동");
//    p1.age = 30;
//    strcpy(p1.address, "서울시 용산구 한남동");
//
//    // 점으로 구조체 멤버에 접근하여 값 출력
//    printf("이름: %s\n", p1.name);       // 이름: 홍길동
//    printf("나이: %d\n", p1.age);        // 나이: 30
//    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동
//
//    return 0;
//}

//------------------------------------구조체 포인터 이용2------------------------------------------------
//#include <stdio.h>
//
//struct Person {    // 구조체 정의
//    char name[20];        // 구조체 멤버 1
//    int age;              // 구조체 멤버 2
//    char address[100];    // 구조체 멤버 3
//};
//
//int main()
//{
//    struct Person p1;      // 구조체 변수 선언
//    struct Person *ptr;    // 구조체 포인터 선언
//
//    ptr = &p1;    // p1의 메모리 주소를 구하여 ptr에 할당
//
//    // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
//    ptr->age = 30;
//
//    printf("나이: %d\n", p1.age);      // 나이: 30: 구조체 변수의 멤버 값 출력
//    printf("나이: %d\n", ptr->age);    // 나이: 30: 구조체 포인터의 멤버 값 출력
//
//    return 0;
//}

// https://www.acmicpc.net/problem/10817

//https://www.acmicpc.net/problem/10870

//아래 코드에서 hello는 몇번 출력 될까?

//#include <stdio.h>
//
//int main(){
//    int i,j;
//
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < i + 2; j += 2) {
//            printf("Hello %d %d \n",i,j);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//int pivo(int num);
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    printf("%d", pivo(num + 1));
//
//    return 0;
//}
//
///* 피보나치 수열 */
//int pivo(int num)
//{
//    int result;
//    if (num <= 1)
//        return 0;
//
//    else if (num == 2)
//        return 1;
//
//    return pivo(num - 1) + pivo(num - 2);
//}