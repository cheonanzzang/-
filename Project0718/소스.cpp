//#include <stdio.h>
//
//int main()
//{
//	int a;
//	float b;
//
//	a = 123.45;
//	b = 200;
//
//	printf("a�� �� ==> %d\n", a);
//	printf("b�� �� ==> %f\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a,b;
//	float c,d;
//
//	a = 100;
//	b = a;
//
//	c = 111.1f;
//	d = c;
//
//	printf("a,b�� �� ==> %d,%d\n", a,b);
//	printf("c,d�� �� ==> %5.1f,%5.1f\n", c, d);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a,b,c,d�� �� ==> %d,%d,%d,%d\n", a, b, c, d);
//
//	a = b = c = d = 100;
//	printf("a,b,c,d�� �� ==> %d,%d,%d,%d\n", a, b, c, d);
//
//	a = 100;
//	a = a + 200;
//	printf("a�� �� ==> %d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	
//	scanf("%c", &initial);
//
//	//'a' 97 0x61
//	if ('a' <= initial && initial <= 'z')
//	{
//		printf("�ҹ���\n");
//	}
//	else if ('A' <= initial && initial <= 'Z')
//	{
//		printf("�빮��\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d,%d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d,%d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80)
//	{
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70)
//	{
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60)
//	{
//		printf("������ B����Դϴ�.\n");
//	}
//	else
//	{
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number�� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else 
//	{
//		printf("number�� Ȧ���Դϴ�,\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char adk;
//	scanf("%c", &adk);
//
//	if (adk == 'w')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (adk == 'a')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (adk == 'd')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (adk == 's')
//	{
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("Perfect\n");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent\n");
//	}
//	else
//	{
//		printf("Good\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	if (input % 3 == 0)
//	{
//		printf("3�� ����Դϴ�.\n");
//		if (input % 6 == 0)
//		{
//			printf("6�� ����Դϴ�.\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("9�� ����Դϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//	case 'm': printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//	case 'm':printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//		break;
//	case 'm': printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���: ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//		break;
//	case 'm': printf("����â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int input1, input2;
	scanf(" %d %d", &input1, &input2);

	char oper;
	scanf(" %c", &oper);

	switch (oper)
	{
		
	case '+': printf("%f", input1 + input2);
		break;
	case '-': printf("%f", input1 - input2);
		break;
	case '*': printf("%f", input1 * input2);
		break;
	case '/': printf("%f", input1 / input2);
		break;
	case '%': printf("%f", input1 % input2);
		break;

	}

	return 0;


}