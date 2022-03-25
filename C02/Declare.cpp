//: C02:Declare.cpp
// Declaration & definition examples
extern int i;       //Declaration without definition
extern float f(float);      // Function declaration
float b;        // Declaration & definiton
float f(float a) {  // Definition
    return a + 1.0; 
}

int i;      // Definiton
int h(int x)
{ // Declaration & definiton
    return x + 1;
}

int main() {
    b = 1.0;
    i = 2;
    f(b);
    h(i);
}