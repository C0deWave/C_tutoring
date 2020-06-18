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

//------------------------------구조체 변수를 선언하는 동시에 초기화 하기-------------------------------
//#include <stdio.h>
//
//struct Person {
//    char name[20];
//    int age;
//    char address[100];
//};
//
//int main()
//{
//    // name에는 "홍길동", age에는 30, address에는 "서울시 용산구 한남동"
//    struct Person p1 = { .name = "홍길동", .age = 30, .address = "서울시 용산구 한남동" };
//
//    printf("이름: %s\n", p1.name);       // 이름: 홍길동
//    printf("나이: %d\n", p1.age);        // 나이: 30
//    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동
//
//    // name에는 "고길동", age에는 40, address에는 "서울시 서초구 반포동"
//    struct Person p2 = { "고길동", 40, "서울시 서초구 반포동" };
//
//    printf("이름: %s\n", p2.name);       // 이름: 고길동
//    printf("나이: %d\n", p2.age);        // 나이: 40
//    printf("주소: %s\n", p2.address);    // 주소: 서울시 서초구 반포동
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

//-------------------------------구조체 포인터 사용-------------------------------------------
//#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//#include <string.h>    // strcpy 함수가 선언된 헤더 파일
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//struct Person {    // 구조체 정의
//    char name[20];        // 구조체 멤버 1
//    int age;              // 구조체 멤버 2
//    char address[100];    // 구조체 멤버 3
//};
//
//int main()
//{
//    struct Person *p1 = malloc(sizeof(struct Person));    // 구조체 포인터 선언, 메모리 할당
//
//    // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
//       구조체의 멤버에 접근하는 방법이 조금 특이합니다. 지금까지 . (점)을 사용해서 멤버에 접근했지만 구조체 포인터의 멤버에 접근할 때는 -> (화살표 연산자)를 사용합니다.
//    strcpy(p1->name, "홍길동");
//    p1->age = 30;
//    strcpy(p1->address, "서울시 용산구 한남동");
//
//    // 화살표 연산자로 구조체 멤버에 접근하여 값 출력
//    printf("이름: %s\n", p1->name);       // 홍길동
//    printf("나이: %d\n", p1->age);        // 30
//    printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동
//
//    free(p1);    // 동적 메모리 해제
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

//---------------------------------좌표 평면에서 두점 사이의 위치를 표현하기--------------------------------------------
// 해당 코드를 수정해서 두점 사이의 거리를 입력 받아서 측정하는 기능을 넣어보자.
//루트를 넣는 방법
//#include <math.h>    // sqrt 함수가 선언된 헤더 파일
//double c = sqrt(4) => 2 ;

//#include <stdio.h>
//
//struct Point2D {
//    int x;
//    int y;
//};
//
//int main()
//{
//    struct Point2D p1;    // 점1
//    struct Point2D p2;    // 점2
//
//    // 점1 위치
//    p1.x = 30;
//    p1.y = 20;
//
//    // 점2 위치
//    p2.x = 60;
//    p2.y = 50;
//
//    printf("p1: %d %d\n", p1.x, p1.y);    // 30 20
//    printf("p2: %d %d\n", p2.x, p2.y);    // 60 50
//
//    return 0;
//}

//----------------------------------- 사각형의 넓이 구하기 -------------------------------------------------
// 소스코드를 수정해서 사각형의 넓이 구하는 프로그램을 만드시오.
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//struct Rectangle {
//    int x1, y1;
//    int x2, y2;
//};
//
//int main()
//{
//    struct Rectangle rect;
//    int area;
//
//    printf("%d\n", area);
//
//    return 0;
//}