#include "Linklist.h"

//��ʼ������
void *Init_ListList()
{
	//ͷ�ڵ�Ŀռ�
	LList *list = (LList*)malloc(sizeof(LList));
	if (list == NULL)
	{
		return NULL;
	}

	list->head.next = NULL;
	list->size = 0;
	return list;
}

//ָ��λ�ò���
void InsertByPos_ListList(void *list, int pos, LinkNode *data)
{
	if (list == NULL || data == NULL)
	{
		return;
	}
	LList *mylist = (LList*)list;
	if (pos<0 || pos>mylist->size)
	{
		pos = mylist->size;
	}

	//�ҵ�posλ�ýڵ��ǰһ���ڵ�
	LinkNode *pCur = &(mylist->head);
	for (int i = 0; i < pos; i++)
	{
		pCur = pCur->next;
	}

	//���½ڵ�������
	data->next = pCur->next;
	pCur->next = data;

	mylist->size++;


}
//����
void Foreach_LinkNode(void *list, void(*foreach)(void *))
{
	if (list == NULL || foreach == NULL)
	{
		return;
	}
	LList *mylist = (LList*)list;

	LinkNode *pCur = mylist->head.next;

	while (pCur!=NULL)
	{
		foreach(pCur);
		pCur = pCur->next;

	}


}
//����λ�û�ȡֵ
void *Get_LinkNode(void *list, int pos)
{
	if (list == NULL)
	{
		return NULL;
	}
	LList *mylist = (LList*)list;
	if (pos<0 || pos>mylist->size - 1)
	{
		return NULL;
	}

	LinkNode *pCur = &(mylist->head);
	for (int i = 0; i < pos; i++)
	{
		pCur = pCur->next;
	}

	return pCur->next;

}
//��ȡԪ�ظ���
int Size_LinkNode(void *list)
{
	if (list == NULL)
	{
		return -1;
	}
	LList *mylist = (LList*)list;

	return mylist->size;

}
//����λ��ɾ��
void RemoveByPos_LinkNode(void *list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	LList *mylist = (LList*)list;

	if (mylist->size == 0)
	{
		return;
	}

	if (pos<0 || pos>mylist->size)
	{
		return;
	}

	LinkNode *pCur = &(mylist->head);
	for (int i = 0; i < pos; i++)
	{
		pCur = pCur->next;
	}

	//�����ɾ���Ľڵ�
	LinkNode *Del = pCur->next;
	//���½���ǰ������ϵ
	pCur->next = Del->next;

	mylist->size--;

}
//����
void Destroy_LinkNode(void *list)
{
	if (list != NULL)
	{
		free(list);
		list = NULL;
	}
}
