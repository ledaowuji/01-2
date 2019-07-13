#include "LinkStack.h"


//初始化
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

//入栈
void Push_LStack(void *stack,void *data)
{
	if (stack == NULL || data == NULL)
	{
		return;
	}
	LStack *mystack = (LStack*)stack;

	LinkNode *node = (LinkNode *)data;

	//入栈
	node->next = mystack->head.next;
	mystack->head.next = data;

	mystack->size++;

}

//出栈
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
//获取栈顶元素
void *Get_LStack(void *stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	LStack *mystack = (LStack*)stack;

	return mystack->head.next;

}

//获取元素个数
int Size_LStack(void *stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	LStack *mystack = (LStack*)stack;

	return mystack->size;
}

//销毁栈
void Destroy_LStack(void *stack)
{
	if (stack != NULL)
	{
		free(stack);
		stack = NULL;
	}
}