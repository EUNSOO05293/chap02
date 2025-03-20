/* 파일명 Assignment-07.c
 * 작성자: 이은수
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 각 사이즈별 함수 정의
void SmallOrder(int size)
{
    printf("S 사이즈 %d잔을 주문합니다\n", size);
}

void TallOrder(int size)
{
    printf("T 사이즈 %d잔을 주문합니다\n", size);
}

void GrandeOrder(int size)
{
    printf("G 사이즈 %d잔을 주문합니다\n", size);
}

void CoffeeOrder(void)
{
    char coffee;
    int size;

    printf("커피 사이즈(S,T,G)와 주문 수량? ");
    scanf(" %c %d", &coffee, &size);

    // 입력값에 따라 적절한 함수 호출
    if (coffee == 'S') {
        SmallOrder(size);
    }
    else if (coffee == 'T') {
        TallOrder(size);
    }
    else if (coffee == 'G') {
        GrandeOrder(size);
    }
    else {
        printf("잘못된 사이즈입니다: %c\n", coffee);
    }
}

int main(void)
{
    CoffeeOrder();
    return 0;
}