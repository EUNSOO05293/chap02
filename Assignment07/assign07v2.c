/* ���ϸ� Assignment-07.c
 * �ۼ���: ������
 * ��¥: 2025.3.20
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �� ����� �Լ� ����
void SmallOrder(int size)
{
    printf("S ������ %d���� �ֹ��մϴ�\n", size);
}

void TallOrder(int size)
{
    printf("T ������ %d���� �ֹ��մϴ�\n", size);
}

void GrandeOrder(int size)
{
    printf("G ������ %d���� �ֹ��մϴ�\n", size);
}

void CoffeeOrder(void)
{
    char coffee;
    int size;

    printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
    scanf(" %c %d", &coffee, &size);

    // �Է°��� ���� ������ �Լ� ȣ��
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
        printf("�߸��� �������Դϴ�: %c\n", coffee);
    }
}

int main(void)
{
    CoffeeOrder();
    return 0;
}