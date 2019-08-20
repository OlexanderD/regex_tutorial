// Example 3 - real number test 
// see www.solarianprogrammer.com "C++11 regex tutorial" for more informations
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string input;
	regex rr("((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?((e|E)((\\+|-)?)[[:digit:]]+)?");
	//As long as the input is correct ask for another number
	while(true)
	{
		cout<<"Give me a real number!"<<endl;
		cin>>input;
		//Exit when the user inputs q
		if(input=="q")
			break;
		else if(regex_match(input,rr))
			cout<<"float"<<endl;
		else
			cout<<"Invalid input"<<endl;
	}
}
