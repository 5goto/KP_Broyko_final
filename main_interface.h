#pragma once
#include "main_interface.h"
#include "hash_table_class.h"
#include "tree_class.h"
#include "init_mod.h"
#include "main_classes.h"

vector<int> hash_function_keys;
vector<string> hash_function_objects_names;

vector<vector<int>> tree_function_keys;
vector<string> tree_function_objects_names;

class Interface // Паттерн фасад для усправления основными сущностями
{
	BTree<Production*>* production_data_base; 
	SimpleHashTable<Performance*>* performance_data_base; 
	int hash_table_size; // хэш таблица статическая - поэтому указывается размер таблицы
	bool inited; // проверяет инициализированы ли базы данных, для графики


	bool is_it_prime(int n) {
		for (auto i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				return false;
		}
		return true;
	}

public:
	Interface() : production_data_base{ nullptr }, performance_data_base{ nullptr }, inited{ false } {} 
	~Interface() 
	{
		delete production_data_base;
		delete performance_data_base;
	}

	void Init_Data_Bases(int size) // инициализация основных баз данных
	{
		Init_Production_Data_Base favorites_base; //  объекты из файла Init from file
		Init_Performance_Data_Base manga_base;   // они  вернут заполненные из файла базы данных
		hash_table_size = size;
		production_data_base = favorites_base.Init_Data_Base();  // здесь
		performance_data_base = manga_base.Init_Data_Base(hash_table_size); // и здесь
		inited = true;
	}

	bool is_bases_inited()
	{
		return inited;
	}

	/*vector<string> Init_Cleaning_for_Form()
	{
		ifstream file_for_input("Сleaning.txt");
		string tmp;
		vector<string> splitted_line;
		vector<string> result;


		while (getline(file_for_input, tmp))
		{
			result.push_back(tmp);
		}
		file_for_input.close();
		return result;
	}*/
	vector<int> get_initialize_hash_keys() { return hash_function_keys; }
	vector<string> get_initialize_hash_objects_names() { return hash_function_objects_names; }

	vector<vector<int>> get_tree_keys() { return tree_function_keys; }
	vector<string> get_tree_names() { return tree_function_objects_names; }

	auto find_object_in_tree(int day, int mounth, int year, string name, int price)
	{
		Production* tmp_struct = new Production{ {day, mounth, year}, name, price };
		return production_data_base->tree_search(tmp_struct);
	}

	auto find_object_in_table(string title, string genre, int duration)
	{
		Performance* tmp_struct = new Performance{ title, genre, duration };
		auto operation_result = performance_data_base->search_index(tmp_struct);
		if (operation_result != -1)
			return true;
		else
			return false;
	}

	int get_string_code(string object) // функция переводит Строку к числовому представлению - считает сумму кодов символов
	{
		int counter{ };
		for (auto i = 0; i < object.length(); ++i)
			counter += (int)object[i];
		return counter;
	}


	auto main_search_task(string genre, int day, int mounth, int year, int& comprassions) // решение осонвной поисковой задачи, принимает статус и ограничение по возрасту
	{ 
		// здесь мы получаем узел, содержащий все объекты с интересующим нас статусом 
		vector<Performance*> answer; // это вектор, в которыйь ответы
		RingLinkList<Production*>::node* production_with_good_date = production_data_base->search_wrap(new Production{ {day, mounth, year} }, comprassions); // (*)
		RingLinkList<Production*>::node* tmp_prod = production_with_good_date;

		if (production_with_good_date != NULL)
		{
			do // просто последовательно идем по цепочке, как по односвязному списку
			{ // получаем название Манги из очередного объекта Избранного, которые хранятся в том списке, который мы получили здесь (*)
				Performance* tmp = performance_data_base->search_index(get_string_code(production_with_good_date->data->get_name())); // хэшируем по этому названию, смотрим есть ли такой объект в таблице
				if (tmp != NULL)  // если объект есть т.е. хэширование успешно
				{
					if (tmp->get_genre() == genre)
						answer.push_back(tmp);
				}
				production_with_good_date = production_with_good_date->next; // движемся дальше по цепочке пока не пройдем ее всю
				comprassions++;
			} while (production_with_good_date != tmp_prod);
		}
			return answer;
	}

	//void testSearch(string name)
	//{
	//	name = name + " ";
	//	auto result = production_data_base->searchOrderTraversWrapper(name);
	//	for (auto item : *result) // распечатываем ответ в консоль
	//		cout << *item << endl;
	//}

	auto get_all_tree_for_debug()
	{
		return production_data_base;
	}

	auto get_all_tree_for_drawning()
	{
		return production_data_base->draw_wrap_return();
	}

	auto get_all_hash_table()
	{
		return performance_data_base;
	}

	auto get_hash_table_size()
	{
		return hash_table_size;
	}

	int insert_element_to_performance_data_base(string title, string genre, int duration)
	{
		Performance* tmp_struct = new Performance{ title, genre, duration };
		int op_result = performance_data_base->add_element(tmp_struct);
		return op_result;
	}

	int delete_element_from_performance_data_base(string title, string genre, int duration)
	{
		Performance* tmp_struct = new Performance{title, genre, duration };
		int op_result = performance_data_base->delete_element(tmp_struct);
		return op_result;
	}

	vector<int>* insert_element_to_production_data_base(int day, int mounth, int year, string name, int price)
	{
		Production* tmp_struct = new Production{ {day, mounth, year}, name, price };
		auto path = production_data_base->additem(tmp_struct);
		return path;
	}

	bool delete_element_to_production_data_base(int day, int mounth, int year, string name, int price)
	{
		Production* tmp_struct = new Production{ {day, mounth, year}, name, price };
		auto process_result = production_data_base->delete_wrap(tmp_struct);
		return process_result;
	}

	auto find_all_elements_by_num(string name)
	{
		auto elements_found = production_data_base->searchOrderTraversWrapper(name);
		return elements_found;
	}
};