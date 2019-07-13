#include "LinkStack.h"


//��ʼ��
void *Init_LStack()
{
	LStack *stack = (LStack*)malloc(sizeof(LStack));
	if (stack == NULL)
	{
		return NULL;
	}

	stack->head.next = NULL;
	stack->size = 0;

	return stack;

}

//��ջ
void Push_LStack(void *stack,void *data)
{
	if (stack == NULL || data == NULL)
	{
		return;
	}
	LStack *mystack = (LStack*)stack;

	LinkNode *node = (LinkNode *)data;

	//��ջ
	node->next = mystack->head.next;
	mystack->head.next = data;

	mystack->size++;

}

//��ջ
void Pop_LStack(void *stack)
{
	if (stack == NULL)
	{
		return;
	}

	LStack *mystack = (LStack*)stack;

	if (mystack->size == 0)
	{
		return;
	}

	LinkNode *pDel = mystack->head.next;
	mystack->head.next = pDel->next;

	mystack->size--;
}
//��ȡջ��Ԫ��
void *Get_LStack(void *stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	LStack *mystack = (LStack*)stack;

	return mystack->head.next;

}

//��ȡԪ�ظ���
int Size_LStack(void *stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	LStack *mystack = (LStack*)stack;

	return mystack->size;
}

//����ջ
void Destroy_LStack(void *stack)
{
	if (stack != NULL)
	{
		free(stack);
		stack = NULL;
	}
}