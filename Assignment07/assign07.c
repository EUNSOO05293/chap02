/* ���ϸ� Assignment-07.c
 * �ۼ���: ������
 * ��¥: 2025.3.20
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CoffeeOrder(void) 
{
    char coffee;
    int size;

    printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
    scanf(" %c %d", &coffee, &size);
    printf("%c ������ %d���� �ֹ��մϴ�", coffee, size);

}

int main(void)
{
    CoffeeOrder();
    return 0;
}