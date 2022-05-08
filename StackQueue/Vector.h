#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;
const int DEF_CAPACITY = 100;
class Vector
{
protected:
	int* data;
	int size;		//size in use
	int capacity;	//available capacity
public:
	//constructors
	Vector(int capacity = DEF_CAPACITY);
	Vector(const Vector&);
	~Vector();
	//operations
	Vector& operator = (const Vector&);
	// view  and modify
	int& operator [](int index);
	int	getSize() const;
	int  getCapacity() const;
	void insert(int value);
	void  clear();
	int  delLast();
};
#endif