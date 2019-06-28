#include <stdio.h>
int icount, ivalue, iresult;
//switch 문을 이용한 홀수와 짝수의 구분
int Switch()
{
	printf("숫자를 입력하세요 : ");
	scanf("%d, &ivalue");

	switch (ivalue % 2)
	{
	case 0:
		printf("%d는 짝수입니다");
	case 1:
		printf("%d는 홀수입니다");
	}

}
//switch 문을 이용한 학점 처리 프로그램
void Switch1()
{
	int iscore;
	printf("성적을 입력하세요 : ");
	scanf("%d", &iscore);

	switch (iscore / 10)
	{
	case 9 :
		printf("학점은 A입니다");
		break;
	case 8:
		printf("학점은 B입니다");
		break;
	case 7:
		printf("학점은 C입니다");
		break;
	case 6:
		printf("학점은 D입니다");
		break;
	case 0:
		printf("학점은 F입니다");
		break;
	}
}//case 문에서 break를 하지 않으면 조건을 만족하는 부분부터 끝가지 수행하게 된다.

//while 문
void While() {

	printf("while문");
	printf("숫자를 입력하세요");
	scanf("%d", &ivalue);
	icount = 1;
	while (icount < 9)
	{
		printf("%d*%d = %d\n", ivalue, icount, ivalue * icount);
		return 0;
	}
}
//while 무한 루프
void While_무한loop() 
{
	printf("무한 루프");
	while (1)
	{
		printf("while문 실행중\n");
	}
	

}
//보조 제어문 break
//break를 이용한 1~6단까지의 구구단 출력
void Break()
{
	while (1)
	{
		printf("break");
		printf("1부터 9까지의 단수를 입력하세요 : ");
		scanf("%d", &ivalue);
		if (ivalue < 1 || ivalue >9)
			break;
		printf("[%d단]\n", ivalue);
		for (icount = 1; icount <= 9; icount++)
		{
			printf("%d * %d = %d\n", ivalue, icount, ivalue * icount);
		}
		
	}
}
//함수, 입력받은 수의 절대값 출력(함수 미사용)
void Function()
{
	printf("정수를 입력허세요 : ");
	scanf("%d", &ivalue);

	if (ivalue > 0)
	{
		iresult = ivalue;
	}
	else 
	{
		iresult = -ivalue;
	}
	printf("%d의 절대값은 %d입니다\n", ivalue, iresult);
}

int main()
{
	While();
	While_무한loop();
	Break();
	Switch();
	Switch1();
}