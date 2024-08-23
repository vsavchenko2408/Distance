#ifndef DISTANCE_H
#define DISTANCE_H
#include <iostream>
class Distance
{
private:
unsigned int feet;
float inches;
public:
Distance(): feet(0), inches(0) {}
Distance(unsigned int _feet, float _inches): feet(_feet), inches(_inches) {}

void set_distance(unsigned int feet, float inches)//add Distance
{
this->feet = feet;
this->inches = inches;
}

void show_distance(); //display Distance

void show_meter(); // display metr system


Distance operator+(const Distance &obj) const;

Distance operator-(const Distance &obj) const;

Distance operator*(const Distance &obj) const;

Distance operator/(const Distance &obj) const;


};





#endif
