#include <iostream>
#include <string>
using namespace std;

void RemCalc() {
	float px;
	float rem; 
	char stop = 'N';
    
    do{
        
        cout << "Please Enter The Number of Pixels You are Converting: " << endl;
    
	    cin >> px; 

	    if (px <= 0 ) {
		    cout << "Please Enter a Valid Number of Pixels"  << endl;
	    }
	    else if (px > 0) {
		    rem = px / 16;
			    cout << "The REM equivalant to the number of pixels is: " << rem << endl;
	    }
	
	    cout << "Would you like to convert more pixels: Y or N?" << endl;
	    cin >> stop;  
	
    }while(stop == 'Y');

}

int main() {
	RemCalc();
	
	cout << "Thanks for using remCalc" << endl;

	return 0;

}
