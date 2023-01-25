#include <iostream>
#include <exception>

#include "../UserException/source/bad_array_length.h"
#include "../Source/smart_array/smart_array.h"

int main(int argc, char** argv) {

	try {

		smart_array arr(7);

		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);

		std::cout << arr.get_element(0) << std::endl;
		arr.print();

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