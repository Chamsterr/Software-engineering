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
		Dictionary::Instance d1 = Dictionary::Create("�������������", 5); // C������� �������
		Dictionary::Entry e1 = { 1, "�������" }, e2 = { 2, "�������" }, e3 = { 3, "C�����" }, e4 = { 4, "���������" };


		Dictionary::AddEntry(d1, e1); // ���������� �������� ������� 
		Dictionary::AddEntry(d1, e2); // ���������� �������� ������� 
		Dictionary::AddEntry(d1, e3); // ���������� �������� ������� 
		Dictionary::AddEntry(d1, e4); // ���������� �������� �������

		Dictionary::Print(d1);

		Dictionary::Entry ex2 = Dictionary::GetEntry(d1,4); // ����� ������� ������� �� ���������������

		Dictionary::DelEntry(d1, 2); // ������� ������� �� ������� �� ���������������
		
		Dictionary::Entry newentry1 = { 6, "�����" };

		Dictionary::UpdEntry(d1, 3, newentry1);


		Dictionary::Print(d1);

		Dictionary::Instance d2 = Dictionary::Create("��������", 5);
		
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	system("pause");
}
