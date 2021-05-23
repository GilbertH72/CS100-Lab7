#ifndef __BASE_H__
#define __BASE_H__

#include <string>

class Base {
public:
   /* Constructors */
   Base() { }

   virtual ~Base() {}

   /* Pure Virtual Functions */
   virtual double evaluate() = 0;
   virtual std::string stringify() = 0;
};

#endif //__BASE_H__
