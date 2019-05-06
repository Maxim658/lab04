#include "pch.h"
#include "libraries.h"
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"






int main()
{
	Child c1, c2;

	cout << "Input 2 children" << endl;
	c1.Input();
	c2.Input();
	cout << endl;
	c1.Print();
	c2.Print();

	cout << endl;

	cout << "Tiles" << endl;
	Tiles t1, t2;
	t1.brand = "Brand 1";
	t1.size_h = 7;
	t1.size_w = 3;
	t1.price = 27;
	cout << endl;
	t2.brand = "Brand 2";
	t2.size_h = 5;
	t2.size_w = 4;
	t2.price = 32;
	t1.getData();
	t2.getData();

}
