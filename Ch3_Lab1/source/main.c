#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TS(int U);

int main(void)
{
	int n, S;
	char AddChoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf("%d", &n);
	fflush(stdin);
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:");
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
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", S);
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