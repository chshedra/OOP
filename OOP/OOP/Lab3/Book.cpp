#include "Book.h"

void DemoBook()
{
	const int size = 1;
	Book books[size];
	for (int i = 0; i < size; i++)
	{
		ReadBookFromConsole(books[i]);
	}
	for (int i = 0; i < size; i++)
	{
		WriteBookToConsole(books[i]);
	}

	cout << "������� ������ ��� ������ �����: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, size, author);
	if (index == -1)
	{
		cout << "����� �� �������" << endl;
	}
	else
	{
		WriteBookToConsole(books[index]);
	}
}

void ReadBookFromConsole(Book& book)
{
	cout << "������� �������� �����: ";
	cin.ignore(); //����������� /n 
	//������������ getline ��� ����������� ������������� � ��������
	getline(cin, book.Title);
	cout << "������� ��� �������: ";
	cin >> book.PublicationYear;
	cout << "������� ���������� �������: ";
	cin >> book.Page;
	cout << "������� ���������� �������: ";
	cin >> book.AuthorNumber;
	while (book.AuthorNumber > 10 || book.AuthorNumber < 1)
	{
		cout << "���������� ������� ������ ���� ������ 10!"
			<< " ���������� ��� ���: ";
		cin >> book.AuthorNumber;
	}

	book.Authors = new string[book.AuthorNumber];
	cin.ignore(); 
	for (int i = 0; i < book.AuthorNumber; i++)
	{
		cout << "������� ������ �" << i + 1 << ":";
		getline(cin, book.Authors[i]);
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorNumber; i++)
	{
		cout << book.Authors[i];
		// ����� ���������� ������ ������ "."
		if (i + 1 != book.AuthorNumber)
		{
			cout << ", ";
		}
		else
		{
			cout << ". ";
		}
	}
	cout << book.Title << ". ";
	cout << book.PublicationYear << ". -";
	cout << book.Page << "c." << endl;
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorNumber; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}