#define _CRT_SECURE_NO_WARNINGS
//��ɲ�������Ϸ��
//		����Ҫ����һ�����������ʼ��Ϸ�����������Ͳ��ٸı�
//
//	rand ������������������Ĺ����ǣ�����һ�� (0 - RAND_MAX)->(0 - 32767) ��һ�����������
//srand ������������ɵ�һ����㣬�ڵ��� rand ����֮ǰ���ã������� ʱ��(time) ����Ϊ����������
//time �ķ���ֵ�� time_t, time_t ��ʵ��һ������ -- ����
//time �������ص��ǣ���ǰ����ִ����� time ������ʱ���ʱ��� �� ���������ʼʱ���һ����ֵ
//���������ʼʱ�䣺1970.01.01.00:00:00

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// ������Ϸ�˵�����ʼ(1)/�˳�(0)
void menu()
{
	printf("*******************************\n");
	printf("***********  1. play  *********\n");
	printf("***********  0. exit  *********\n");
	printf("*******************************\n");
}

// ������Ϸ
void game()
{
	//time_t  �� time �ķ���ֵ

	//1. �����������rand ����,��������������������������һ���⺯��
	int ret = 0;
	int tmp = 0;
	ret = rand()%100;	// ����һ�� 0 - 99 �������
	
	//ret = rend;
	//printf("%d\n", ret);	// ������Ϸ�Ƿ������

	//2. �����֣�ѭ����
	while (1)
	{
		printf("�������:>");
		scanf("%d", &tmp);
		if (tmp > ret) 
		{
			printf("�´���\n");
		}
		else if (tmp < ret) 
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	//(unsigned int)time(NULL) ǿ������ת������ time �������������ת��Ϊ unsigned int ��
	//NULL �� time �����Ĳ�����time ������һ�� ָ�� �����Դ�һ�� ��ָ��

	//�������������ÿ��һ����Ϸ������������ı�һ��
	//������� gime() �������������һֱ���ı䣬ʧȥ����Ϸ������
 	srand((unsigned int)time(NULL));	

	//do��while ѭ��ʹ��������ִ��һ��

	do
	{
		//ѡ�� 1 �� 0�� ������ ����Ϸ ���� �˳���Ϸ
		menu();	// menu �˵�����
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			// ����Ϸ
			game();
			//printf("����Ϸ\n");	// �����Ƿ���Խ�����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
}