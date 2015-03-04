#Project 2!

Project 2 is a four-part project for practicing inheritance and polymorphism. Each of the four parts has its own cpp file that you will use to test your code. If the cpp files compile and run with all tests passed there is a good chance your code is correct. If the tests do not compile or pass you definitely need to make changes.

In this project you will be making classes to handle various balls. Using inheritance, each part will derive from a previous class.

* ALL data members will be protected
* ALL function members will be public
* ALL classes will inherit publicly
* ALL radii should be greater than 0, if 0 is given, set it to 1
* ALL accessors should be const
* Use the value PI when you need a value for pi

##Part 1
Part 1 will focus on completing the implementation for the Ball class.

    File: Ball.hpp
    Class Name: Ball

###You Must:
Implement the functions given in the class declaration
```c++
Ball(); // default constructor, set the radius to 1
Ball(const double&); // set the radius to the parameter

double get_radius() const; // radius accessor
double get_volume() const; // return the volume of the Ball

/*
  The following two functions are virtual
  They should be implemented for this class
  They should be overridden in derived classes
  */

virtual std::string get_class() const; // return the name of the class, "Ball"
virtual std::string get_data() const; // return an empty string for the base class
```
_part1.cpp should compile and pass all tests before moving on_

##Part 2
    File: SizeABall.hpp
    Class Name: SizeABall
    Derived From: Ball
    This is a Ball that can have the radius changed after initialization

* Create the class definition, derive from the Ball class publicly
* Create a default constructor that calls the base class default constructor
* Create an overloaded constructor that takes a double, set the radius to this parameter
* Create a set_radius function that take a double, set the radius to the parameter
* Override the get_class function to return the name of the class

_part1.cpp and part2.cpp should BOTH compile and pass all tests before moving on_

##Part 3

##Part 4
