#include <iostream>

using namespace std;

bool isNumberValid(string s){
	bool b;
	return b;
}

int romanToArabic(string s){
	int i;
	return i;
}

string arabicToRoman(int i){
        string rNumber[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int number[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};

        string s = "";
        for (int j = 0; j < 9; j++) {
            
            while(i - number[j] >= 0) {
                s += rNumber[j];
                i -= number[j];
                }
            }    
           
	   return s;
}

bool isOperatorValid(string s){
	bool b;
	return b;
}

int main()
{
    cout << arabicToRoman(21);
	return 0;
}
