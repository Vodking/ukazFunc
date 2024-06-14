#ifndef STARTER_HPP
#define STARTER_HPP
#include <iostream>
#include<Windows.h>
#include<string>




void Checker(char op, float num1, float num2);
void MakeDecision(float(*ptrData)(float num1, float num2), float num1, float num2);
void DataIn(float* num1,float* num2, char deist);
float Mult(float num1, float num2);
float Add(float num1, float num2);
float Sub(float num1, float num2);
float Div(float num1, float num2);
float Perc(float num1, float num2);

#endif // !STARTER_HPP
