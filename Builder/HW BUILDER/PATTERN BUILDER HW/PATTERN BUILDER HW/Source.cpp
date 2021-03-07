#include <iostream>
#include <list>
using namespace std;

class Part abstract
{
public:
	bool isDone() const
	{
		return done;
	}

	void setPrice(const size_t& price)
	{
		this->price = price;
	}

	size_t getPrice() const
	{
		return price;
	}

	string getType() const
	{
		return type;
	}

	virtual void printInfo() const = 0;
protected:
	size_t price;
	string type = "No type";
	bool done = false;
};

class Window : public Part
{
public:
	Window(const size_t& price = 0)
	{
		setPrice(price);
		type = typeid(Window).name();
	}

	virtual void printInfo() const override
	{
		cout << "Price : " << getPrice() << endl;
		cout << "Done : " << boolalpha << isDone() << endl;
		cout << "Type : " << getType() << endl << endl;
	}
};

class Door : public Part
{
public:
	Door(const size_t& price = 0)
	{
		setPrice(price);
		type = typeid(Door).name();
	}

	virtual void printInfo() const override
	{
		cout << "Price : " << getPrice() << endl;
		cout << "Done : " << boolalpha << isDone() << endl;
		cout << "Type : " << getType() << endl << endl;
	}
};

class Roof : public Part
{
public:
	Roof(const size_t& price = 0)
	{
		setPrice(price);
		type = typeid(Roof).name();
	}

	virtual void printInfo() const override
	{
		cout << "Price : " << getPrice() << endl;
		cout << "Done : " << boolalpha << isDone() << endl;
		cout << "Type : " << getType() << endl << endl;
	}
};

class Floor : public Part
{
public:
	Floor(const size_t& price = 0)
	{
		setPrice(price);
		type = typeid(Floor).name();
	}

	virtual void printInfo() const override
	{
		cout << "Price : " << getPrice() << endl;
		cout << "Done : " << boolalpha << isDone() << endl;
		cout << "Type : " << getType() << endl << endl;
	}
};

class Walls : public Part
{
public:
	Walls(const size_t& price = 0)
	{
		setPrice(price);
		type = typeid(Walls).name();
	}

	virtual void printInfo() const override
	{
		cout << "Price : " << getPrice() << endl;
		cout << "Done : " << boolalpha << isDone() << endl;
		cout << "Type : " << getType() << endl << endl;
	}
};

class House
{
public:
	void addPart(Part* part)
	{
		parts.push_back(part);
	}

	void check() const;
	void print() const;
	void countAllPrice();
	void showAllPrice() const
	{
		cout << "All price : " << allPrice << endl;
	}
private:
	list<Part*> parts;
	size_t allPrice;
};

void House::check() const
{
	for (const auto& elem : parts)
	{
		if (elem->isDone() == true)
		{
			cout << elem->getType() << " is already done." << endl;
		}
		else {
			cout << elem->getType() << " isn't already done." << endl;
		}
	}
}

void House::print() const
{
	for (const auto& elem : parts)
	{
		cout << "Type : " << elem->getType() << endl;
		elem->printInfo();
	}
}

void House::countAllPrice()
{
	allPrice = 0;
	for (auto& elem : parts)
	{
		allPrice += elem->getPrice();
	}
}

int main()
{


	return 0;
}
