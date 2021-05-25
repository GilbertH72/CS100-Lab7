#include <iostream>
#include "../header/base.h"
#include "../header/op.h"
#include "../header/mult.h"
#include "../header/div.h"
#include "../header/add.h"
#include "../header/sub.h"
#include "../header/pow.h"
#include "../header/factory.h"
#include "factory.cpp"

int main(int argc, char** argv)
{
    Factory* f = new Factory();
    Base* result=f->parse(argv,argc);

    std::cout << result->stringify() << " = " << result->evaluate() << std::endl;

    delete f;
    delete result;

    return 0;
}
