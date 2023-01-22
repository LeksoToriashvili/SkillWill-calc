#include <iostream>

using namespace std;

int getInt(char c){
	switch (c){
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	}
	return 0;
}

bool isNumberValid(string s){
	bool b;
	return b;
}

int romanToArabic(string s){
	int number=0, i;

	for (i=0; i<s.length(); i++){
		if (getInt(s[i])<getInt(s[i+1])) number=number-getInt(s[i]);
	else
		number=number+getInt(s[i]);
	}

	return number;
}

string arabicToRoman(int i){
	string s;
	return s;
}

bool isOperatorValid(string s){
	bool b;
	return b;
}

int main()
{
	string rnumber;
	cin >> rnumber;
	cout << romanToArabic(rnumber) << endl;
	return 0;
}
