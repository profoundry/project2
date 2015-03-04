#include <cassert>
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "MoveABall.hpp"

const double FLOATDIFF = 0.00000000001;

double calc_area(const double& f);

int main()
{
  std::cout << "Test 1: checking constructors, get_x(), get_y(), and get_z()..." << std::endl;
  MoveABall mb1;
  MoveABall mb2(1, 2, 3);
  assert(fabs(mb1.get_x() - 0) < FLOATDIFF);
  assert(fabs(mb1.get_y() - 0) < FLOATDIFF);
  assert(fabs(mb1.get_z() - 0) < FLOATDIFF);
  assert(fabs(mb2.get_x() - 1) < FLOATDIFF);
  assert(fabs(mb2.get_y() - 2) < FLOATDIFF);
  assert(fabs(mb2.get_z() - 3) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 2: checking get_class()..." << std::endl;
  assert(mb1.get_class() == "MoveABall");
  assert(mb2.get_class() == "MoveABall");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 3: checking get_data()..." << std::endl;
  assert(mb1.get_data() == "[X: 0.00][Y: 0.00][Z: 0.00]");
  assert(mb2.get_data() == "[X: 1.00][Y: 2.00][Z: 3.00]");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nTest 4: checking set_x(), set_y(), and set_z()..." << std::endl;
  mb1.set_x(5.67890);
  mb1.set_y(6.78901);
  mb1.set_z(7.89012);
  assert(fabs(mb1.get_x() - 5.67890) < FLOATDIFF);
  assert(fabs(mb1.get_y() - 6.78901) < FLOATDIFF);
  assert(fabs(mb1.get_z() - 7.89012) < FLOATDIFF);
  mb2.set_x(5.43210);
  mb2.set_y(4.32109);
  mb2.set_z(3.21098);
  assert(fabs(mb2.get_x() - 5.43210) < FLOATDIFF);
  assert(fabs(mb2.get_y() - 4.32109) < FLOATDIFF);
  assert(fabs(mb2.get_z() - 3.21098) < FLOATDIFF);
  std::cout << "PASSED" << std::endl;


  std::cout << "\nTest 5: checking operator<<()..." << std::endl;
  std::stringstream ss;
  ss << mb1;
  assert(ss.str() == "[Class: MoveABall][Radius: 1.00000][Volume: 3.14159][X: 5.68][Y: 6.79][Z: 7.89]");
  ss.str(std::string());
  ss << mb2;
  assert(ss.str() == "[Class: MoveABall][Radius: 1.00000][Volume: 3.14159][X: 5.43][Y: 4.32][Z: 3.21]");
  std::cout << "PASSED" << std::endl;

  std::cout << "\nAll Tests Passed.\n" << std::endl;
  std::cout << mb1 << std::endl;
  std::cout << mb2 << std::endl;
}

double calc_area(const double& f)
{
  return PI * f * f;
}
