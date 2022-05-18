#include "stdafx.h"
using namespace std;
using namespace Dictionary;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	try
	{
		Dictionary::Instance d1 = Dictionary::Create("Преподаватели", 5); // Cоздание словаря
		Dictionary::Entry e1 = { 1, "Гладкий" }, e2 = { 2, "Веялкин" }, e3 = { 3, "Cмелов" }, e4 = { 4, "Урбанович" };


		Dictionary::AddEntry(d1, e1); // Добавление элемента словаря 
		Dictionary::AddEntry(d1, e2); // Добавление элемента словаря 
		Dictionary::AddEntry(d1, e3); // Добавление элемента словаря 
		Dictionary::AddEntry(d1, e4); // Добавление элемента словаря

		Dictionary::Print(d1);

		Dictionary::Entry ex2 = Dictionary::GetEntry(d1,4); // найти элемент словаря по индентификатору

		Dictionary::DelEntry(d1, 2); // Удалить элемент из словаря по индентификатору
		
		Dictionary::Entry newentry1 = { 6, "Гурин" };

		Dictionary::UpdEntry(d1, 3, newentry1);


		Dictionary::Print(d1);

		Dictionary::Instance d2 = Dictionary::Create("Студенты", 5);
		
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	system("pause");
}
