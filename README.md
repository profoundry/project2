#Project 2!

Project 2 is a four-part project for practicing inheritance and polymorphism. Each of the four parts has its own cpp file that you will use to test your code. If the cpp files compile and run with all tests passed there is a good chance your code is correct. If the tests do not compile or pass you definitely need to make changes.

In this project you will be making classes to handle various balls. Using inheritance, each part will derive from a previous class.

* ALL data members will be protected
* ALL function members will be public
* ALL classes will inherit publicly
* ALL radii should be greater than 0, if 0 is given, set it to 1
* ALL accessors should be const
* Use the value PI when you need a value for pi
* The ostream operator << has been overloaded in Ball.h and should not be overloaded in any derived classes

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
    File: AdjustABall.hpp
    Class Name: AdjustABall
    Derived From: SizeABall
    This is a Ball that has an additional double, factor, as well as void functions grow() and shrink()
    The factor cannot be negative, if an attempt to set factor is negative, set it to 2.0

* Create the class definition, derive from the SizeABall class publicly
* Create a default constructor that calls the base default constructor and sets the factor to 2.0
* Create an overloaded constructor that takes a double, calls the default base constructor, and sets the factor to the parameter given
* Create an overloaded constructor that takes a double for the radius first, then a double for the factor
  * call the overloaded base constructor to set the radius
* Create get_factor() and set_factor(const double&) as accessor and mutator for factor
* Create grow() that will multiply the radius by the factor
* Create shrink() that will divide the radius by the factor
* Override the get_class() function to return the name of the class
* Override the get_data() function to return the factor with 5 decimal places like the following example: "[Factor: 2.34567]"

_part1.cpp, part2.cpps, and part3.cpp should ALL compile and pass all tests before moving on_

##Part 4

    File: MoveABall.hpp
    Class Name: MoveABall
    Derived From: SizABall
    This is a Ball that has x, y, and z coordinates (all doubles) that have accessors and mutators
      get_x(), get_y(), get_z(), set_x(const double&), set_y(const double&), set_z(const double&)

* Create the class definition, derive from the SizeABall class publicly
* Create a default constructor that calls the base default constructor and sets the x, y, and z members to 0
* Create an overloaded constructor that takes a double for x, y, and z
* Implement the accessors and mutators for x, y, and z
* Create a function called set_coords that takes 3 doubles and sets x, y, and z
* Override the get_class() function to return the name of the class
* Override the get_data function to return the x, y and z members with 2 decimal places
  * example: [X: 1.23][Y: 2.34][Z: 3.45]
