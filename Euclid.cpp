#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main()
{
	int nNmbr1, nNmbr2;
	while (1) {
		printf("Number 1 ? ");
		scanf("%d", &nNmbr1);		// �� �ϳ� �Է�
		if (nNmbr1 <= 0)			// �����̸� ������
			break;
		printf("Number 2 ? ");
		scanf("%d", &nNmbr2);		// �ٸ� �� �ϳ� �� �Է�
		int Euclid(int nBig, int nSmall);
		printf("GCD: %d\n\n", Euclid(nNmbr1, nNmbr2));	// �ִ����� ���
	}
}

int Euclid(int nBig, int nSmall)
{	// GCD(Greatest Common Divisor)�� ����Ѵ�
	// [�Ϲݱ�Ģ] GCD(b,s) ::= GCD(s,b%s)
	// [�������] b,s�� ����
	// [�ߴ�����] b�� s�� ���������� �ܼ��ش� s
	return 0;
}
