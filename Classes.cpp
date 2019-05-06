#include "pch.h"
#include "libraries.h"
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"


Child::Child() { }
Child::Child(string n, string s, int a)
{
	name = n;
	surname = s;
	age = a;
}
Child::Child(string n, string s, int a) : name(n), surname(s), age(a)
{

}
Child::Child(const Child &obj)
{
	name = obj.name;
	surname = obj.surname;
	age = obj.age;
}
void Child::Input()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input surname: ";
	cin >> surname;
	cout << "Input age: ";
	cin >> age;
}
void Child::Print()
{
	cout << name << " " << surname << " " << age << endl;
}
Child::~Child() {}


Tiles::Tiles() { }
Tiles::Tiles(string br, int s_h, int s_w, int p)
{
	brand = br;
	size_h = s_h;
	size_w = s_w;
	price = p;
}
Tiles::Tiles(string br, int s_h, int s_w, int p) : brand(br), size_h(s_h), size_w(s_w), price(p)
{

}
Tiles::Tiles(const Tiles &obj)
{
	brand = obj.brand;
	size_h = obj.size_h;
	size_w = obj.size_w;
	price = obj.price;
}
void Tiles::getData()
{
	cout << "--Tile--\n";
	cout << "Brand: " << brand << endl;
	cout << "Size_h: " << size_h << endl;
	cout << "Size_w: " << size_w << endl;
	cout << "Price: " << price << endl;
}
Tiles::~Tiles() {}

Vector::Vector() { }
Vector::Vector(int ax, int ay)
{
	x = ax;
	y = ay;
}
Vector::Vector(int ax, int ay) : x(ax), y(ay) {}
Vector::Vector(const Vector &obj)
{
	x = obj.x;
	y = obj.y;
}
double Vector::Module()
{
	return sqrt(x * x + y * y);
}
Vector&::Vector::Plus(Vector n)
{
	Vector result;
	result.x = x + n.x;
	result.y + y + n.y;
	return result;
}
Vector&::Vector::Minus(Vector n)
{
	Vector result;
	result.x = x - n.x;
	result.y + y - n.y;
	return result;
}
Vector::~Vector() {}


Complex::Complex() { }
Complex::Complex(int im, int re) : a(im), b(re)
{

}
Complex::Complex(int im, int re)
{
	a = im;
	b = re;
}
Complex::Complex(const Complex &obj)
{
	a = obj.a;
	b = obj.b;
}

double Complex::Module()
{
	return sqrt(a * a + b * b);
}
void Complex::Arguments()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
Complex::~Complex() {}