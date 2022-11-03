#include <iostream>

class Bad_area {}; // a type specifically for reporting errors from area()

// calculate area of a rectangle;
// throw a Bad_area exception in case of a bad argument
int area(int length, int width)
{
    if (length <0 || width <= 0) throw Bad_area{};
    return length*width;

    // basically if our arguments are okay, return the area
    // otherwise we leave the area function via throw Bad_area and hope a catch is there
    // the code is saying make an object of the type Bad_area and then throw it
    // afterwards in the main function
}

int framed_area(int x, int y)
{
    return area(x-2,y-2);
}

int main()
try {
        int x = -1;
        int y = 2;
        int z = 4;
        // ....
        int area1 = area(x,y);
        int area2 = framed_area(1,z);
        int area3 = framed_area(y,z);
        double ratio = area1/area3;
}

catch (Bad_area) {
    std::cout << "Oops! bad arguments to area()\n";
}