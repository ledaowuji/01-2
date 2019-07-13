#include "LinkStack.h"


//��ʼ��
void *Init_LStack()
{
	return Init_ListList();
}

//��ջ
void Push_LStack(void *stack, void *data)
{
	InsertByPos_ListList(stack, 0, data);

}

//��ջ
void Pop_LStack(void *stack)
{
	RemoveByPos_LinkNode(stack, 0);

}
//��ȡջ��Ԫ��
void *Get_LStack(void *stack)
{
	return Get_LinkNode(stack, 0);
}

//��ȡԪ�ظ���
int Size_LStack(void *stack)
{
	return Size_LinkNode(stack);
}

//����ջ
void Destroy_LStack(void *stack)
{
	Destroy_LinkNode(stack);
}