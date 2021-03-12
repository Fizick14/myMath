#include "myMath.h"

uint32_t gcd(int32_t x, int32_t y) 
{
  uint32_t result=1;
  if (x < 0) x*=(-1);
  if (y < 0) y*=(-1);
  if (x==0||y==0) return 0;
  
  if (x%y==0) 
  {
    if (x >= y)
      return y;
    else
      return y;
  }

  while (x % y != 0) 
  {
    result = x % y;
    x = y;
    y = result;
  }
  return result;
}
