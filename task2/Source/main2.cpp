#include <iostream>
#include <exception>

#include "../Source/smart_array/smart_array.h"
#include "../UserException/source/bad_array_length.h"


int main(int argc, char** argv) {

	try {

		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);

		arr.print();

		smart_array new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);

		new_array.print();

		arr = new_array;

	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (bad_array_length& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (...) {
		std::cout << "Unknown error" << std::endl;
	}

	return 0;
}