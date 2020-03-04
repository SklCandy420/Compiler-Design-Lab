#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void printTable(){

	cout<<" CS \t"<<" Summation = 0\t"<<"Summation = 1\n";
	cout<<"\n";
	cout<<"    \t"<<"L(Q, 0)  "<<" D(Q, 0) \t"<<"L(Q, 1)  "<<"D(Q, 1)"<<endl;
	cout<<" q1 \t"<<" q3 \t"<<"    0  \t"<<"\t q2 \t "<<"  0 "<<endl;
	cout<<" q2 \t"<<" q1 \t"<<"    1  \t"<<"\t q4 \t "<<"  0 "<<endl;
	cout<<" q3 \t"<<" q2 \t"<<"    1  \t"<<"\t q1 \t "<<"  1 "<<endl;
	cout<<" q4 \t"<<" q4 \t"<<"    1  \t"<<"\t q3 \t "<<"  0 "<<endl;

}

int main() {

	printTable();
	cout<<endl<<endl<<endl;

	fstream file;
	string input, fileName;
	fileName = "file.txt";
	file.open(fileName.c_str());

	int hashZero[5] = {-1, 1, 1, 0, 1 }, hashOne[5] = {-1, 1, 0, 0, 0};
	int currentState = 1;

	int hashCSZero[5] = {-1, 3, 1, 2, 4}, hashCSOne[5] = {-1, 2, 4, 1, 3};

	// For hashing
	
	string output = "";


	while(file >> input){
		//cout<<input<<endl;
	}
	//cout<<input<<" + ";
	bool flag = true;
	int counter = input.length();
	int i=0;
	while(counter--){

		int temp = input[i] - 48;
		switch(temp){

			case 0:
				output += to_string(hashZero[hashCSZero[currentState]]);
				//output.append(to_string(hashZero[hashCSZero[currentState]]));
				
				currentState = hashCSZero[currentState];
				break;
			case 1:
				output += to_string(hashOne[hashCSOne[currentState]]);
				
				currentState = hashCSOne[currentState];
				break;
			default: 
				cout<<"Input contains cahracters other than 0 and 1\n NOT ACCEPTED\n";
				flag = false;
				break;

		}
		i++;


	}

	if(flag){
		cout<<"ACCEPTED - "<<output<<endl;
		cout<<"Final State - "<<currentState<<endl;
	}
	return 0;
}