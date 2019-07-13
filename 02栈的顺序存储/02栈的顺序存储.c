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

	//初始化栈
	void *stack = Init_SeqStack();

	//数据入栈
	Push_SeqStack(stack, &p1);
	Push_SeqStack(stack, &p2);
	Push_SeqStack(stack, &p3);
	Push_SeqStack(stack, &p4);
	Push_SeqStack(stack, &p5);

	//输出栈中所有的元素
	while (Size_SeqStack(stack)>0)
	{
		//获取栈顶元素
		Maker *maker = (Maker*)Top_SeqStack(stack);
		printf("name:%s,age:%d\n", maker->name, maker->age);
		//弹出栈顶元素
		Pop_SeqStack(stack);

	}

	Destroy_SeqStack(stack);

	system("pause");
	return EXIT_SUCCESS;
}

