#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//˳��洢
typedef struct SQueue{
	void *data[1024];//ָ������
	int size;
}SQueue;

//��ʼ��
void *Init_SQueue();

//���
void Push_SQueue(void *queue,void *data);
//����
void Pop_SQueue(void *queue);

//��ȡ��ͷԪ��
void *Front_SQueue(void *queue);

//��ȡ��βԪ��
void *Back_SQueue(void *queue);
//��ȡԪ�ظ���
int Size_SQueue(void *queue);
//���ٶ���
void Destroy_SQueue(void *queue);
