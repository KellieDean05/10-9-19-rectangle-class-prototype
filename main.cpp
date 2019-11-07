// Kellie Henderson class objects for 50 extra points , dr_t, 10/09/19

#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

//class definitions
class Rectangle
{
private:
  double width;
  double length;
public:
    // function prototypes 
  void setWidth(double);
  void setLength(double);
  double getWidth() const;
  double getLength() const;
  double getArea() const;

};
void Rectangle::setWidth(double w)
{
  width = w;
}
void Rectangle::setLength(double l)
{
  length = l;
}

double Rectangle::getWidth() const
{
  return width;
}
double Rectangle::getLength() const
{
  return length;
}
double Rectangle::getArea() const
{
  return (length * width);
}
int main()
{
  Rectangle r;
  r.setWidth(5.2);
  r.setLength(7.8);

Rectangle box;
double rectWidth;
double rectLength;
string color = "\x1b[" + to_string(32) + ";"+to_string(99)+"m";
string reset = "\x1b[0m";
cout << "A rectangle with the width of: " << color << r.getWidth() << reset << ", and " << endl;
cout << "a length of: " << color << r.getLength() << reset << "," <<endl;
cout << "has an area of: " << color << r.getArea() << reset << "." << endl;

/*cout << "This program with calculate the area of a \n" ;
cout << "rectangle. What is the width?";
cin >> rectWidth;
cout << "What is the length of the rectangle?" << endl;
cin >> rectLength;
cout <<  << endl;
*/
    return 0;
}
