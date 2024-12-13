#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double l, i, a;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> i;
	cout << "Enter amount you can pay per year: ";
	cin >> a;

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

	int end = 1;
	double  pre = l, interest, total, payment, newbalance;
	do{
		if(end != 1){pre = newbalance;};
		interest =pre *(i/100);
		total = pre + interest;
		
		if(total>=a) payment = a;
		else payment = total;
		newbalance = total - payment;
		
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << end; 
	cout << setw(13) << left << pre;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newbalance;
	cout << "\n"; 
	end++;
	

	}while (newbalance > 0);
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	// cout << fixed << setprecision(2); 
	// cout << setw(13) << left << 1; 
	// cout << setw(13) << left << 1000.0;
	// cout << setw(13) << left << 50.0;
	// cout << setw(13) << left << 1050.0;
	// cout << setw(13) << left << 100.0;
	// cout << setw(13) << left << 950.0;
	// cout << "\n";	
	
	return 0;
}

