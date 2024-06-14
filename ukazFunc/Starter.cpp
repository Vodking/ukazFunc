#include "Starter.hpp"

void Checker(char op, float num1, float num2)
{
   if (op == '+')
   {
       MakeDecision(Add, num1, num2);
   }
   else if (op == '-')
   {
       MakeDecision(Sub, num1, num2);
   }
   else if (op == '*')
   {
       MakeDecision(Mult, num1, num2);
   }
   else if (op == '/')
   {
       MakeDecision(Div, num1, num2);
   }
   else if (op == '%')
   {
       MakeDecision(Perc, num1, num2);
   }
   else
   {
       std::cout << -1;
   }
}

void MakeDecision(float(*ptrData)(float num1, float num2), float num3, float num4)
{
    std::cout << ptrData(num3,num4);
}


void DataIn(float num1,float num2, char op)
{
    std::cout << "¬ведите первое число: ";
    std::cin >> num1;
    std::cout << "¬ведите второе число:";
    std::cin >> num2;
    std::cout << "¬ведите операцию + - * / %";
    std::cin >> op;
}

float Mult(float num1, float num2)
{
    return num1 * num2;
}

float Add(float num1,float num2)
{
    return num1 + num2;
}

float Sub(float num1, float num2)
{
    return num1 - num2;
}

float Div(float num1, float num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        
        std::cerr << "Dividing by 0";
        return 0;
    }
    
}

float Perc(float num1, float num2)
{
    
    return num1 * num2 / 100;
    
   
}
