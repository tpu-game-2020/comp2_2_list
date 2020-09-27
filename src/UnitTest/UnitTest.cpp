#include "pch.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include "CppUnitTest.h"
#include "../include/liblist.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_MODULE_CLEANUP(test_module_cleanup) {
		Assert::IsFalse(_CrtDumpMemoryLeaks());// メモリリークチェック
	}

	TEST_CLASS(UnitTest)
	{
	public:
		
		// ノードの追加
		TEST_METHOD(node_added)
		{
			node* head = add_node(NULL, 1);
			Assert::AreEqual(1, head->data);

			delete_all(head);
		}

		// 最後のノードはNULL
		TEST_METHOD(last_node_is_null)
		{
			node* head = add_node(NULL, 1);
			Assert::IsNull(head->next);

			delete_all(head);
		}

		// ノードを2つ追加したら最後のノードが先頭にくる
		TEST_METHOD(added_node_comes_first)
		{
			node* head = add_node(NULL, 1);
			head = add_node(head, 2);

			Assert::AreEqual(2, head->data);

			node* p = head->next;
			Assert::AreEqual(1, p->data);

			delete_all(head);
		}

	};
}
