#include "Lab5Program.h"

void Lab5Program::Lab5Menu()
{
	while (true)
	{
		cout << endl;
		cout << "Выберите пункт меню:" << endl
			 << "1.ShowName" << endl
			 << "2.Users" << endl
			 << "3.ShowCheckWithDiscount" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
			{
				try
				{
					Person person("Шульц", "Петр", "Владимирович");
					ShowName(&person);

					Student student("Гринина", "Ольга",
						"Олеговна", 23461205, 2014);
					ShowName(&student);

					Teacher teacher("Гордиенко", "Роман",
						"Иванович", "Старший преподаватель");
					ShowName(&teacher);
				}
				catch (DoubleValidator::OutOfRange)
				{
					cout << "Выход за диапазон допустимых значений" << endl;
				}

				break;
			}
			case 2:
			{
				//до рефакторинга - 245 строк, после - 165 строк
				//количество строк уменьшилось на 32.6%
				try
				{
					User** users = new User * [8]
					{
						new User(100000, "morkovka1995", "1995morkovka"),
						new User(100001, "ilon_mask", "X æ A-12"),
						new User(100002, "megazver", "password"),
						new User(100003, "yogurt", "ksTPQzSu"),
						new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
						new PaidUser(200001, "system_exe", "UgfkDGmU"),
						new PaidUser(200002, "RazorQ", "TBgRnbCP"),
						new PaidUser(200003, "schdub", "CetyQVID"),
					};

					string login = "megazver";
					string password = "password";
					User* loginedUser = Login(users, 8, login, password);
					cout << "Signed in as: " << loginedUser->GetLogin() << endl;

					login = "system_exe";
					password = "UgfkDGmU";
					User* loginedPaidUser = Login(users, 8, login, password);
					cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;

					for (int i = 0; i < 8; i++)
					{
						delete users[i];
					}
				}
				catch (SymbolValidator::InCorrectSymbol)
				{
					cout << "Введен некорректный символ" << endl;
				}

				break;
			}
			case 3:
			{
				try
				{
					PercentDiscount percentDiscount(Smartphones, 30);
					CertificateDiscount certificateDiscount(Smartphones, 7000);

					const int productsCount = 4;
					Product** products = new Product * [productsCount]
					{
						new Product("Sumsung G5", 15000, Smartphones),
						new Product("HP Pavilion", 60000, Computers),
						new Product("Xiaomi Note5", 8000, Smartphones),
						new Product("LG microvawe", 3000, Appliances),
					};

					ShowCheckWithDiscount(&percentDiscount, products, productsCount);
					ShowCheckWithDiscount(&certificateDiscount, products, productsCount);

					for (int i = 0; i < productsCount; i++)
					{
						delete products[i];
					}
				}
				catch (DoubleValidator::OutOfRange)
				{
					cout << "Выход за диапазон допустимых значений" << endl;
				}
			}
			default:
			{
				cout << "Выберите верный пункт меню" << endl;
			}
		}
	}
}

void Lab5Program::ShowName(Person* person)
{
	cout << person->GetSurname() << " "
		<< person->GetName() << " "
		<< person->GetPatronymic() << endl;
}

User* Lab5Program::Login(User** users, int usersCount, const string& enteredLogin, 
	const string &enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}

void Lab5Program::ShowCheckWithDiscount(DiscountBase* discount,
	Product** products, int productsCount)
{
	double totalCost = 0;

	for (int i = 0; i < productsCount; i++)
	{

		cout << products[i]->GetName() << "   Old cost: "
			<< products[i]->GetPrice() << "   New cost: " 
			<< discount->Calculate(products[i]) << endl;
		 
		totalCost += discount->Calculate(products[i]);
	}
	cout << "Total cost: " << totalCost << endl;
}