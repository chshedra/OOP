#include "Lab5Program.h"

void Lab5Program::Lab5Menu()
{
	while (true)
	{
		cout << "�������� ����� ����:" << endl
			<< "1.ShowName" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
			{
				Person person("�����", "����", "������������");
				ShowName(&person);

				Student student("�������", "�����", 
					"��������", 23461205, 2014);
				ShowName(&student);

				Teacher teacher("���������", "�����",
					"��������", "������� �������������");
				ShowName(&teacher);
			}
			default:
			{
				cout << "�������� ������ ����� ����" << endl;
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