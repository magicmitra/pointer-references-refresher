#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val;
int& valRef = val;

void printVals()
{
	// display 1st assignment
	std::cout << "Values:" << std::endl;
	std::cout << "val: " << val << "\nval2: " << val2 << "\nvalPtr: " << *valPtr << "\nvalRef: " << valRef << std::endl;
	std::cout << "Addresses:" << std::endl;
	std::cout << "val: " << &val << "\nval2: " << &val2 << "\nvalPtr: " << valPtr << "\nvalRef: " << &valRef << std::endl;
	std::cout << std::endl;
}

int main()
{
	printVals();

	// reassign pointer and reference (2nd assignment)
	valPtr = &val2;
	valRef = val2;

	printVals();

	return 0;
}