//#include <stdio.h>
//
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드 %d개", keyboard);
//	printf("마우스 %d개", mouse);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n", coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c\n", A);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f..\n", pi, e);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int radius = 5;
//	double pi = 3.14;
//	float area;
//	float round;
//	area = radius * radius * pi;
//	round = 2 * radius * pi;
//	printf("원의 넓이 = %.3f\n", area);
//
//	printf("원의 둘레 = %.3f\n", round);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int base = 3;
//	int upper = 5;
//	int height = 7;
//	int area;
//	area = (base + upper) * height / 2;
//	printf("사다리꼴의 넓이 = %d", area);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a, b, c;
//	printf("문자 두개를 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int r;
//	double pi = 3.14;
//	float area;
//	float round;
//	printf("반지름을 입력 : ");
//	scanf("%d", &r);
//	area = r * r * pi;
//	round = 2 * r * pi;
//	printf("원의 넓이 = %.3f\n", area);
//	printf("원의 둘레 = %.3f\n", round);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int W1;
	int W2;
	float H;
	float area;

	printf("밑변 = ");
	scanf("%d", &W1);
	printf("윗변 = ");
	scanf("%d", &W2);
	printf("높이 = ");
	scanf("%d", &H);
	area = (W1 + W2) * H / 2;
	printf("사다리꼴의 넓이 = %.3f", area);
	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("% d - % d = % d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3;
//	print
//}