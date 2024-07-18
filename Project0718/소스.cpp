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
//	printf("a의 값 ==> %d\n", a);
//	printf("b의 값 ==> %f\n", b);
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
//	printf("a,b의 값 ==> %d,%d\n", a,b);
//	printf("c,d의 값 ==> %5.1f,%5.1f\n", c, d);
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
//	printf("a,b,c,d의 값 ==> %d,%d,%d,%d\n", a, b, c, d);
//
//	a = b = c = d = 100;
//	printf("a,b,c,d의 값 ==> %d,%d,%d,%d\n", a, b, c, d);
//
//	a = 100;
//	a = a + 200;
//	printf("a의 값 ==> %d\n", a);
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
//		printf("소문자\n");
//	}
//	else if ('A' <= initial && initial <= 'Z')
//	{
//		printf("대문자\n");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else
//	{
//		printf("성적은 F등급입니다.\n");
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
//		printf("number은 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number은 음수입니다.\n");
//	}
//	else
//	{
//		printf("number은 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number은 짝수입니다.\n");
//	}
//	else 
//	{
//		printf("number은 홀수입니다,\n");
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
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (adk == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (adk == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else if (adk == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
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
//		printf("3의 배수입니다.\n");
//		if (input % 6 == 0)
//		{
//			printf("6의 배수입니다.\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("9의 배수입니다.\n");
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
//	case 'i': printf("아이템창 오픈\n");
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
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
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
//	case 'i': printf("아이템창 오픈\n");
//	case 'm':printf("지도창 오픈\n");
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
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요: ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
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