#include "Product.h"
#include <iostream>
#include <cstring>
using namespace std;

Product::Product() : barcode(0), price(0.0) {
	strcpy_s(name, "");
	strcpy_s(category, "");
}

Product::Product(int barcode, const char* name, double price, const char* category)
	: barcode(barcode), price(price) {
	strcpy_s(this->name, name);
	strcpy_s(this->category, category);
}

void Product::print() const {
	cout << "Barcode: " << barcode << ", Name: " << name
		<< ", Price: " << price << ", Category: " << category << endl;
}
