#include <cassert>
#include <cmath>
#include <iostream>
#include <sstream>
#include "Ball.hpp"

const double FLOATDIFF = 0.00000000001;

double calc_volume(const double& f);

int main()
{
  std::cout << "Test 1: checking constructors and get_radius()..." << std::endl;
  Ball b1;
  Ball b2(3);
  assert(fabs(b1.get_radius() - 1) < FLOATDIFF);
  assert(fabs(b2.get_radius() - 3) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 2: checking get_volume()..." << std::endl;
  assert(fabs(b1.get_volume() - calc_volume(1)) < FLOATDIFF);
  assert(fabs(b2.get_volume() - calc_volume(3)) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 3: checking get_class()..." << std::endl;
  assert(b1.get_class() == "Ball");
  assert(b2.get_class() == "Ball");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 4: checking get_data()..." << std::endl;
  assert(b1.get_data() == "");
  assert(b2.get_data() == "");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 5: checking operator<<()..." << std::endl;
  std::stringstream ss;
  ss << b1;
  assert(ss.str() == "[Class: Ball][Radius: 1.00000][Volume: 3.14159]");
  ss.str(std::string());
  ss << b2;
  assert(ss.str() == "[Class: Ball][Radius: 3.00000][Volume: 28.27431]");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nAll Tests Passed.\n" << std::endl;
  std::cout << b1 << std::endl;
  std::cout << b2 << std::endl;
}

double calc_volume(const double& f)
{
  return PI * f * f;
}
