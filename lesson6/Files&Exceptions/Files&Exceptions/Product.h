#pragma once
#include <string>
using namespace std;

class Product
{
private:
	int barcode;
	char name[50];
	double price;
	char category[50];

public:
	Product();
	Product(int barcode, const char* name, double price, const char* category);
	void print() const;
};
