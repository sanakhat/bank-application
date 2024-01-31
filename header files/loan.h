#include<iostream>
#include<fstream>
using namespace std;

class loan{
	int tenure;
	int amount;
	float interest=0.11;
	string type;

	public:

	void loann(){
		cout<<"Type Of Loan Required: "<<endl;
		cin>>type;
		cout<<"Enter Loan Amount: "<<endl;
		cin>>amount;
		cout<<"Select Loan Tenure (in months): "<<endl;
		cin>>tenure*30;
		cout<<"For "<<type<<" Loan: "<<"Interest Will Be: "<<(interest*tenure)+amount<<" at Interest rate of 11% per month"<<endl;
	}
};

class CarLoan:public loan{
	
};
