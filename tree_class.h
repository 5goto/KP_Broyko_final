#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <type_traits>
#include <vector>
#include "main_classes.h"

using namespace std;


/////////////////////////////////////
template <typename ListData>
class RingLinkList
{
public:	struct node
	{
		ListData data;
		node* pred;
		node* next;

		node(ListData data_) : data{ data_ }, pred{ nullptr }, next{ nullptr } {}
	};

	node* head;

public:
	RingLinkList() : head{ nullptr } {} // конструктор по умолчанию


	bool is_it_empty() { return (head == nullptr) ? true : false; } // true если список пуст, false в противном случае

	void push_back(ListData data) // добавление узла в конец двусвязного кольцевого списка
	{ // true, если элемент был удален
		if (head == nullptr) // список пуст
		{
			head = new node{ data };
			head->next = head;
			head->pred = head;
		}
		else // не пуст
		{
			node* new_unit = new node{ data };
			head->pred->next = new_unit;

			new_unit->pred = head->pred;
			new_unit->next = head;

			head->pred = new_unit;
		}
	}

	bool delete_first_equal_element_by_data(ListData data) // удаление первого совпавшего элемента
	{
		if (head == nullptr) return false; // проверка наличия элементов в списке

		node* search_tmp = head;
		if (head->next == head) // проверка первого элемента
		{
			delete search_tmp;
			head = nullptr;
			return true;
		}
		else // случай, когда элементов несколько
		{
			if (*search_tmp->data == *data)
			{
				search_tmp->pred->next = search_tmp->next;
				search_tmp->next->pred = search_tmp->pred;
				head = search_tmp->next;
				delete search_tmp;
				return true;
			}
			search_tmp = search_tmp->next;

			while (search_tmp != head)
			{
				if (*search_tmp->data == *data)
				{
					search_tmp->pred->next = search_tmp->next;
					search_tmp->next->pred = search_tmp->pred;
					delete search_tmp;
					return true;
				}
				search_tmp = search_tmp->next;
			}
			return false;
		}
	}

	bool search_first_element_by_data(ListData data) // поиск элемента, true - если элемент найден, false - в противном случае
	{
		if (*head->data == *data) // проверка первого элемента
			return true;

		node* search_tmp = head->next;

		while (search_tmp != head) // проверка последующих элементов
		{
			if (*search_tmp->data == *data)
				return true;
			search_tmp = search_tmp->next;
		}
		return false;
	}

	void console_print()
	{
		if (head == nullptr)
			cout << "Empty list" << endl;
		else
		{
			node* print_tmp = head;
			do {
				cout << *print_tmp->data << "<>"; // << "pred: " << print_tmp->pred << "next: " << print_tmp->next << "///";
				print_tmp = print_tmp->next;
			} while (print_tmp != head);
			//cout << endl;
		}
	}

	auto get_all_nodes_data_string()
	{
		/*if (head == nullptr)
			return "";
		else*/
		{
			System::String^ str = "";
			node* print_tmp = head;
			do {
				str += print_tmp->data->get_all_data_string() + "<>"; // << "pred: " << print_tmp->pred << "next: " << print_tmp->next << "///";
				print_tmp = print_tmp->next;
			} while (print_tmp != head);
			//cout << endl;
			return str;
		}
	}

	auto get_head() { return head; }


};
//////////////////////////////////////////////////////////

template<typename Tree_Data>
class BTree
{
	//struct keys //ключ узла
	//{
	//	string letter;
	//	int number;
	//};
	struct node // узел дерева 
	{
		int key; // ключ узла
		RingLinkList<Tree_Data>* data; // вложенный двусвязный кольцевой список
		int count;
		int balance_factor;  // баланс фактор
		node* left;
		node* right;
		// конструктор узла
		node(int key_, Tree_Data new_data) : data{ new RingLinkList<Tree_Data> }, key{ key_ }, balance_factor{}, left{ nullptr }, right{ nullptr }
		{
			data->push_back(new_data);
		}
	};

	node* root;
	bool* is_h_change;

public:
	BTree()
	{
		root = nullptr;
		is_h_change = new bool{ false };
	}



	vector<int>* additem(Tree_Data data) { // обертка для добавления элемента
		vector<int>* path{ new vector<int> };
		virt_insert_search(data, root, path);
		tree_function_keys.push_back(*path);
		tree_function_objects_names.push_back(data->get_name());
		return path;
	}

