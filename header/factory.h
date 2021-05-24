#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "add.h"
#include "base.h"
#include "div.h"
#include "mult.h"
#include "op.h"
#include "pow.h"
#include "rand.h"
#include "sub.h"
#include "pow.h"
#include <iostream>
#include <string>

class Factory
{
public:
   Factory() {}
   ~Factory() {}
   Base* parse(char** input, int length);
};

#endif // __FACTORY_H__
