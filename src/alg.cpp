// Copyright 2021 NNTU-CS

#include <iostream>
#include "alg.h"
int gcd(int a, int b) {
   a = abs(a);
	b = abs(b);
	while (b) {
		while (a >= b)
			a -= b;
		if (!a)
			return b;
		do {
			b -= a;
		} while (b >= a);
    }
    return a;
}
int main() { std::cout << gcd(10,15) << std::endl; return 0; }
main();
