//자주보면 좋을 개발자 커뮤니티
//OKKY
//https://okky.kr/

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


//문자열을 여러개 입력받기
//#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//
//int main()
//{
//    char s1[10];    // 크기가 10인 char형 배열을 선언
//    char s2[10];    // 크기가 10인 char형 배열을 선언
//
//    printf("문자열을 두 개 입력하세요: ");
//    scanf("%s %s", s1, s2);    // 표준 입력에서 공백으로 구분된 문자열 두 개를 입력받음
//
//    printf("%s\n", s1);    // s1의 내용을 출력
//    printf("%s\n", s2);    // s2의 내용을 출력
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


//입력된 문자열을 배열 또는 포인터에 저장하기
//char s1[10];        // 크기가 10인 char형 배열을 선언
//
//scanf("%s", s1);    // 표준 입력을 받아서 배열 형태의 문자열에 저장
//
////---------------------
//
//char *s1 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
//
//scanf("%s", s1);    // 표준 입력을 받아서 배열 형태의 문자열에 저장
//
//free(s1);    // 동적 메모리 해제


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