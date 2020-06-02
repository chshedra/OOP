#include "Book.h"
#define _CRT_SECURE_NO_WARNINGS
#include "../Common/Common.h"



void ReadBookFromConsole(Book& book)
{
	cin.ignore(); //игнорируетя /n 
	cout << "Введите название книги: ";
	//используется getline для возможности вводить строку с пробелом
	getline(cin, book.Title);
	cout << "Введите год издания: ";
	book.PublicationYear = InputValidation();
	while (GetPresentYear() > book.PublicationYear)
	{
		cout << "Год издания не может быть больше текущего!"
			<< " Попробуйте ещё раз: ";
		book.PublicationYear = InputValidation();
	}
	cout << "Введите количество страниц: ";
	book.Page = InputValidation();
	cout << "Введите количество авторов: ";
	book.AuthorNumber = InputValidation();

	while (book.AuthorNumber > 10 || book.AuthorNumber < 1)
	{
		cout << "Количество авторов должно быть меньше 10!"
			<< " Попробуйте ещё раз: ";
		cin >> book.AuthorNumber;
	}

	book.Authors = new string[book.AuthorNumber];
	cin.ignore(); 
	for (int i = 0; i < book.AuthorNumber; i++)
	{
		cout << "Введите автора №" << i + 1 << ":";
		getline(cin, book.Authors[i]);
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorNumber; i++)
	{
		cout << book.Authors[i];
		// после последнего автора ставим "."
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

int FindBookByAuthor(Book* books, int booksCount, string &author)
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