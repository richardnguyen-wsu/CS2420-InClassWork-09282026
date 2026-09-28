//By: Richard Nguyen
//09-28-2026: Converting the MyArray class to a template class.
//This initial attempt isn't working. We were given only about 10 mins to code it.

#ifndef MY_ARRAY_H
#define MY_ARRAY_H

template <class T>
class MyArray {

public:
	MyArray(); //Default Constructor
	MyArray(const MyArray& other); //Copy-Constructor
	~MyArray(); //Destructor
	MyArray& operator=(const MyArray& other); //Assignment Operator

	//Helper functions
	void copy_array(const MyArray& other);
	void delete_array();



	void add_item(T value);
	void set_item(int pos, T value);
	int get_size();
	int get_capacity();
	int get_value(int pos);

private:
	int* arr = nullptr;
	int size = 0;
	int capacity = 0;
};


#endif // !MY_ARRAY_H



template <class T>
MyArray<T>::MyArray() {
	capacity = 10;
	size = 0;
	arr = new int[capacity];

} //Default Constructor

template <class T>
MyArray<T>::MyArray(const MyArray& other) {

	copy_array(other);


} //Copy-Constructor

template <class T>
MyArray<T>::~MyArray() {
	delete_array();
} //Destructor

template <class T>
MyArray<T>& MyArray<T>::operator=(const MyArray& other) {
	//Check for self-assignment
	if (this != &other) {
		//Cleanup existing memory
		delete_array();
		copy_array(other);
	}
	return *this;
} //Assignment Operator

template <class T>
void MyArray<T>::copy_array(const MyArray& other) {
	size = other.size;
	capacity = other.capacity;
	this->arr = new int[other.capacity];
	for (int i = 0; i < size; i++) {
		this->arr[i] = other.arr[i];
	}
}

template <class T>
void MyArray<T>::delete_array() {
	if (arr != nullptr) {
		delete[] arr;
	}
	arr = nullptr;
	size = 0;
	capacity = 0;
}

template <class T>
void MyArray<T>::add_item(T T) {
	arr[size++] = value;
}

template <class T>
void MyArray<T>::set_item(int pos, T value) {
	arr[pos] = value;
}

template <class T>
int MyArray<T>::get_size() {
	return size;
}

template <class T>
int MyArray<T>::get_capacity() {
	return capacity;
}

template <class T>
int MyArray<T>::get_value(int pos) {
	return arr[pos];
}