#include "../source/bad_array_length.h"

bad_array_length::bad_array_length(const char* msg) { this->msg = msg; }

bad_array_length::bad_array_length() : std::exception(msg) {}

const char* bad_array_length::what() const { return msg; }