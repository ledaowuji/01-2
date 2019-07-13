#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Linklist.h"

//用户的数据，用户的数据结构体第一个成员必须包含规则的数据
typedef struct Maker{
	LinkNode node;
	char name[64];
	int age;
}Maker;

void myPrint(void *data)
{
	Maker *maker = (Maker*)data;
	printf("name:%s,age:%d\n", maker->name, maker->age);
}

int main()
{

	Maker p1 = { NULL, "aaa1", 18 };
	Maker p2 = { NULL, "aaa2", 19 };
	Maker p3 = { NULL, "aaa3", 20 };
	Maker p4 = { NULL, "aaa4", 21 };
	Maker p5 = { NULL, "aaa5", 22 };


	void *list=Init_ListList();
	//将数据插入链表
	InsertByPos_ListList(list, 0, (LinkNode *)&p1);//把用户的寻址范围缩小
	InsertByPos_ListList(list, 0, (LinkNode *)&p2);
	InsertByPos_ListList(list, 0, (LinkNode *)&p3);
	InsertByPos_ListList(list, 0, (LinkNode *)&p4);
	InsertByPos_ListList(list, 0, (LinkNode *)&p5);

	Foreach_LinkNode(list, myPrint);

	Maker *m = (Maker*)Get_LinkNode(list, 2);

	printf("m->name:%s,m->age:%d\n", m->name, m->age);

	printf("size:%d\n", Size_LinkNode(list));

	Destroy_LinkNode(list);
	system("pause");
	return EXIT_SUCCESS;
}

