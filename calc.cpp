
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int roman_to_int(string roman){
	map<char,int> rmap;
	rmap['I'] =   1;
	rmap['V'] =   5;
	rmap['X'] =  10;
	rmap['L'] =  50;
	rmap['C'] = 100;
	int number=0,i=0;
	
	
	if(roman.length()<=1){
		return rmap[roman.at(0)];
	}
	else{
		while(i<roman.size()){
			if(rmap[roman[i]]<rmap[roman[i+1]]){
				number+=rmap[roman[i+1]]-rmap[roman[i]];
				i+=2;
			}
			else{
				number+=rmap[roman[i]];
				i++;
			}
		}
		return number;
	}
}
string integer_to_Roman(int n) {
        string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        string result = "";

        for (int i = 0; i < 13; ++i)
        {
            while(n - values[i] >= 0)
            {
                result += str_romans[i];
                n -= values[i];
            }
        }

        return result;
    }
	int main()
{
 double result = 0;
 string a;
 string b;
 string Operator;
 double number = 0;
 double secondnumber = 0;
    cout <<"please enter number :"<<endl;
    cin>>a;
   number = roman_to_int(a);
   while(number>100){
       cout<< "invalid number enter new number :" <<endl;
       cin >>a;
       number = roman_to_int(a);
   }
while(Operator != "exit"){
    cout<<"please enter operator : "<<endl;
    cin>>Operator;
    if(Operator == "exit"){
        break;
    }
    cout<<"please enter number : "<<endl;
    cin >>b;
    secondnumber = roman_to_int(b);
    while(secondnumber>100){
        cout<<"invalid number please enter new number:"<<endl;
        cin >>b;
        secondnumber= roman_to_int(b);
    }
   if(Operator == "+"){
    result = result +  number + secondnumber;
    number = 0;
   }
   else if(Operator == "-"){
       result = result + number - secondnumber;
       number = 0;
   }
   else if (Operator == "*"){
       result = (result + number) * secondnumber;
       number = 0;
   }
   else if (Operator == "/"){
       result = (result + number) / secondnumber;
       number = 0;
   }
   else{
       cout <<"enter correct operator"<<endl;
   }
}
cout<<integer_to_Roman(result)<<endl;
 
    return 0;
}
