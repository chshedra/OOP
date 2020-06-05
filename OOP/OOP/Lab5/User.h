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
	//TODO: +Константные ссылки?
	void SetLogin(const string& login);
	void SetPassword(const string& password);

	int GetId();
	string GetLogin();
	string GetPassword();

	User(int id, const string& login, const string& password);
	bool IsCorrectPassword(const string& password);
};