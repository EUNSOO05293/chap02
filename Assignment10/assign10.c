/* ���ϸ� Assignment-10.c
 * �ۼ���: ������
 * ����: PA10. ������ 8����, 10����, 16����, 16���� ���ϳ��� �Է¹޾� 8����, 
 10����, 16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷� �ۼ�
 * ��¥: 2025.3.20
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coverted_num(void)
{
	int num;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��ϸ� 0x12ó�� �Է��ϼ���.\n");
	printf("����?");

	scanf("%x", &num);

	printf("8����: 0%o\n", num);
	printf("10����: %d\n", num);
	printf("16����: 0x%x\n", num);
}

int main(void)
{
	Coverted_num();
	return 0;
}