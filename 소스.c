#include <stdio.h>
int icount, ivalue, iresult;
//switch ���� �̿��� Ȧ���� ¦���� ����
int Switch()
{
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d, &ivalue");

	switch (ivalue % 2)
	{
	case 0:
		printf("%d�� ¦���Դϴ�");
	case 1:
		printf("%d�� Ȧ���Դϴ�");
	}

}
//switch ���� �̿��� ���� ó�� ���α׷�
void Switch1()
{
	int iscore;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &iscore);

	switch (iscore / 10)
	{
	case 9 :
		printf("������ A�Դϴ�");
		break;
	case 8:
		printf("������ B�Դϴ�");
		break;
	case 7:
		printf("������ C�Դϴ�");
		break;
	case 6:
		printf("������ D�Դϴ�");
		break;
	case 0:
		printf("������ F�Դϴ�");
		break;
	}
}//case ������ break�� ���� ������ ������ �����ϴ� �κк��� ������ �����ϰ� �ȴ�.

//while ��
void While() {

	printf("while��");
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &ivalue);
	icount = 1;
	while (icount < 9)
	{
		printf("%d*%d = %d\n", ivalue, icount, ivalue * icount);
		return 0;
	}
}
//while ���� ����
void While_����loop() 
{
	printf("���� ����");
	while (1)
	{
		printf("while�� ������\n");
	}
	

}
//���� ��� break
//break�� �̿��� 1~6�ܱ����� ������ ���
void Break()
{
	while (1)
	{
		printf("break");
		printf("1���� 9������ �ܼ��� �Է��ϼ��� : ");
		scanf("%d", &ivalue);
		if (ivalue < 1 || ivalue >9)
			break;
		printf("[%d��]\n", ivalue);
		for (icount = 1; icount <= 9; icount++)
		{
			printf("%d * %d = %d\n", ivalue, icount, ivalue * icount);
		}
		
	}
}
//�Լ�, �Է¹��� ���� ���밪 ���(�Լ� �̻��)
void Function()
{
	printf("������ �Է��㼼�� : ");
	scanf("%d", &ivalue);

	if (ivalue > 0)
	{
		iresult = ivalue;
	}
	else 
	{
		iresult = -ivalue;
	}
	printf("%d�� ���밪�� %d�Դϴ�\n", ivalue, iresult);
}

int main()
{
	While();
	While_����loop();
	Break();
	Switch();
	Switch1();
}