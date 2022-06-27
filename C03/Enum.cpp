//: C03:Enum.cpp
// Keeping track of shapes

enum ShapeType
{
    circle,
    square,
    rectangle
};  // Must end with a semicolon like a struct

int main() {
    ShapeType shape = circle;
    // Activities here...
    // Now do something based on what the spape is:
    switch (shape)
    {
    case circle: /* circle stuff */
        break;
    case square: /* circle stuff */
        break;
    case rectangle: /* circle stuff */
        break;
    }
}