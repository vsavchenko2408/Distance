#include <iostream>
#include "Distance.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
Distance d1(6,8),d2(4,6);
d1+d2;
d1.show_distance();
return 0;
}
