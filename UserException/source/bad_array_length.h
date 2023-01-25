#pragma once
#include <exception>

#ifdef USEREXCEPTION_EXPORTS
#define USEREXCEPTION_API __declspec(dllexport)
#else 
#define USEREXCEPTION_API __declspec(dllimport)
#endif

class bad_array_length : public std::exception
{
public:
	USEREXCEPTION_API bad_array_length(const char* msg);
	USEREXCEPTION_API bad_array_length();
	USEREXCEPTION_API const char* what() const override;

private:
	const char* msg = "Bad array new length";
};

