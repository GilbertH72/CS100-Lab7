#ifndef __ADD_H__
#define __ADD_H__

#include "base.h"
#include "op.h"
#include <iostream>

class Add : public Base {
public:
   Add(Base* op_1, Base* op_2) : Base() {
      this->op_1 = op_1;
      this->op_2 = op_2;
   }
   virtual double evaluate() {
      return (op_1->evaluate() + op_2->evaluate());
   }
   virtual std::string stringify() {
      std::ostringstream oss;
      oss << op_1->stringify() << " + " << op_2->stringify();
      std::string oss_value = oss.str();
      return oss_value;
   }
private:
   Base* op_1;
   Base* op_2;
};
#endif //__ADD_H__
