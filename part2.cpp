#include <cassert>
#include <cmath>
#include <iostream>
#include <sstream>
#include "SizeABall.hpp"

const double FLOATDIFF = 0.00000000001;

double calc_volume(const double& f);

int main()
{
  std::cout << "Test 1: checking constructors and get_radius()..." << std::endl;
  SizeABall sb1;
  SizeABall sb2(3);
  assert(fabs(sb1.get_radius() - 1) < FLOATDIFF);
  assert(fabs(sb2.get_radius() - 3) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 2: checking set_radius()..." << std::endl;
  sb1.set_radius(1.5);
  sb2.set_radius(-1.5);
  assert(fabs(sb1.get_radius() - 1.5) < FLOATDIFF);
  assert(fabs(sb2.get_radius() - 1) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 3: checking get_volume()..." << std::endl;
  assert(fabs(sb1.get_volume() - calc_volume(1.5)) < FLOATDIFF);
  assert(fabs(sb2.get_volume() - calc_volume(1)) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 4: checking get_class()..." << std::endl;
  assert(sb1.get_class() == "SizeABall");
  assert(sb2.get_class() == "SizeABall");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 5: checking get_data()..." << std::endl;
  assert(sb1.get_data() == "");
  assert(sb2.get_data() == "");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 6: checking operator<<()..." << std::endl;
  std::stringstream ss;
  ss << sb1;
  assert(ss.str() == "[Class: SizeABall][Radius: 1.50000][Volume: 7.06858]");
  ss.str(std::string());
  ss << sb2;
  assert(ss.str() == "[Class: SizeABall][Radius: 1.00000][Volume: 3.14159]");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nAll Tests Passed.\n" << std::endl;
  std::cout << sb1 << std::endl;
  std::cout << sb2 << std::endl;
}

double calc_volume(const double& f)
{
  return PI * f * f;
}
