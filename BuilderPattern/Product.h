#pragma once

#include <string>
using namespace std;

class Product
{
public:
	Product() {};
	~Product() {};
	void setProductPartA(string productPartA) { this -> productPartA = productPartA; }
	void setProductPartB(string productPartB) { this -> productPartB = productPartB; }
	void setProductPartC(string productPartC) { this -> productPartC = productPartC; }
	void display() { cout << "The pruduct made of : \n" << productPartA << productPartB << productPartC << endl; }
private:
	string productPartA;
	string productPartB;
	string productPartC;
};
