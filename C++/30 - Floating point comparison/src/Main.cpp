#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  if (abs(a - b) < 1e-3) {
    return true;
  } else {
    return false;
  }
}