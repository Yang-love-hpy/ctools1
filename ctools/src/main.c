#include <stdio.h>
#include "max.h"
#include "sum.h"
int main()
{
  int a=10, b=12, c, sum_;
  c = max(a, b);
  printf("%d\n", c);
  sum_ = sum(a, b);
  printf("%d+%d=%d\n", a, b, sum_);
  return 0;
}

