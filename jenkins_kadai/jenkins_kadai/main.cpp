#include <iostream>
#include "add_sub.h"
#include "mul_div.h"

int main() {
	std::cout << Add(5, 5) << std::endl;
	std::cout << Sub(10, 4) << std::endl;
	std::cout << Mul(6, 7) << std::endl;
	std::cout << Div(20, 4) << std::endl;
}
