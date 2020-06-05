#pragma once
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "DiscountBase.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"

//TODO: +Логичнее сделать статическим
static class Lab5Program
{
public:
	static void ShowName(Person* person);
	static void Lab5Menu();
	static User* Login(User** users, int usersCount, 
		const string& enteredLogin, const string& enteredPassword);
	static void ShowCheckWithDiscount(DiscountBase* discount,
		Product** products, int productsCount);
};