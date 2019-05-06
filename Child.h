#pragma once
class Child
{
private:
	string name;
	string surname;
	int age;
public:
	Child();
	Child(string n, string s, int a);
	Child(string n, string s, int a) : name(n), surname(s), age(a) {};
	Child(const Child &obj);

	void Input();
	void Print();
	~Child();
};