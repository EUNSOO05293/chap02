/* ���ϸ� Assignment-11.c
 * �ۼ���: ������
 * ����: PA11.������ ���̰��� 3.14159265 �Ҷ�, ���� ���� ���� ���� ������� ����ϴ� ���α׷� �ۼ�
 * ��¥: 2025.3.20
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Pi(void)
{
	double pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);

}

int main(void)
{
	Pi();
	return 0;

}
