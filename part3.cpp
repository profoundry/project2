#include <cassert>
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "AdjustABall.hpp"

const double FLOATDIFF = 0.00000000001;

double calc_volume(const double& f);

int main()
{
  std::cout << "Test 1: checking constructors, get_radius(), and get_factor()..." << std::endl;
  AdjustABall ab1;
  AdjustABall ab2(1.5);
  AdjustABall ab3(1.5, 2.5);
  assert(fabs(ab1.get_radius() - 1) < FLOATDIFF);
  assert(fabs(ab1.get_factor() - 2) < FLOATDIFF);
  assert(fabs(ab2.get_radius() - 1) < FLOATDIFF);
  assert(fabs(ab2.get_factor() - 1.5) < FLOATDIFF);
  assert(fabs(ab3.get_radius() - 1.5) < FLOATDIFF);
  assert(fabs(ab3.get_factor() - 2.5) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 2: checking grow()..." << std::endl;
  ab1.grow();
  assert(fabs(ab1.get_radius() - 2) < FLOATDIFF);
  ab2.grow();
  assert(fabs(ab2.get_radius() - 1.5) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 3: checking shrink()..." << std::endl;
  ab2.shrink();
  assert(fabs(ab2.get_radius() - 1) < FLOATDIFF);
  ab3.shrink();
  assert(fabs(ab3.get_radius() - 0.6) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 4: checking get_class()..." << std::endl;
  assert(ab1.get_class() == "AdjustABall");
  assert(ab2.get_class() == "AdjustABall");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 5: checking get_data()..." << std::endl;
  assert(ab1.get_data() == "[Factor: 2.00000]");
  assert(ab2.get_data() == "[Factor: 1.50000]");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 6: checking operator<<()..." << std::endl;
  std::stringstream ss;
  ss << ab1;
  assert(ss.str() == "[Class: AdjustABall][Radius: 2.00000][Volume: 12.56636][Factor: 2.00000]");
  ss.str(std::string());
  ss << ab2;
  assert(ss.str() == "[Class: AdjustABall][Radius: 1.00000][Volume: 3.14159][Factor: 1.50000]");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nAll Tests Passed.\n" << std::endl;
  std::cout << ab1 << std::endl;
  std::cout << ab2 << std::endl;
  std::cout << ab3 << std::endl;  
}

double calc_volume(const double& f)
{
  return PI * f * f;
}
