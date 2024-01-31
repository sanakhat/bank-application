#include<iostream>
#include<ctime>
#include<cstdlib>
#include<sstream>
#include <iomanip>
#include<fstream>
#include<C:\Users\Admin\Desktop\project\header files\bank.h>

using namespace std;

class newacc{

	public:

		void newac(){
			bank b1;
			string ffname;
			srand(time(0));
			b1.acc=(rand() %9999999999999999 ) + 1;
			cout<<"New Account Number Generated: "<<b1.acc<<endl;
			cout<<"Enter Your Full Name (Use _ for space): ";
			cin>>b1.name;
			cout<<"Enter Your NIC number: ";
			cin>>b1.CNIC;
			cout<<"Set Passcode in Number: ";
			cin>>b1.pin;
			cout<<"Enter Account Opening Balance (Min. Rs. 1): "<<endl;
			cin>>b1.ammount;
			cout<<"Request an ATM Card?";
			cout<<"1)Yes"<<endl<<"0)No";
			cin>>b1.card;
			cout<<"Account Type: "<<endl<<"  Business"<<endl<<"  Corporate"<<endl<<"  Trust"<<endl<<"  Current"<<endl;
			cin>>b1.type_acc;
			cout<<"Next of Kin: ";
			cin>>b1.next_o_kin;
			cout<<"Phone Number: ";
			cin>>b1.ph_no;
			ofstream myfile;
			stringstream stream;
		    stream << b1.acc;
		    stream >> b1.fname;
		    ffname ="C:/Users/Admin/Desktop/project/txtdatafiles/"+b1.fname+".txt";
			myfile.open (ffname.c_str());
		  	myfile<<b1.name<<endl<<b1.pin<<endl<<b1.ammount<<endl<<b1.card<<endl<<b1.CNIC<<endl<<b1.type_acc<<endl<<b1.next_o_kin<<endl<<b1.ph_no;
			myfile.close();
			ffname="C:/Users/Admin/Desktop/project/manager/customer data/"+b1.fname+".txt";
			time_t currTime;
			  tm* currTm;
			  char dateString5[100];
			  time(&currTime);
 			 currTm = localtime(&currTime);
 			 strftime(dateString5, 50, "%Y-%m-%d", currTm);
			myfile.open (ffname.c_str());
		  	myfile<<dateString5<<endl<<b1.name<<endl<<b1.ammount<<endl<<b1.card<<endl<<b1.CNIC<<endl<<b1.type_acc<<endl<<b1.next_o_kin<<endl<<b1.ph_no;
			myfile.close();
				}
};
