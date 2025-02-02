#include "Distance.h"

void Distance::show_distance()//display Distance
{
std::cout << feet << " feets" << std::endl;
std::cout << inches << " inches" << std::endl;
}

void Distance::show_meter()
{

   float meter = (feet *12 + inches) * 0.0254;
   std::cout << "In meter: " << meter << " m." << std::endl;
}


Distance Distance::operator+(const Distance &obj) const
{
int tempfeets = feet + obj.feet;
float tempinches = inches + obj.inches;
if(inches>=12)
{
tempinches -=12;
tempfeets++;
}
return Distance(tempfeets , tempinches);
}

Distance Distance::operator-(const Distance &obj) const
{
    int tempfeets =0;
    float tempinches = 0.0;
    if(feet-obj.feet >= 0 && inches - obj.inches >= 0)// 4f 5i - 3f 2i = 1f 3i
    {
tempfeets = feet - obj.feet;
tempinches = inches - obj.inches;
return Distance(tempfeets, tempinches);
    }
    else if(feet-obj.feet <= 0 && inches - obj.inches > 0)// 4f 5i - 4f 3i = 0f 2i
    {
        tempinches = inches - obj.inches;
        return Distance(tempfeets, tempinches);
    }
    else if(feet-obj.feet <= 0 && inches - obj.inches <= 0)// 4f 5i - 4f 5i = 0f 0i 
    {
    return Distance(0,0);
    }
    else if(feet-obj.feet > 0 && inches - obj.inches < 0)// 4f 5i - 3f 6i = 0f 11i
    {
        tempfeets = feet - obj.feet - 1;  
        tempinches = inches + 12 - obj.inches;

        return Distance(tempfeets, tempinches);
    }
    else
    return Distance(0,0);
}

Distance Distance::operator*(const Distance &obj) const
{
int tempfeets = 0;
float tempinches = 0;

tempfeets = feet * obj.feet;
tempinches = inches * obj.inches;
    if (tempinches >= 12) {
        tempfeets += static_cast<int>(tempinches) / 12; 
        tempinches = static_cast<int>(tempinches) % 12 + (tempinches - static_cast<int>(tempinches));
    }
return Distance(tempfeets, tempinches);
}

Distance Distance::operator/(const Distance &obj) const
{
    if (obj.feet == 0 && obj.inches == 0) 
    {
        std::cerr << "Divide by zero!" << std::endl;
        return Distance(0, 0);
    }

    if (obj.feet == 0) 
    {
        std::cerr << "Divide by zero in feet!" << std::endl;
        return Distance(0, 0);
    }

    int tempfeets = feet / obj.feet;
    float tempinches = inches / obj.inches;


    if (tempinches >= 12) 
    {
        tempfeets += static_cast<int>(tempinches) / 12;
        tempinches = static_cast<int>(tempinches) % 12 + (tempinches - static_cast<int>(tempinches));
    }

    return Distance(tempfeets, tempinches);
}

