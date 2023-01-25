#pragma once

class smart_array
{
public:
	smart_array(const int& size_);


	~smart_array();

	void print();

	void add_element(const int& element);

	int& get_element(int index);

	int get_size();
	int get_capacity();

private:
	int* array;
	int size;
	int capacity;
	int reserve_node = 2;

	unsigned int counter_added_elements;
	static int number_smart_arrays;

	bool is_zero_size();

};

/*

class smart_array {
public:
	smart_array(const int& size_) {

		if (size_ < 0) throw bad_array_length();

		this->size = size_;
		capacity = size + reserve_node;

		array = new int[capacity]{};

		counter_added_elements = 0;
		number_smart_arrays++;
	}
	~smart_array() {
		if (number_smart_arrays == 1) delete[] array;
	}

	void print() {
		for (int i = 0; i < size; ++i) {
			std::cout << array[i] << (i < size - 1 ? " " : "\n");
		}
	}

	void add_element(const int& element) {

		if (is_zero_size() && counter_added_elements < size) {
			array[counter_added_elements] = element;
		}
		else {
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

		counter_added_elements++;

	}

	int& get_element(int index) {

		if (index < 0 || index > size - 1) {
			throw std::out_of_range("Attempt to access an element outside the container");
		}

		return  array[index];
	}

	int get_size() { return size; }
	int get_capacity() { return capacity; }

private:
	int* array;
	int size;
	int capacity;
	int reserve_node = 2;

	unsigned int counter_added_elements;
	static int number_smart_arrays;

	bool is_zero_size() { return bool(size); }

};

int smart_array::number_smart_arrays = 0;


*/