#include <iostream>
#include <math.h>

//Q-2.30 Deitel How to Program C++
//Calculate BMI

int main() {
	float height, weight,BMI;  //declare weight and height variable
	
	std::cout << "Enter your height(m) and weight kg" << std::endl;
	std::cin >> height >> weight;
	
	BMI = weight / (pow(height, 2));
	std::cout << "Your BMI : " << BMI << std::endl;
	std::cout << "BMI TABLE \nUnderweight = < 18.5 \nNormal Weight = 18.5-24.9 \nOverweight = 25-29.9 \nObesity = 30 or greater " << std::endl;

}