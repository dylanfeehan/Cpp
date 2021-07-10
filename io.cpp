#include <iostream>



int main(){
	printf("IO: \n");

	int myNum;

	std::cout << "Enter a number: ";
	
	std::cin >> myNum;

	std::cout << "Mine is bigger: " << myNum + 1 << "\n";

	std::cout <<"Enter the degrees in farenheit: ";
	int far;
	std::cin >> far;
	double cel = (far - 32) * (5.0/9.0);
	std::cout <<"Far -> Celsius: " << cel << "\n";
	/*
	used for error messages: 	std::cerr << "No errors here.\n";
	*/

	return 0;
}
