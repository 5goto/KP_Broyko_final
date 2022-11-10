#pragma once
#include <iostream>
#include <string>

using namespace std;



class Production
{
	struct date_type
	{
		int day;
		int mounth;
		int year;
		date_type() : day{}, mounth{}, year{} {}
		date_type(int day_, int mounth_, int year_) : day{ day_ }, mounth{ mounth_ }, year{ year_ } {}

		int get_int_time() { day + 30 * mounth + 365 * year; }

		bool operator ==(const date_type& other)
		{
			return day == other.day && mounth == other.mounth && year == other.year;
		}
		bool operator !=(const date_type& other)
		{
			return day != other.day || mounth != other.mounth || year != other.year;
		}
		bool operator >=(const date_type& other)
		{
			return day + 30 * mounth + 365 * year >= other.day + 30 * other.mounth + 365 * other.year;
		}
		bool operator <=(const date_type& other)
		{
			return day + 30 * mounth + 365 * year <= other.day + 30 * other.mounth + 365 * other.year;
		}
		bool operator >(const date_type& other)
		{
			return day + 30 * mounth + 365 * year > other.day + 30 * other.mounth + 365 * other.year;
		}
		bool operator <(const date_type& other)
		{
			return day + 30 * mounth + 365 * year < other.day + 30 * other.mounth + 365 * other.year;
		}
		friend ostream& operator << (ostream& out, date_type& object)
		{
			out << object.day << ":" << object.mounth << ":" << object.year;
			return out;
		}
		int get_day() { return day; }
		int get_mounth() { return mounth; }
		int get_year() { return year; }
	};

	date_type date;
	string name; 
	int price; 


public:
	// конструкторы
	Production(date_type date_, string name_, int price_) : // инициализирующий, для чтения из файла
		date{ date_ }, name{ name_ }, price{ price_ } {}
	Production(date_type date_) :
		date{ date_ }, name{ }, price{ } {}
	Production() : // по умолчанию
		date{ }, name{ }, price{ } {}


	// перегрузка операторов сравнения для Бинарного дерева
	bool operator ==(const Production& other)
	{
		return date == other.date && price == other.price && name == other.name;
	}
	bool operator !=(const Production& other)
	{
		return date != other.date || price != other.price || name != other.name;
	}
	bool operator >=(const Production& other)
	{
		return date >= other.date;
	}
	bool operator <=(const Production& other)
	{
		return date <= other.date;
	}
	bool operator >(const Production& other)
	{
		return date > other.date;
	}
	bool operator < (const Production& other)
	{
		return date < other.date;
	}
	friend ostream& operator << (ostream& out, Production& object) // перегрузка оператора потока, для отладки
	{
		out << object.date << "|" << object.name <<
			"|" << object.price;
		return out;
	}

	operator int() const // приведение к целому числу для ключа Бинарного дерева
	{
		return date.day + 30 * date.mounth + 365 * date.year;
	}



	string get_name() { return name; }
	date_type get_date() { return date; }
	int get_day() { return date.day; }
	int get_mounth() { return date.mounth; }
	int get_year() { return date.year; }
	int get_price() { return price; }

	auto get_all_data_string() // для перевода в Системную строку и отображения в Форме // в консольном интерфейсе не используется
	{
		auto name_str = gcnew System::String(name.c_str());
		auto result = name_str + "|" + price.ToString() + "|"
		 + date.day.ToString() + "/" + date.mounth.ToString()
			+ "/" + date.year.ToString();

		return result;
	}

	/*System::String^ get_all_date()
	{
		auto str_e = gcnew System::String(employee.c_str());
		return (date.day + 30 * date.mounth + 365 * date.year).ToString() + "(" + str_e + ")";
	}*/
};



class Performance
{
	string title;
	string genre; 
	int duration; 

public:
	Performance(string title_, string genre_, int duration_) : // Инициализирующий конструктор для ввода из файла
		title{ title_ }, genre{ genre_ }, duration{ duration_ } {}
	Performance() : // Конструктор по умолчанию, нужен для Хэш таблицы
		title{  }, genre{  }, duration{  } {}

	operator int() const // перегрузка приведения к целому число, ключ хэширования - сумма кодов символов Названия манги
	{
		int counter{ };
		for (auto i = 0; i < title.length(); ++i)
			counter += (int)title[i];
		return counter;
	}

	friend ostream& operator << (ostream& out, Performance& object) // перегрузка оператора вывода. Для консольной отладки
	{
		out << object.title << "|" << object.genre << "|" << object.duration;
		return out;
	}
	bool operator ==(const  Performance& other) // перегрузка операторов сравнения
	{
		return title == other.title && genre == other.genre
			&& duration == other.duration;
	}
	bool operator !=(const  Performance& other)
	{
		return title != other.title || genre != other.genre
			|| duration != other.duration;
	}
	// простые геттеры, возвращают значения конкретных полей для поисковой задачи
	string get_title()
	{
		return title;
	}
	string get_genre()
	{
		return genre;
	}
	int get_duration()
	{
		return duration;
	}

	auto get_all_data_string() // для перевода в Системную строку и отображения в Форме // в консольном интерфейсе не используется
	{
		auto title_str = gcnew System::String(title.c_str());
		auto genre_str = gcnew System::String(genre.c_str());
		auto result = title_str + "|" + genre_str + "|"
			+ duration.ToString();

		return result;
	}
};


