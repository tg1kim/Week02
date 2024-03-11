#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)
#define N	1000


void main()
{
	while (1) {
		printf("? ");
		int n;
		scanf("%d", &n);
		if (n <= 0 || n > N)
			break;
		int SkipEraser1(int n);
		int SkipEraser2(int n);
		printf("Simulation: %d\n",   SkipEraser1(n));
		printf(" Recursion: %d\n\n", SkipEraser2(n));
	}
	printf("Bye, ...\n");
}

int SkipEraser1(int n)
{
	int nNecklace[N];											// ����̸� �迭�� �����Ѵ�(0���� n-1����)
	for (int i = 0; i < n; i++)									//�����  n���� ������ 1���� n���� �ʱ�ȭ �Ѵ�
		nNecklace[i] = i + 1;
	int nNdx = 0;
	for (int i = 1; i < n; i++) {
		while (nNecklace[nNdx = (nNdx + 1) % n] == 0);			// for Erase
		nNecklace[nNdx] = 0;									// Erase
		while (nNecklace[nNdx = (nNdx + 1) % n] == 0);			// for skip
	}
	return nNecklace[nNdx];
}

int SkipEraser2(int n)									// ��ȯ �Լ��� �ۼ�
{
	// [�Ϲݱ�Ģ] f(n) ::= 2f(n/2) +(-) 1 ;; n�� ¦�� -, Ȧ�� +
	// [�������] n�� ������ ����
	// [�ߴ�����] n�� 1�̸� �ܼ��� 1
	return 0;
}
