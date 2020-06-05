#pragma once
#include <iostream>
using namespace std;

class Post
{
private:
	string _title;
	string _text;

public:
	//TODO: Константные ссылки?
	void SetTitle(string title);
	void SetText(string text);

	string GetTitle();
	string GetText();

	Post(string title, string text);
};
