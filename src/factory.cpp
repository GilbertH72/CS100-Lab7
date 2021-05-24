#include "../header/factory.h"

Base* Factory::parse(char** input, int length)
{
   int i = 0;
   Base* l_Operation = nullptr;

   while (i < length) {

      if (l_Operation == nullptr) {
         int input_1 = std::stod(input[i++]);
         l_Operation = new Op(input_1);
      }
      if (input[i] == "+") {
         int input_2 = std::stod(input[++i]);
         l_Operation = new Add(l_Operation, new Op(input_2));
      }
      else if (input[i] == "-") {
         int input_2 = std::stod(input[++i]);
         l_Operation = new Sub(l_Operation, new Op(input_2));
      }
      else if (input[i] == "*") {
         int input_2 = std::stod(input[++i]);
         l_Operation = new Mult(l_Operation, new Op(input_2));
      }
      else if (input[i] == "/") {
         int input_2 = std::stod(input[++i]);
         l_Operation = new Div(l_Operation, new Op(input_2));
      }
      else if (input[i] == "**") {
         int input_2 = std::stod(input[++i]);
         l_Operation = new Pow(l_Operation, new Op(input_2));
      }
      else {
         std::cout << "ERROR" << std::endl;
         return nullptr;
      }
      i++;
   }
   return l_Operation;
}
