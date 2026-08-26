#ifndef TYPE_PRINTERS_HPP
# define TYPE_PRINTERS_HPP

# include <iostream>
# include <iomanip>
# include <exception>
# include <cstdlib>
# include <limits>
# include <cmath>

# define MIN_INT std::numeric_limits<int>::min() //-2147483648
# define MAX_INT std::numeric_limits<int>::max() //2147483647
# define MIN_FLOAT std::numeric_limits<float>::min() //-3.40282e+38
# define MAX_FLOAT std::numeric_limits<float>::max() //3.40282e+38
# define MIN_DOUBLE std::numeric_limits<double>::min() //-1.79769e+308
# define MAX_DOUBLE std::numeric_limits<double>::max() //1.79769e+308

enum    e_inpttp
{
    SPECIAL = 0,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    DOUBLE = 4,
    INVALID = -1
};


e_inpttp	getType(const std::string& s, size_t& l);
void	printSpecial(const std::string& s);
void	printChar(const std::string& s, size_t& l);
void	printInt(const std::string& s);
void	printFloat(const std::string& s);
void	printDouble(const std::string& s);

#endif
