// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
