// Copyright 2021 NNTU-CS

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

