#pragma once

// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
extern "C" {
#endif

	typedef struct node {
		int data;
		struct node* next;
	}node;

	// pの前にdataの値を持つノードを追加する
	node* add_node(node* p, int data);
	
	// pで始まるリストのノードのメモリを確保する
	void delete_all(node* p);


// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
} // extern "C"
#endif