	void virt_insert_search(Tree_Data search_key, node*& current_pointer, vector<int>* path)
	{
		node* p1;
		node* p2;
		if (current_pointer == NULL)
		{
			current_pointer = new node{ (int)(*search_key), search_key }; // новый узел дерева

			*is_h_change = true; // при изменении высоты поднимается следующий флаг
		}
		else if ((int)(*search_key) < current_pointer->key)
		{
			path->push_back(current_pointer->key);
			virt_insert_search(search_key, current_pointer->left, path);
			if (*is_h_change) // если выросла левая ветвь
			{
				if (current_pointer->balance_factor == 1)
				{
					current_pointer->balance_factor = 0;
					*is_h_change = false;
				}
				else if (current_pointer->balance_factor == 0)
					current_pointer->balance_factor = -1;
				else
				{
					p1 = current_pointer->left;
					if (p1->balance_factor == -1)
					{
						current_pointer->left = p1->right;
						p1->right = current_pointer;
						current_pointer->balance_factor = 0;
						current_pointer = p1;
					}
					else
					{
						p2 = p1->right;
						p1->right = p2->left;
						p2->left = p1;
						current_pointer->left = p2->right;
						p2->right = current_pointer;
						if (p2->balance_factor == -1)
							current_pointer->balance_factor = 1;
						else
							current_pointer->balance_factor = 0;
						if (p2->balance_factor == 1)
							current_pointer->balance_factor = -1;
						else
							current_pointer->balance_factor = 0;
						current_pointer = p2;
					}
					current_pointer->balance_factor = 0;
					*is_h_change = false;
				}
			}
		}
		else if ((int)(*search_key) > current_pointer->key)
		{
			path->push_back(current_pointer->key);
			virt_insert_search(search_key, current_pointer->right, path);
			if (*is_h_change)
			{
				if (current_pointer->balance_factor == -1)
				{
					current_pointer->balance_factor = 0;
					*is_h_change = false;
				}
				else if (current_pointer->balance_factor == 0)
					current_pointer->balance_factor = 1;
				else
				{
					p1 = current_pointer->right;
					if (p1->balance_factor == 1)
					{
						current_pointer->right = p1->left;
						p1->left = current_pointer;
						current_pointer->balance_factor = 0;
						current_pointer = p1;
					}
					else
					{
						p2 = p1->left;
						p1->left = p2->right;
						p2->right = p1;
						current_pointer->right = p2->left;
						p2->left = current_pointer;
						if (p2->balance_factor == 1)
							current_pointer->balance_factor = -1;
						else
							current_pointer->balance_factor = 0;
						if (p2->balance_factor == -1)
							current_pointer->balance_factor = 1;
						else
							current_pointer->balance_factor = 0;
						current_pointer = p2;
					}
					current_pointer->balance_factor = 0;
					*is_h_change = false;
				}
			}
		}
		else
		{
			current_pointer->data->push_back(search_key); // случай равенства ключей, увеличиваем счетчик
			*is_h_change = false;
		}
	}

	void balanceL(node*& p, bool* hight) // левый поворот
	{
		node* p1;
		node* p2;
		if (p->balance_factor == -1)
			p->balance_factor = 0;
		else if (p->balance_factor == 0)
		{
			p->balance_factor = 1;
			*hight = false;
		}
		else
		{
			p1 = p->right;
			if (p1->balance_factor >= 0)
			{
				p->right = p1->left;
				p1->left = p;
				if (p1->balance_factor == 0)
				{
					p->balance_factor = 1;
					p1->balance_factor = -1;
					*hight = false;
				}
				else
				{
					p->balance_factor = 0;
					p1->balance_factor = 0;
				}
				p = p1;
			}
			else
			{
				p2 = p1->left;
				p1->left = p2->right;
				p2->right = p1;
				p->right = p2->left;
				p2->left = p;
				if (p2->balance_factor == 1)
					p->balance_factor = -1;
				else
					p->balance_factor = 0;
				if (p2->balance_factor == -1)
					p1->balance_factor = 1;
				else
					p1->balance_factor = 0;
				p = p2;
				p2->balance_factor = 0;
			}
		}
	}

	void balanceR(node*& p, bool* hight) // правый поворот
	{
		node* p1;
		node* p2;
		if (p->balance_factor == 1)
			p->balance_factor = 0;
		else if (p->balance_factor == 0)
		{
			p->balance_factor = -1;
			*hight = false;
		}
		else
		{
			p1 = p->left;
			if (p1->balance_factor <= 0)
			{
				p->left = p1->right;
				p1->right = p;
				if (p1->balance_factor == 0)
				{
					p->balance_factor = -1;
					p1->balance_factor = 1;
					*hight = false;
				}
				else
				{
					p->balance_factor = 0;
					p1->balance_factor = 0;
				}
				p = p1;
			}
			else
			{
				p2 = p1->right;
				p1->right = p2->left;
				p2->left = p1;
				p->left = p2->right;
				p2->right = p;
				if (p2->balance_factor == -1)
					p->balance_factor = 1;
				else
					p->balance_factor = 0;
				if (p2->balance_factor == 1)
					p1->balance_factor = -1;
				else
					p1->balance_factor = 0;
				p = p2;
				p2->balance_factor = 0;
			}
		}
	}

	void del(node*& r, bool* hight, node*& q) // ??
	{
		if (r->left != NULL)
		{
			del(r->left, hight, q);
			if (hight)
				balanceR(r, hight);
		}
		else
		{
			q->key = r->key;
			q->data = r->data;
			q->count = r->count;
			q = r;
			r = r->right;
			*hight = true;
		}
	}

