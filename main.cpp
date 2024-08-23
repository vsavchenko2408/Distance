#include <iostream>
#include "Distance.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
Distance d1(4,5),d2(3,6);
Distance d3 = d1*d2;
d1.show_distance();
d2.show_distance();
d3.show_distance();
return 0;
}
