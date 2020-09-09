#ifndef LOG_H
#define LOG_H


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define log_info(x) std::cout << __FUNCTION__ << ": " << x << std::endl
#define log_error(x) std::cerr << __FUNCTION__ << ": " << x << std::endl

#endif // LOG_H
