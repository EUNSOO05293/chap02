/* ���ϸ� Assignment-05.c
 * �ۼ���: ������
 * ��¥: 2025.3.20
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Weight(void) {

	double weight;

	printf("������?");
	scanf("%2lf", &weight);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�", weight);

}

int main(void)
{
	Weight();
	return 0;
}