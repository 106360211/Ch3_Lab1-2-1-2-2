#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TS(int U);

int main(void)
{
	int n, S;
	char AddChoice;
	printf("1+2+...+n=?請輸入n=");
	scanf("%d", &n);
	fflush(stdin);
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:");
	scanf("%c", &AddChoice);

	switch (AddChoice)
	{
	case 'O':
		S = Odd(n);
		break;
	case 'E':
		S = Even(n);
		break;
	case 'I':
		S = TS(n);
		break;
	default:
		printf("選擇錯誤\n");
		return -1;
	}
	printf("總合為%d\n", S);
	system("pause");
	return 0;
}
int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1)
			total += i;
	}
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0)
			total += i;
	}
	return total;
}

int TS(int U)
{
	return Odd(U) + Even(U);
}