#include <iostream>
#include "MyArray.h"

using std::cout;
using std::endl;

int main() {

	MyArray<T> array1;
	array1.add_item(1); //0
	array1.add_item(5); //1
	array1.add_item(2); //2
	//array1 size should be 3
	cout << "Array Size: " << array1.get_size() << endl;
	//array1 capacity should be 10
	cout << "Array Capacity: " << array1.get_capacity() << endl;
	MyArray<T> array2(array1);
	cout << "array2 values:" << array2.get_value(0) << " " << array2.get_value(1);
	cout << " " << array2.get_value(2) << endl;
	array1.set_item(1, 7);
	cout << "array2 values:" << array2.get_value(0) << " " << array2.get_value(1);
	cout << " " << array2.get_value(2) << endl;
	MyArray<T>* aptr = new MyArray(int);
	aptr->add_item(8);
	aptr->add_item(3);
	cout << "aptr values:" << aptr->get_value(0) << " " << aptr->get_value(1) << endl;
	array2 = *aptr;
	cout << "array2 values:" << array2.get_value(0) << " " << array2.get_value(1) << endl;
	delete aptr;
	array2.add_item(9);
	cout << "array2 values:" << array2.get_value(0) << " " << array2.get_value(1);
	cout << " " << array2.get_value(2) << endl;
	return 0;
}