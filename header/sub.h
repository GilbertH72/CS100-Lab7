#ifndef __SUB_H__
#define __SUB_H__

#include "base.h"
#include "op.h"
#include <iostream>

class Sub : public Base {
public:
   Sub(Base* op1, Base* op2) : Base() {
      this->op1 = op1;
      this->op2 = op2;
   }
   virtual double evaluate() {
      return (op1->evaluate() - op2->evaluate());
   }
   virtual std::string stringify() {
      std::ostringstream oss;
      oss << op1->stringify() << " - " << op2->stringify();
      std::string oss_value = oss.str();
      return oss_value;
   }
private:
   Base* op1;
   Base* op2;
};

#endif //__SUB_H__
