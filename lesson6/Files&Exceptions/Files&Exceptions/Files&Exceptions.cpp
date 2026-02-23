#include <iostream>
#include <fstream>
#include "Product.h"
using namespace std;

int main() {
    ofstream textFile("store.txt");
    textFile << "Welcome to our store\n";
    textFile << "We have great products\n";
    textFile << "Open daily 9-5\n";
    textFile.close();

    Product products[4] = {
        Product(101, "Milk", 5.5, "Dairy"),
        Product(102, "Bread", 8.0, "Bakery"),
        Product(103, "Apple", 3.5, "Fruits"),
        Product(104, "Cheese", 15.0, "Dairy")
    };

    ofstream binaryFile("products.dat", ios::binary | ios::app);
    binaryFile.write((char*)products, sizeof(products));
    binaryFile.close();

    ifstream readText("store.txt");
    string line;
    while (getline(readText, line)) {
        cout << line << endl;
    }
    readText.close();

    Product readProducts[4];
    ifstream readBinary("products.dat", ios::binary);
    readBinary.read((char*)readProducts, sizeof(readProducts));
    readBinary.close();

    for (int i = 0; i < 4; i++) {
        readProducts[i].print();
    }

    return 0;
}
