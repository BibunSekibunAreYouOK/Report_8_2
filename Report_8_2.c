#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fibo(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}


	if (n >= 2)
	{

		return fibo(n - 1) + fibo(n - 2);

	}

}

int main(void)
{
	int n;
	printf("初項(n=0)と第2項(n=1)を1とする。\n第3項以後次々に前2項の和をとって得られる数列(フィボナッチ数列)の第n項での値(fibo(n))を求める。");
	printf("求めたい項の数nを入力せよ。\n");
	printf("n=");
	scanf("%d", &n);
	for (size_t i = n; i > 1; i--)
	{

		printf(" fibo(%d)=fibo(%d)+fibo(%d)=%.0f\n", i, i - 1, i - 2, fibo(i));

	}
	printf(" fibo(0)=1,fibo(1)=1\n\n");
	printf("したがって、n=%dのとき、対応する値は%.0f\n", n, fibo(n));



	return 0;
}