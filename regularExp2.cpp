#include <iostream>
#include <string>
using namespace std;


bool func(){

	string regExpr = "/^[a-z0-9*-]{3,16}$/";

	int rangeL, rangeR;
	for(int i=0; i<regExpr.length(); i++){
		while(regExpr[i] != '{'){
			i++;

		}
		rangeL = regExpr[i+1] - 48;
		rangeR = regExpr[i+3] - 48;
		rangeR = rangeR*10 + (regExpr[i+4]-48);
		break;
	}
	//rangeR = 16;
	cout<<"Enter pattern\t";
	string input;
	cin>>input;
	if(input.length() < rangeL || input.length() > rangeR) return false;

	int rangeChar[4];
	rangeChar[0] = regExpr[3] - 96;
	rangeChar[1] = regExpr[5] - 96;

	rangeL = rangeChar[0];
	rangeR = rangeChar[1];
	int rangeDigitL = regExpr[6] - 48;
	int rangeDigitR = regExpr[8] - 48;
	for(int i=0; i<input.length()-2; i++){

		if(input[i] == '*' || input[i] == '-') continue;
		if(input[i] - 96 >= 0){

			if(input[i] - 96 >= rangeL and input[i]-96 <= rangeR){

			}else
				return false;
		}else{
			if(input[i]-48 >= rangeDigitL and input[i]-48 <= rangeDigitR){

			}else
				return false;
		}
	}
	return true;
}


int main(int argc, char const *argv[])
{
	bool var = func();

	if(var){
		cout<<"Accepted";
	}
	else{
		cout<<"Not Accepted";
	}

	cout<<endl;
	return 0;
}