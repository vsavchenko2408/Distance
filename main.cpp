#include <iostream>
#include "Distance.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
Distance d1(4,5), d2(3,7);
Distance d3 = d1*d2;
d3.show_distance();
d3.show_meter();

return 0;
}
