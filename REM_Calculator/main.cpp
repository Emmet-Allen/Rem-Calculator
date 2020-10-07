#include <iostream>
#include <string>


void RemCalc() {
	float px;

	std::cout << "Please Enter The Number of Pixels You are Converting: ";

	std::cin >> px; 

	if (px <= 0) {
		std::cout << "Please Enter a Valid Number of Pixels" << '\n';
	}
	else if (px > 0) {
		float rem = px / 16;
			std::cout << "The REM equivalant to the number of pixels is: " << rem << std::endl;
	}
}


int main() {
	RemCalc();

	system("pause");
	return 0;

}