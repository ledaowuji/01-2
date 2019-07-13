#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Linklist.h"

typedef struct MyLinkNode{
	struct MyLinkNode *next;
}MyLinkNode;



//初始化
void *Init_LStack();

//入栈
void Push_LStack(void *stack, void *data);

//出栈
void Pop_LStack(void *stack);
//获取栈顶元素
void *Get_LStack(void *stack);

//获取元素个数
int Size_LStack(void *stack);

//销毁栈
void Destroy_LStack(void *stack);
