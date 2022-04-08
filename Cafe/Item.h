#include <iostream>
#pragma once

class Item
{
	public:
	std::string name;
	float price;

	void Purchase(float& total);
};

class Coffee : public Item
{
	public:
	Coffee();
};

class Pancakes : public Item
{
public:
	Pancakes();
};

class Waffles : public Item
{
public:
	Waffles();
};

class Brownie : public Item
{
public:
	Brownie();
};

class Bacon : public Item
{
public:
	Bacon();
};

class Sausage : public Item
{
public:
	Sausage();
};

class Parfait : public Item
{
public:
	Parfait();
};

class Muffin : public Item
{
public:
	Muffin();
};