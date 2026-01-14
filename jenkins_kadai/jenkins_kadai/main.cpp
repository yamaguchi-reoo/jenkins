#include <iostream>
#include "add_sub.h"
#include "mul_div.h"

int main() {
	std::cout << Add(6, 5) << std::endl;
	std::cout << Sub(10, 5) << std::endl;
	std::cout << Mul(6, 7) << std::endl;
	std::cout << Div(24, 4) << std::endl;
}
