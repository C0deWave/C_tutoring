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
    
    //이항연산자
//    int num3 = 10;
//
//       printf("%d\n", num3 == 10);    // 1: num1이 10과 같은지
//       printf("%d\n", num3 != 5);     // 1: num1이 5와 다른지
//
//       printf("%d\n", num3 > 10);     // 0: num1이 10보다 큰지
//       printf("%d\n", num3 < 10);     // 0: num1이 10보다 작은지
//
//       printf("%d\n", num3 >= 10);    // 1: num1이 10보다 크거나 같은지
//       printf("%d\n", num3 <= 10);    // 1: num1이 10보다 작거나 같은지
    
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
    
//    for (초기식; 조건식; 변화식) // ← 루프 선언문(loop statement)
//    {
//        반복할 코드
//    }
    
//    for (int i = 0; i < 10; i++)    // 0부터 9까지 증가하면서 10번 반복
//       {
//           printf("Hello, world! %d\n",i);
//       }

//    for (int i = 1; i <= 100; i++)        // 1부터 100까지 증가하면서 100번 반복
//    {
//        printf("Hello, world! %d\n", i);  // Hello, world!와 i의 값을 함께 출력
//    }
    
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

    
//    int i = 100;
//    while (i > 0)    // i가 0보다 클 때 반복. 100부터 1까지 감소하면서 100번 반복
//    {
//        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
//        i--;                                // i를 1씩 감소시킴
//    }
    
//    int i = 0;
//
//    do     // 처음 한 번은 아래 코드가 실행됨
//    {
//        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
//        i++;                                // i를 1씩 증가시킴
//    } while (i < 100);    // i가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복
    
//    do
//    {
//        printf("Hello, world!\n");
//    } while (0);    // while에 0을 지정하면 코드가 한 번만 실행됨
    
    
    
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