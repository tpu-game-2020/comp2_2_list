#include "Windows.h"                    // Windows API �̋@�\��`
#include "../include/liblist.h"

//
// p�̑O��data�̒l�����m�[�h��ǉ�����
//
node* add_node(node* p, int data)
{
	// ToDo: p�̑O��data�̒l�����m�[�h��ǉ�����
	node* ret = (node*)malloc(sizeof(node));
	if (ret == NULL) return NULL;
	ret->data = data;
	ret->next = p;

	return ret;
}

//
// p�Ŏn�܂郊�X�g�̃m�[�h�̃��������m�ۂ���
//
void delete_all(node* p)
{
	// ToDo: p�Ŏn�܂郊�X�g�̃�������������Ă�������
	while (p) {
		node* next = p->next;
		free(p);
		p = next;
	}
}
