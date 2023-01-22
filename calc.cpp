#include <iostream>

using namespace std;

int romanToArabic(string s);

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
	bool b=true;
	int i, max=1000;

	for (i=0; i<s.length(); i++){
		if (getInt(s[i])==0) return false;
		if ((s[i]=='V') || (s[i]=='L') || (s[i]=='D'))
			if (s[i]==s[i+1]) return false;
	}

	if (s.length()==1) return true;

	for (i=0; i<s.length()-1; i++){
		if (getInt(s[i])>max) return false;

		if (getInt(s[i])<getInt(s[i+1])){
			if (getInt(s[i+1])>max) return false;
			if ((getInt(s[i+1])/getInt(s[i]))!=5) 
				if ((getInt(s[i+1])/getInt(s[i]))!=10) return false;
			max=getInt(s[i]);
			i++;
		}
		else
		{
			if (getInt(s[i])>max) return false;
		}
	}

	return b;
}

int romanToArabic(string s){
	int number=0, i;

	for (i=0; i<s.length()-1; i++){
		if (getInt(s[i])<getInt(s[i+1])) number=number-getInt(s[i]);
	else
		number=number+getInt(s[i]);
	}
	number=number+getInt(s[s.length()-1]);
	return number;
}

string arabicToRoman(int number){
	string returnstring="";
	int i=6;
	string chars[] = {"I", "V", "X", "L", "C", "D", "M"};
	int num [] = {1, 5, 10, 50, 100, 500, 1000};

	if (number>3999) return "err";
	if (number==0) return "";

	while ((number/num[i])==0) i--;
	if (number==num[i]) return chars[i];


	if ((i%2)==1)
		if (number>=(num[i]*9)/5)
		{
			returnstring=returnstring+chars[i-1]+chars[i+1];
			number=number-(num[i]*9)/5;
		}
		else
		{
			returnstring=returnstring+chars[i];
			number=number-num[i];
		}

	if ((i%2)==0)
		if (number<4*num[i])
		{
			returnstring=returnstring+chars[i];
			number=number-num[i];
		}
		else
		{
			returnstring=returnstring+chars[i]+chars[i+1];
			number=number-num[i+1]+num[i];
		}
	cout << number << endl;
	returnstring=returnstring+arabicToRoman(number);

	return returnstring;
}

bool isOperatorValid(string s){
	bool b;
	return b;
}

int main()
{
	string rnumber;
	int number;

	cin >> number;
	rnumber = arabicToRoman(number);
	cout << rnumber << endl;
	return 0;
}
