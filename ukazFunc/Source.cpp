#include "Starter.hpp"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	void F00()
	{
		std::cout << "F00" << "\n";
	}

	void F01(int one)
	{
		std::cout << one << "F01" << "\n";
	}

	std::string DataFromDB()
	{
		return "data DB";
	}

	std::string DataFromServer()
	{
		return "data web";
	}


	void ShowTrueInfo(std::string(*dataPtr)())
	{
		std::cout << dataPtr();
	}
	
	void (*ptr)();
	ptr = F00;

	ptr();

	void (*ptr1)(int one);
	ptr1 = F01;

	ptr1(1);


	ShowTrueInfo(DataFromDB);

	
	*/

	char deist = '+';
	float num1 = 0.0f;
	float num2 = 0.0f;
	//DataIn(num1, num2, deist);
	DataIn(&num1, &num2, deist);
	Checker(deist,num1,num2);

	return 0;
}