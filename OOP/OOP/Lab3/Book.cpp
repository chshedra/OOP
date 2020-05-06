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

	cout << "Введите автора для поиска книги: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, size, author);
	if (index == -1)
	{
		cout << "Книга не найдена" << endl;
	}
	else
	{
		WriteBookToConsole(books[index]);
	}
}

void ReadBookFromConsole(Book& book)
{
	cin.ignore(); //игнорируетя /n 
	cout << "Введите название книги: ";
	//используется getline для возможности вводитьстроку с пробелом
	getline(cin, book.Title);
	cin.clear();
	cout << "Введите год издания: ";
	cin >> book.PublicationYear;
	cin.clear();
	cout << "Введите количество страниц: ";
	cin >> book.Page;
	cin.clear();
	cout << "Введите количество авторов: ";
	cin >> book.AuthorNumber;
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