#include<iostream>
#include<fstream>
using namespace std;

class depposit{
	string name_o_depp,acc;
	int ammountt;
	int card,CNIC,ammount,pin,num,ph_no;
	string type,name,type_acc,next_o_kin;

	public:

	void input(){

		string ac;
		cout<<"Name of Depositor: ";
		cin>>name_o_depp;
		cout<<"Account Number: ";
		acc="C:/Users/Admin/Desktop/project/txtdatafiles/";
		cin>>ac;
		acc=acc+ac+".txt";
		cout<<"Amount to Deposit: ";
		cin>>ammountt;
		ifstream file;
		file.open(acc.c_str());
		file>>name>>pin>>ammount>>card>>CNIC>>type_acc>>next_o_kin>>ph_no;
		ammount=ammount+ammountt;
		cout<<name_o_depp<<"  Amount Deposited  "<<ammountt;
		file.close();
		ansd(acc);
	}

			void ansd(string bg){

			ofstream file;
			file.open(bg.c_str());
			file<<pin<<endl<<ammount<<endl<<card<<endl<<CNIC<<endl<<type_acc<<endl<<next_o_kin<<endl<<ph_no;
		}
};
