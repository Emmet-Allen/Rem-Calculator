//Created By Emmet Allen 

#include <iostream>
#include <string>


void RemCalc() {
	float px;
	float rem; 
	char stop = 'N';
    
    do{
        
        std::cout << "Please Enter The Number of Pixels You are Converting: " << std::endl;
    
	    std::cin >> px; 

	    if (px <= 0 ) {
		    std::cout << "Please Enter a Valid Number of Pixels"  << std::endl;
	    }
	    else if (px > 0) {
		    rem = px / 16;
			    std::cout << "The REM equivalant to the number of pixels is: " << rem << std::endl;
	    }
	
	    std::cout << "Would you like to convert more pixels: Y or N?" << std::endl;
	    std::cin >> stop;  
	
    }while(stop == 'Y');

}

int main() {
	RemCalc();
	
	std::cout << "Thanks for using remCalc" << std::endl

	return 0;

}
