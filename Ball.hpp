#ifndef BALL_HPP
#define BALL_HPP

#include <iostream>
#include <iomanip>

const double PI = 3.14159;

class Ball;

std::ostream& operator<< (std::ostream& strm, const Ball& b);

class Ball
{
protected:
  double radius; // the radius of the Ball
public:
  Ball(); // default constructor, set the radius to 1
  Ball(const double&); // set the radius to the parameter

  double get_radius() const; // radius accessor
  double get_volume() const; // return the volume of the Ball

  /*
    The following two functions are virtual and should be overridden in derived classes
    */

  virtual std::string get_class() const; // return the name of the class, "Ball"
  virtual std::string get_data() const; // return an empty string for the base class

  // this function has been implemented for you below
  friend std::ostream& operator << (std::ostream& strm, const Ball& b);
};

/*
  implement the Ball class code here
  */

std::ostream& operator << (std::ostream& strm, const Ball& b)
{
  strm << std::fixed << std::setprecision(5)
    << "[Class: " << b.get_class() << "]"
    << "[Radius: " << b.get_radius() << "]"
    << "[Volume: " << b.get_volume() << "]"
    << b.get_data();

  return strm;
}

#endif
