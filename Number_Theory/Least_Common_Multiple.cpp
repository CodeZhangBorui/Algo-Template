#include "../Number_Theory/Greatest_Common_Divisor.cpp"

int lcm(int x, int y) {
    return x / gcd(x, y) * y;
}
