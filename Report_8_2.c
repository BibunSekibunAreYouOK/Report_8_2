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
	printf("����(n=0)�Ƒ�2��(n=1)��1�Ƃ���B\n��3���Ȍ㎟�X�ɑO2���̘a���Ƃ��ē����鐔��(�t�B�{�i�b�`����)�̑�n���ł̒l(fibo(n))�����߂�B");
	printf("���߂������̐�n����͂���B\n");
	printf("n=");
	scanf("%d", &n);
	for (size_t i = n; i > 1; i--)
	{

		printf(" fibo(%d)=fibo(%d)+fibo(%d)=%.0f\n", i, i - 1, i - 2, fibo(i));

	}
	printf(" fibo(0)=1,fibo(1)=1\n\n");
	printf("���������āAn=%d�̂Ƃ��A�Ή�����l��%.0f\n", n, fibo(n));



	return 0;
}