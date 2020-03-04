#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	fstream file;
	string input, fileName;
	fileName = "file.txt"	;
	file.open(fileName.c_str());
	map<int, int> moore;
	vector<int> a0, a1;
	int c=0;
	while(file){

		getline(file, input);
		//cout<<input;
		// cout<<input<<endl;
		moore.insert(make_pair(int(input[1]-48), int(input[input.length()-1]-48)));
		a0.push_back(input[4]-48);
		a1.push_back(input[7]-48);
		c++;
		// if(c == ) break;
		// c++;

	}

	// for(auto i : moore) cout<<i.first<<" "<<i.second<<endl;
	// for(auto i : a1) cout<<i<<" ";	

	/* ############## Printing mealey machine ############ */

	c=0;
	cout<<"Corresponding Mealey Machine - "<<endl;
	cout<<"Present State"<<setw(10)<<"a=0"<<setw(10)<<"output"<<setw(10)<<"a=1"<<setw(10)<<"output"<<endl;
	while(c != moore.size()){

		cout<<setw(8)<<"q"<<c<<setw(12)<<'q'<<a0[c]<<setw(10)<<moore[a0[c]]<<setw(10)<<"q"<<a1[c]<<setw(10)<<moore[a1[c]]<<endl;
		c++;
		// if(c == moore.size()) break;
		// c++;

	}





	return 0;
}