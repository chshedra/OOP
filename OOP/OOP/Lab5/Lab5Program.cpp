#include "Lab5Program.h"

void Lab5Program::Lab5Menu()
{
	while (true)
	{
		cout << "Выберите пункт меню:" << endl
			<< "1.ShowName" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
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