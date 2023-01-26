#include "smart_array.h"
#include "../UserException/source/bad_array_length.h"

#include <iostream>
#include <stdexcept>


smart_array::smart_array(const int& size_) {

	if (size_ < 0) throw bad_array_length();

	size = 0;
	capacity = size_ + reserve_node;

	array = new int[capacity]{};
}

smart_array::~smart_array() {
	delete[] array;
}

void smart_array::print() {
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << (i < size - 1 ? " " : "\n");
	}
}

void smart_array::add_element(const int& element) {

		size++;

		if (capacity >= size) {
			array[size - 1] = element;
		}
		else {
			capacity = size + reserve_node;

			int* array_temp = new int[capacity]{};

			for (int i = 0; i < size && capacity > size; ++i) {
				if (i < size - 1) { array_temp[i] = array[i]; }
				else { array_temp[i] = element; };
			}

			array = array_temp;

			array_temp = nullptr;
			delete[] array_temp;

		}
}

int& smart_array::get_element(int index) {

	if (index < 0 || index > size - 1) { 
		throw std::out_of_range("Attempt to access an element outside the container"); 
	}

	return  array[index];
}

int smart_array::get_size() { return size; }

int smart_array::get_capacity() { return capacity; }