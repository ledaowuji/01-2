#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct LinkNode{
	struct LinkNode *next;
}LinkNode;

typedef struct LStack{
	LinkNode head;
	int size;
}LStack;

//��ʼ��
void *Init_LStack();

//��ջ
void Push_LStack(void *stack,void *data);

//��ջ
void Pop_LStack(void *stack);
//��ȡջ��Ԫ��
void *Get_LStack(void *stack);

//��ȡԪ�ظ���
int Size_LStack(void *stack);

//����ջ
void Destroy_LStack(void *stack);

