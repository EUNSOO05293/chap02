/* 파일명 Assignment-07.c
 * 작성자: 이은수
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CoffeeOrder(void) 
{
    char coffee;
    int size;

    printf("커피 사이즈(S,T,G)와 주문 수량? ");
    scanf(" %c %d", &coffee, &size);
    printf("%c 사이즈 %d잔을 주문합니다", coffee, size);

}

int main(void)
{
    CoffeeOrder();
    return 0;
}