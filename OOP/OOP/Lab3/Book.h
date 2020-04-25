#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Book
{
	string Title;
	int PublicationYear;
	int Page;
	string* Authors;
	int AuthorNumber;
};

void DemoBook();

void ReadBookFromConsole(Book& book);

void WriteBookToConsole(Book& book);

int FindBookByAuthor(Book* books, int booksCount, string author);