#include <iostream>

using namespace std;

int romantonumber (string s){
	int i;
	return i;
}

string numbertoroman (int i){
	string s;
	return s;
}

bool isoperator(string c){
	bool b;
	return b;
}

int main()
{
	string s;

	while(s!="exit")
	{
		int i, sum;
		string s;

		cin >> s;
		if (romantonumber(s)==-1){
			cout << "number is not valid" << endl;
			return 1;
		}
		else
			i=romantonumber(s);

		cin >> s;

		if (isoperator(s)==false){
			cout << "operator is not valid" << endl;
			return 1;
		}
	}
	return 0;
}