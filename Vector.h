#pragma once
class Vector
{
private:
	int x;
	int y;
public:
	Vector();
	Vector(int ax, int ay);
	Vector(int ax, int ay) : x(ax), y(ay);
	Vector(const Vector &obj);
	double Module();
	Vector& Plus(Vector n);
	Vector& Minus(Vector n);
	~Vector() {}
};