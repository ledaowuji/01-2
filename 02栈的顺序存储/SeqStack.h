#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//˳��C
typedef struct SeqStack{
	void *data[1024];
	int size;

}SeqStack;

//��ʼ��ջ
void *Init_SeqStack();

//��ջ��ѹջ)
void Push_SeqStack(void *stack, void *data);
//��ջ
void Pop_SeqStack(void *stack);

//��ȡԪ�ظ���
int Size_SeqStack(void *stack);

//��ȡջ��Ԫ��
int Top_SeqStack(void *stack);

//����ջ
void Destroy_SeqStack(void *stack);

