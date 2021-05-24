#include <iostream>

#include "../header/base.h"
#include "../header/op.h"
#include "../header/mult.h"
#include "../header/add.h"
#include "../header/sub.h"
#include "../header/pow.h"
#include "../header/factory.h"

int main(int argv, char** argc) {
   int i = 1;
   while (i < argv) {
      std::cout << argc[i];
      i++;
   }
   std::cout << std::endl;
   return 0;
}
