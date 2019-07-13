#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"LinkStack.h"

typedef struct Maker{
	LinkNode node;
	char name[64];
	int age;
}Maker;


int main()
{
	Maker p1 = {NULL,"aaa1", 10 };
	Maker p2 = {NULL,"aaa2", 20 };
	Maker p3 = {NULL,"aaa3", 30 };
	Maker p4 = {NULL,"aaa4", 40 };
	Maker p5 = {NULL,"aaa5", 50 };

	//初始化链表
	void *stack = Init_LStack();

	//入栈
	Push_LStack(stack, &p1);
	Push_LStack(stack, &p2);
	Push_LStack(stack, &p3);
	Push_LStack(stack, &p4);
	Push_LStack(stack, &p5);

	while (Size_LStack(stack)>0)
	{
		//获取栈顶元素
		Maker *maker = Get_LStack(stack);
		printf("name:%s,age:%d\n", maker->name, maker->age);
		//弹出栈顶元素
		Pop_LStack(stack);
		printf("size:%d\n", Size_LStack(stack));
	}

	Destroy_LStack(stack);

	system("pause");
	return EXIT_SUCCESS;
}