	bool delete_wrap(Tree_Data data)
	{
		return delete_from_tree(data, root, is_h_change);
	}

	bool delete_from_tree(Tree_Data data_to_delete, node*& current_node, bool* hight)
	{
		if (current_node == NULL)
			return false;
		else if ((int)(*data_to_delete) < current_node->key)
		{
			delete_from_tree(data_to_delete, current_node->left, hight);
			if (*hight)
				balanceL(current_node, hight);
		}
		else if ((int)(*data_to_delete) > current_node->key)
		{
			delete_from_tree(data_to_delete, current_node->right, hight);
			if (*hight)
				balanceR(current_node, hight);
		}
		else
		{
			if (current_node->data->delete_first_equal_element_by_data(data_to_delete))
			{
				if (!current_node->data->is_it_empty())
					return true;
				else
				{
					node* q = current_node;
					if (q->right == NULL)
					{
						current_node = q->left;
						*hight = true;
					}
					else if (q->left == NULL)
					{
						current_node = q->right;
						*hight = true;
					}
					else
					{
						del(q->right, hight, q);
						if (*hight)
							balanceL(current_node, hight);
					}
					return true;
				}
			}
			else
			{
				return false;
			}
		}
	}

	node* findmin(node* p) // поиск узла с минимальным ключом в дереве p 
	{
		return p->left ? findmin(p->left) : p;
	}

	node* findmax(node* ptr) // поиск максимального узла в поддереве
	{
		while (ptr->right != NULL)
			ptr = ptr->right;
		return ptr;
	}

public: auto tree_search(Tree_Data object)
{
	node* head = root;
	if (head != NULL)
	{
		while (head != nullptr)
		{
			if (head->key == (int)(*object))
			{
				if (head->data->search_first_element_by_data(object))
					return true;
				else
					return false;
			}
			else if (head->key < (int)(*object))
				head = head->right;
			else
				head = head->left;
		}
	}
	else
		return false;
}


	  public: auto draw_wrap_return()
	  {
		  node* head = root;
		  auto items{ gcnew System::Collections::Generic::LinkedList<System::String^> };
		  draw(head, items);
		  return items;
	  }

	  private: void draw(node* p, System::Collections::Generic::LinkedList<System::String^>^ res, int level = 3) {
        if (p != NULL) {
            draw(p->right, res, level + 4);
            System::String^ space = "";
            for (int i = 0; i < level; i++) {
                space += " ";
            }
            if (p != NULL)
            {

				space += p->data->get_all_nodes_data_string();
			    cout << endl;
            }
            res->AddLast(space);
            draw(p->left, res, level + 4);
        }
    }

	public:  auto searchOrderTraversWrapper(string name)
	{
		node* head = root;
		vector<Tree_Data>* result{ new vector<Tree_Data> };
		searchOrderTravers(head, name, result);
		return result;
	}

	private: void searchOrderTravers(node* head, string name, vector<Tree_Data>* res) // прямой обход (1)
	{
		if (head != NULL)
		{
			RingLinkList<Production*>::node* tmp = head->data->get_head();
			RingLinkList<Production*>::node* search_tmp = tmp;
			do
			{
				if (tmp->data->get_name() == name)
					res->push_back(tmp->data);
				tmp = tmp->next;
			} while (tmp != search_tmp);
			searchOrderTravers(head->left, name, res);
			searchOrderTravers(head->right, name, res);
		}
	}

	public: RingLinkList<Production*>::node* search_wrap(Tree_Data data, int& comprassions) // обертка для фыункции поиска
	{
		node* x = root;
		return search(data, x, comprassions);
	}

	private: RingLinkList<Production*>::node* search(Tree_Data data, node* current_node, int& comprassions) // поиск нужного узла в дереве
	{
		comprassions++;
		while (current_node != NULL && ((int)(*data) != current_node->key))
		{
			comprassions++;
			if ((int)(*data) < current_node->key)
				current_node = current_node->left;
			else current_node = current_node->right;
		}
		if (current_node != NULL)
			return current_node->data->get_head();
		else
			return NULL;
	}

	public: vector<Tree_Data>*& get_all_items()
	{
		node* head = root;
		vector<Tree_Data>* items{ new vector<Tree_Data> };
		sortOrderTravers(head, items);
		return items;
	}
	
	private:void sortOrderTravers(node* head, vector<Tree_Data>* res) // обход с выводом в отсортированном порядке (Центрированный)
	{
		if (head != NULL)
		{
			sortOrderTravers(head->left, res);
			RingLinkList<Production*>::node* tmp = head->data->get_head();
			RingLinkList<Production*>::node* search_tmp = tmp;
			do
			{
				res->push_back(tmp->data);
				tmp = tmp->next;
			} while (tmp != search_tmp);
			sortOrderTravers(head->right, res);
		}
	}
};