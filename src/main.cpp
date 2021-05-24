#include <iostream>

#include "../header/base.h"
#include "../header/op.h"
#include "../header/mult.h"
#include "../header/add.h"
#include "../header/sub.h"
#include "../header/pow.h"
#include "../header/factory.h"

int main(int argc, char** argv) {
   int i = 1;
   while (i < argc) {
      std::cout << argv[i];
      i++;
   }
   std::cout << std::endl;
   return 0;
}
