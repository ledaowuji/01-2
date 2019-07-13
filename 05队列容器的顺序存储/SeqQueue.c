#include "SeqQueue.h"



//��ʼ��
void *Init_SQueue()
{
	SQueue *queue = (SQueue*)malloc(sizeof(SQueue));
	if (queue == NULL)
	{
		return NULL;
	}

	queue->size = 0;
	for (int i = 0; i < 1024; i++)
	{
		queue->data[i] = NULL;
	}

	return queue;
}

//���
void Push_SQueue(void *queue, void *data)
{
	if (queue == NULL || data == NULL)
	{
		return;
	}

	SQueue *myqueue = (SQueue*)queue;
	if (myqueue->size == 1024)//��������
	{
		return;
	}

	for (int i = myqueue->size - 1; i >= 0; i--)
	{
		myqueue->data[i + 1] = myqueue->data[i];
	}

	myqueue->data[0] = data;
	myqueue->size++;
}
//����
void Pop_SQueue(void *queue)
{
	if (queue == NULL)
	{
		return;
	}
	SQueue *myqueue = (SQueue*)queue;
	if (myqueue->size == 0)
	{
		return;
	}

	myqueue->size--;

}

//��ȡ��ͷԪ��
void *Front_SQueue(void *queue)
{
	if (queue == NULL)
	{
		return NULL;
	}
	SQueue *myqueue = (SQueue*)queue;

	return myqueue->data[myqueue->size - 1];

}

//��ȡ��βԪ��
void *Back_SQueue(void *queue)
{
	if (queue == NULL)
	{
		return NULL;
	}
	SQueue *myqueue = (SQueue*)queue;

	return myqueue->data[0];
}
//��ȡԪ�ظ���
int Size_SQueue(void *queue)
{
	if (queue == NULL)
	{
		return -1;
	}
	SQueue *myqueue = (SQueue*)queue;

	return myqueue->size;
}
//���ٶ���
void Destroy_SQueue(void *queue)
{
	if (queue != NULL)
	{
		free(queue);
		queue = NULL;
	}
}
