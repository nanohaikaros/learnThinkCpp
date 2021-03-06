//: C03:Mathops.cpp
// Mathematical operators
#include <iostream>
using namespace std;

// A macro to display a string and a value.
#define PRINT(STR, VAR) \
    cout << STR " = " << VAR << endl;

int main() {
    int i, j, k;
    float u, v, w;  // Applies to doubles, too
    cout << "enter another integer: ";
    cin >> j;
    cout << "enter another integer: ";
    cin >> k;
    PRINT("j", j);
    PRINT("k", k);
    i = j + k; PRINT("j + K", i);
    i = j - k; PRINT("j - K", i);
    i = j / k; PRINT("j / K", i);
    i = j * k; PRINT("j * K", i);
    i = j % k; PRINT("j % K", i);
    // The following only works with integers:
    j %= k; PRINT("j %= k", j);
    cout << "Enter a floating-point number: ";
    cin >> v;
    cout << "Enter another floating-point number: ";
    cin >> w;
    PRINT("v", v); PRINT("w", w);
    u = v + w; PRINT("v + w", u);
    u = v - w; PRINT("v - w", u);
    u = v * w; PRINT("v * w", u);
    u = v / w; PRINT("v / w", u);
    // THe following works for ints, chars,
    // and doubles too:
    PRINT("u", u); PRINT("v", v);
    u += v; PRINT("u += v", v);
    u -= v; PRINT("u -= v", v);
    u *= v; PRINT("u *= v", v);
    u /= v; PRINT("u /= v", v);
}