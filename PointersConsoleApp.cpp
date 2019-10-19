#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val2;
int& valRef = val2;

void printVals()
{
	std::cout << "Values:" << std::endl;
	std::cout << "val: " << val << "\nval2: " << val2 << "\nvalPtr: " << *valPtr << "\nvalRef: " << valRef << std::endl;
	std::cout << "Addresses:" << std::endl;
	std::cout << "val: " << &val << "\nval2: " << &val2 << "\nvalPtr: " << valPtr << "\nvalRef: " << &valRef << std::endl;
}

int main()
{
	printVals();
	return 0;
}