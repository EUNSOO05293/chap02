/* 파일명 Assignment-05.c
 * 작성자: 이은수
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Weight(void) {

	double weight;

	printf("몸무게?");
	scanf("%2lf", &weight);

	printf("입력한 몸무게는 %.2fKG입니다", weight);

}

int main(void)
{
	Weight();
	return 0;
}