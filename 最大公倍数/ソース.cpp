#include <iostream>
#include <cstdint>
#include <numeric>

template<class T>
T GreatestCommonMultiple(T A, T B) {

	T R = 1;
	T V = 0;

	while ((V=std::gcd(A, B)) != 1) {
		A /= V;
		B /= V;
		R *= V;
	}

	return R;
}

int main() {
	std::uintmax_t A = 2*2*3*3*5*5*7;
	std::uintmax_t B = 2*3*3*5*5*7;

	auto R = GreatestCommonMultiple(A, B);

	std::cout << "A:" << A << ",B:" << B << std::endl;
	std::cout << "A:" << A / R << ",B:" << B / R << ",R:" << R << std::endl;
	return 0;
}