#pragma once
#include "../Common/SymbolValidator.h"
#include "Post.h"

class User
{
protected:
	int _id;
	string _login;
	string _password;

	void SetId(int id);

public:
	//TODO: Константные ссылки?
	void SetLogin(string login);
	void SetPassword(string password);

	int GetId();
	string GetLogin();
	string GetPassword();

	User(int id, string login, string password);
	bool IsCorrectPassword(string password);
};