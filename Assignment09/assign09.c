/* ���ϸ� Assignment-09.c
 * �ۼ���: ������
 * ��¥: 2025.3.20
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HexToint(void) 
{
	int num;

	printf("16���� ����?");
	scanf("%x", &num);
	printf("16���� %x�� 10������ %d�Դϴ�", num, num);

}

int main(void)
{
	HexToint();
	return 0;
}