#include "LinkStack.h"


//初始化
void *Init_LStack()
{
	return Init_ListList();
}

//入栈
void Push_LStack(void *stack, void *data)
{
	InsertByPos_ListList(stack, 0, data);

}

//出栈
void Pop_LStack(void *stack)
{
	RemoveByPos_LinkNode(stack, 0);

}
//获取栈顶元素
void *Get_LStack(void *stack)
{
	return Get_LinkNode(stack, 0);
}

//获取元素个数
int Size_LStack(void *stack)
{
	return Size_LinkNode(stack);
}

//销毁栈
void Destroy_LStack(void *stack)
{
	Destroy_LinkNode(stack);
}