#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,interest,amount;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

		cout << fixed << setprecision(2); 

	while(loan != 0){

		cout << setw(13) << left << year; 
		year++;
		cout << setw(13) << left << loan;
		double dokbea = (interest/100)* loan;
		cout << setw(13) << left << dokbea;
		double total = loan + dokbea;
		cout << setw(13) << left << total;

		if(total-amount > 0){	
			cout << setw(13) << left << amount;
			loan = total - amount;
			cout << setw(13) << left << loan;
			cout << "\n";	
		}else{
			cout << setw(13) << left << total;
			loan = total - amount;
			cout << setw(13) << left << 0.00;
			cout << "\n";	
			break;
		}

	}
	return 0;
}