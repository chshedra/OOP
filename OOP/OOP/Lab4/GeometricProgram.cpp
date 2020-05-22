#include "GeometricProgram.h"

void GeometricProgram::DemoRectangleWithPoint()
{
	try
	{
		const int size = 5;
		Rectangle* rectangles = new Rectangle[size];

		for (int i = 0; i < size; i++)
		{
			rectangles[i].SetCenter(1.2 * i, 2.4 * i);
			rectangles[i].SetLength(2.5 * i);
			rectangles[i].SetWidth(3.4 * i);
		}

		for (int i = 0; i < size; i++)
		{
			cout << "X:" << rectangles[i].GetX() << "; "
				<< "Y:" << rectangles[i].GetY() << "; "
				<< "Length:" << rectangles[i].GetLength() << "; "
				<< "Width:" << rectangles[i].GetWidth() << endl;
		}

		double averageCenterX = 0;
		double averageCenterY = 0;
		for (int i = 0; i < size; i++)
		{
			averageCenterX += rectangles[i].GetX();
			averageCenterY += rectangles[i].GetY();
		}

		cout << "Xcenter = " << averageCenterX / size
			<< " ; Ycenter = " << averageCenterY / size << endl;
	}
	catch (DoubleValidator::NegativeValue)
	{
		cout << "Длина и ширина должны иметь полоительные значения" << endl;
	}
}



void GeometricProgram::DemoRing()
{
	try
	{
		Ring ring1(5, 4, 1, 1);
		cout << "Создано кольцо №" << ring1.GetAllRingsCount()
			<< " Площадь кольца: " << ring1.GetArea() << endl;
		Ring ring2(6, 5, 2, 2);
		cout << "Создано кольцо №" << ring2.GetAllRingsCount()
			<< " Площадь кольца: " << ring2.GetArea() << endl;
		Ring ring3(6, 5, 3, 3);
		cout << "Создано кольцо №" << ring3.GetAllRingsCount()
			<< " Площадь кольца: " << ring3.GetArea() << endl;

		cout << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount() << endl;
		Ring* ring = new Ring(10.0, 5.0, 25.0, 25.0);
		cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount() << endl;
		delete ring;
		cout << "Количество колец после вызова деструктора: " << Ring::GetAllRingsCount() << endl;

	}
	catch (DoubleValidator::NegativeValue)
	{
		cout << "Значение радиуса должно быть положительным" << endl;
	}
	catch (DoubleValidator::OutOfRange)
	{
		cout << "Внешний радиус не может быть меньше внутреннего" << endl;
	}
}


template <class T>
void ShowCollisionResult(T& shape1, T& shape2)
{
	CollisionManager* manageCollision = new CollisionManager();

	if (manageCollision->IsCollision(shape1, shape2) == true)
	{
		cout << "Столкновение есть" << endl;
	}
	else
	{
		cout << "Столкновения нет" << endl;
	}

	delete manageCollision;
}

void GeometricProgram::DemoCollision()
{
	Rectangle rectangle1(15, 20, 2, 4);
	Rectangle rectangle2(30, 50, 50, 100);
	Rectangle rectangle3(10, 20, 2, 4);
	Rectangle rectangle4(15, 15, 1, 2);

	ShowCollisionResult(rectangle1, rectangle2);
	ShowCollisionResult(rectangle3, rectangle4);

	Ring ring1(4, 1, 100, 150);
	Ring ring2(7, 5, 20, 16);
	Ring ring3(40, 20, 0, 0);
	Ring ring4(35, 15, 2, 4);

	ShowCollisionResult(ring1, ring2);
	ShowCollisionResult(ring3, ring4);
}

void GeometricProgram::GeometricProgramMenu()
{
	while (true)
	{
		cout << "1.DemoRing" << endl
			<< "2.DemoCollision" << endl
			<< "3.DemoRectangleWithPoint" << endl
			<< "4. Выход" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
			{
				DemoRing();
				break;
			}
			case 2:
			{
				DemoCollision();
				break;
			}
			case 3:
			{
				DemoRectangleWithPoint();
				break;
			}
			case 4:
			{
				return;
			}
			default:
			{
				cout << "Выберите правильный пункт меню!" << endl;
			}
		}
	}
}
