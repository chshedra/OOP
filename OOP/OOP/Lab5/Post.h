#pragma once
#include <iostream>
using namespace std;

class Post
{
private:
	string _title;
	string _text;

public:
	void SetTitle(const string& title);
	void SetText(const string& text);

	string& GetTitle();
	string& GetText();

	Post(const string& title, const string& text);
};
