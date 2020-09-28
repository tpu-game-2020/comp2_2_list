#include "Windows.h"                    // Windows API の機能定義
#include "../include/liblist.h"

//
// pの前にdataの値を持つノードを追加する
//
node* add_node(node* p, int data)
{
	// ToDo: pの前にdataの値を持つノードを追加する
	node* ret = (node*)malloc(sizeof(node));
	if (ret == NULL)
	{
		return NULL;
	}
	ret -> data = data;
	ret -> next = p;

	return ret;
}

//
// pで始まるリストのノードのメモリを確保する
//
void delete_all(node* p)
{
	// ToDo: pで始まるリストのメモリを解放してください
	while (p != NULL)
	{
		node* next = p -> next;
		free(p);
		p = next;
	}
}
