// hanoi.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main()
{
	while (true) {
		int nCtr;
		printf("Disks ? ");
		scanf("%d", &nCtr);			// �ű�� ž�� ���� �Է� �޴´�.
		if (nCtr <= 0)
			break;
		void hanoi(int nDisk, int nFrom, int nTo);
		hanoi(nCtr, 1, 2);			// ž�� 1���� 2�� �ű�ÿ�.
		putchar(10);
	}
}

void hanoi(int nDisk, int nFrom, int nTo)
{
	// [�Ϲݱ�Ģ] H(n,i,j) ::= H(n-1,i,x), H(1,i,j), H(n-1,x,j)
	// [�������] n�� 1�� ����
	// [�ߴ�����] n==1, �ܼ��� "i --> j"�� ���
}
