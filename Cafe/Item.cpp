#include "Item.h"

void Item::Purchase(float& total)
{
	total += price;
}

Coffee::Coffee()
{
	name = "Coffee";
	price = 2.20;
}

Pancakes::Pancakes()
{
	name = "Pancakes";
	price = 5.45;
}

Waffles::Waffles()
{
	name = "Waffles";
	price = 6.05;
}

Brownie::Brownie()
{
	name = "Brownie";
	price = 4.30;
}

Bacon::Bacon()
{
	name = "Bacon";
	price = 3.23;
}

Sausage::Sausage()
{
	name = "Sausage";
	price = 3.60;
}

Parfait::Parfait()
{
	name = "Parfait";
	price = 5.20;
}

Muffin::Muffin()
{
	name = "Muffin";
	price = 2.75;
}