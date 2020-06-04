#pragma once
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "DiscountBase.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"

class Lab5Program
{
public:
	void ShowName(Person* person);
	void Lab5Menu();
	User* Login(User** users, int usersCount, 
		string enteredLogin, string enteredPassword);
	void ShowCheckWithDiscount(DiscountBase* discount,
		Product** products, int productsCount);
};