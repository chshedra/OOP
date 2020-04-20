#include <iostream>
using namespace std;


void Foo(double&);
void Function(double* h);


void Pointers()
{
	//1.1.4.1
	int a = 5;
	int b = 4;

	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;
	double c = 13.5;
	cout << "Address of c: " << &c << endl;
	bool d = true;
	cout << "Address of d: " << &d << endl;


	//1.1.4.2
	int arr[10] = { 1, 2, 7, -1, 5, 3,-1, 7, 1, 6 };
	cout << "Size of int type: " << sizeof(int) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Address of a[" << i << "]: " << &arr[i] << endl;
	}
	cout << endl;
	cout << "Size of double type: " << sizeof(double) << endl;
	double b1[10] = { 1.0, 2.0, 7.0,-1.0, 5.0, 3.5,-1.8, 7.2, 1.9, 6.1 };
	for (int i = 0; i < 10; i++)
	{
		cout << "Address of b[" << i << "]: " << &b1[i] << endl;
	}
	cout << endl;

	//1.1.4.3
	int x = 5;
	int& y = x;

	cout << "Address of a: " << &x << endl;
	cout << "Address of b: " << &y << endl;
	cout << endl;
	y = 7;
	cout << "Value of a: " << x << endl;


	//1.1.4.4(5)
	double k = 5.0;
	cout << "Adress of k in main: " << &k << endl;
	cout << "Value of k in main: " << k << endl;
	Foo(k);
	cout << "Value of k in main: " << k << endl;
	cout << endl;
	//1.1.4.6
	int g = 5;
	int* pointer = &g;

	cout << "Adress of g: " << &g << endl;
	cout << "Adress in pointer: " << pointer << endl;
	cout << "Adress of pointer: " << &pointer << endl;
	*pointer = 7;
	cout << "Value in g: " << g << endl;
	cout << "Value by pointer adress: " << *pointer << endl;


	//1.1.4.8
	double value = 5;
	double* pointr = &value;
	cout << "Adress of value in main: " << &value << endl;
	cout << "Adress in pointer in main: " << pointr << endl;
	cout << "Adress of pointer in main:" << &pointr << endl;
	cout << "Value of h in main:" << value << endl;
	Function(pointr);
	cout << "Value of h in main:" << value << endl;
}



void Foo(double& k)
{
	cout << "Adress of k in Foo(): " << &k << endl;
	cout << "Value of k on Foo(): " << k << endl;
	k = 15.0;
	cout << "Value of k on Foo(): " << k << endl;
}

void Function(double* h)
{
	cout << "Adress of pointer: " << &h << endl;
	cout << "Adress in pointer: " << h << endl;
	cout << "Value in pointer adress: " << *h << endl;
	*h = 15;
	cout << "New value in pointer adress: " << *h << endl;
}