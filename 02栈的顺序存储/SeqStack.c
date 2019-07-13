#include "SeqStack.h"


//��ʼ��ջ
void *Init_SeqStack()
{
	SeqStack *stack = (SeqStack*)malloc(sizeof(SeqStack));
	if (stack == NULL)
	{
		return NULL;
	}

	stack->size = 0;
	for (int i = 0; i < 1024; i++)
	{
		stack->data[i] = 0;
	}

	return stack;

}

//��ջ��ѹջ)
void Push_SeqStack(void *stack, void *data)
{
	if (stack == NULL || data == NULL)
	{
		return;
	}
	SeqStack *mystack = (SeqStack*)stack;

	//���˾Ͳ���ջ
	if (mystack->size == 1024)
	{
		return;
	}

	mystack->data[mystack->size] = data;

	mystack->size++;


}
//��ջ
void Pop_SeqStack(void *stack)
{
	if (stack == NULL)
	{
		return;
	}

	SeqStack *mystack = (SeqStack*)stack;

	mystack->size--;
}

//��ȡԪ�ظ���
int Size_SeqStack(void *stack)
{
	if (stack == NULL)
	{
		return;
	}

	SeqStack *mystack = (SeqStack*)stack;
	return mystack->size;
}

//��ȡջ��Ԫ��
int Top_SeqStack(void *stack)
{
	if (stack == NULL)
	{
		return;
	}
	SeqStack *mystack = (SeqStack*)stack;

	return mystack->data[mystack->size - 1];

}

//����ջ
void Destroy_SeqStack(void *stack)
{
	if (stack != NULL)
	{
		free(stack);
		stack = NULL;
	}
}