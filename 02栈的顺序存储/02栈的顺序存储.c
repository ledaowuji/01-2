#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SeqStack.h"

typedef struct Maker{
	char name[64];
	int age;
}Maker;

int main()
{

	Maker p1 = { "aaa1", 10 };
	Maker p2 = { "aaa2", 20 };
	Maker p3 = { "aaa3", 30 };
	Maker p4 = { "aaa4", 40 };
	Maker p5 = { "aaa5", 50 };

	//��ʼ��ջ
	void *stack = Init_SeqStack();

	//������ջ
	Push_SeqStack(stack, &p1);
	Push_SeqStack(stack, &p2);
	Push_SeqStack(stack, &p3);
	Push_SeqStack(stack, &p4);
	Push_SeqStack(stack, &p5);

	//���ջ�����е�Ԫ��
	while (Size_SeqStack(stack)>0)
	{
		//��ȡջ��Ԫ��
		Maker *maker = (Maker*)Top_SeqStack(stack);
		printf("name:%s,age:%d\n", maker->name, maker->age);
		//����ջ��Ԫ��
		Pop_SeqStack(stack);

	}

	Destroy_SeqStack(stack);

	system("pause");
	return EXIT_SUCCESS;
}

