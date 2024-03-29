#include <stdio.h>

#pragma warning(disable: 4996 4326 6001 6031)
#define N	1000


void main()
{
	while (1) {
		printf("? ");
		int n;
		scanf("%d", &n);
		if (n <= 0 || n > N)
			break;
		int EraseSkip1(int n);
		int EraseSkip2(int n);
		int EraseSkip3(int n);
		printf("Simulation: %d\n", EraseSkip1(n));
		printf(" Iteration: %d\n", EraseSkip2(n));
		printf(" Recursion: %d\n", EraseSkip2(n));
		putchar('\n');
	}
	printf("Bye, ...\n");
}

int EraseSkip1(int n)
{
	int NextBeadNdx(int nNecklace[], int nNdx, int nMod);
	int nNdx = 1, nNecklace[N];							// 목걸이를 배열로 정의한다(1에서 n까지)
	for (int i = 1; i <= n; i++)						// 목걸이 n개의 구슬을 1에서 n까지 초기화 한다
		nNecklace[i] = i;
	for (int i = 1; i < n; i++) {
		nNecklace[nNdx] = 0, nNdx = NextBeadNdx(nNecklace, nNdx, n);
		nNdx = NextBeadNdx(nNecklace, nNdx, n);
	}
	return nNecklace[nNdx];
}

int NextBeadNdx(int nNecklace[], int nNdx, int nMod)
{
	int NextNdx(int nNdx, int nMod);
	while (nNecklace[nNdx = NextNdx(nNdx, nMod)] == 0);
	return nNdx;
}

int NextNdx(int nNdx, int nMod)
{
	return nNdx % nMod + 1;
}

int EraseSkip2(int n)
{
	int nNecklace[N];									// 목걸이를 배열로 정의한다(0에서 n-1까지)
	for (int i = 0; i < n; i++)							// 목걸이 n개의 구슬을 1에서 n까지 초기화 한다
		nNecklace[i] = i + 1;
	while (n > 1) {
		int nHalf = n / 2;
		for (int nTo = n % 2, nFrom = 1; nFrom < n; nTo++, nFrom += 2)
			nNecklace[nTo] = nNecklace[nFrom];
		n = (n + 1) / 2;
	}
	return nNecklace[0];
}

int EraseSkip3(int n)									// 순환 함수로 작성
{
	if (n == 1)											// 중단조건
		return 1;										// 단순해답
	return 2 * EraseSkip3(n / 2 + n % 2) - n % 2 * 2;	// 일반규칙
}
