#pragma once
class Tiles
{
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	Tiles();
	Tiles(string br, int s_h, int s_w, int p);
	Tiles(string br, int s_h, int s_w, int p) : brand(br), size_h(s_h), size_w(s_w), price(p)	{	}
	Tiles(const Tiles &obj);
	void getData();
	~Tiles();
};