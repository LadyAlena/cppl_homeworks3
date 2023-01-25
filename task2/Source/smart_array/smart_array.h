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