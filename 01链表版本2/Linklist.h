#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���û������ݰ�������ṹ��
typedef struct LinkNode{
	struct LinkNode *next;
}LinkNode;

//����Ľṹ��
typedef struct LList{
	LinkNode head;
	int size;
}LList;

//��ʼ������
void *Init_ListList();

//ָ��λ�ò���
void InsertByPos_ListList(void *list, int pos, LinkNode *data);
//����
void Foreach_LinkNode(void *list,void(*foreach)(void *));
//����λ�û�ȡֵ
void *Get_LinkNode(void *list, int pos);
//��ȡԪ�ظ���
int Size_LinkNode(void *list);
//����λ��ɾ��
void RemoveByPos_LinkNode(void *list, int pos);
//����
void Destroy_LinkNode(void *list);


