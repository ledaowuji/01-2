#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Linklist.h"

typedef struct MyLinkNode{
	struct MyLinkNode *next;
}MyLinkNode;



//��ʼ��
void *Init_LStack();

//��ջ
void Push_LStack(void *stack, void *data);

//��ջ
void Pop_LStack(void *stack);
//��ȡջ��Ԫ��
void *Get_LStack(void *stack);

//��ȡԪ�ظ���
int Size_LStack(void *stack);

//����ջ
void Destroy_LStack(void *stack);
