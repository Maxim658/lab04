#pragma once
class Complex
{
private:
	int a;
	int b;
public:
	Complex();
	Complex(int im, int re) : a(im), b(re) {};
	Complex(int im, int re);
	Complex(const Complex &obj);
	double Module();
	void Arguments();
	~Complex();
};