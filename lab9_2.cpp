#include<iostream>
#include<string>
using namespace std;

//Write the function printO() here
string printO(int line,int length){
	if(line <= 0 or length <= 0 ){
		cout << "Invalid input";
	}else{
		for(int i = line; i != 0; i--){
			for(int i = length; i != 0; i--){
				cout << "O";
			}
		cout << endl;
	}
	}
	return "Invalid input";
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
