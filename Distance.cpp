#include "Distance.h"

void Distance::show_distance()//display Distance
{
std::cout << feet << " feets" << std::endl;
std::cout << inches << " inches" << std::endl;
}


Distance::Distance operator+(const Distance &obj)
{
this->feet += obj.feet;
this->inches += obj.inches;
if(inches>=12)
{
inches -=12;
feet++;
}
return *this;
}

Distance::Distance operator-(const Distance &obj)
{
this->feet -= obj.feet;
this->inches -= obj.inches;
return *this;
}
Distance::Distance operator*(const Distance &obj)
{
this->feet *= obj.feet;
this->inches *= obj.inches;
return *this;
}
Distance::Distance operator/(const Distance &obj)
{
    if(obj.feet==0 || obj.inches==0)
    {
    std::cerr << "Devide by zero!" << std::endl;
    return ;
    }
    else
    {
    this->feet /= obj.feet;
    this->inches /= obj.inches;
    return *this;
    }
}
