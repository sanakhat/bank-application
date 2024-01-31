#include<iostream>
#include<fstream>
using namespace std;

class edit{

	public:

		int card,CNIC,ammount,pin,num,ph_no;
		string type,name,type_acc,next_o_kin,q,r,t;
		int choice;

		void editt(string x){
			ifstream file;
			q="C:/Users/Admin/Desktop/project/txtdatafiles/"+x+".txt";
			r="C:/Users/Admin/Desktop/project/manager/customer data/"+x+".txt";
			file.open(q.c_str());
			file>>name>>pin>>ammount>>card>>CNIC>>type_acc>>next_o_kin>>ph_no;
			file.close();
			cout<<"1: Pin Code"<<endl;
			cout<<"2: Card Request: Cancel/Issue"<<endl;
			cout<<"3: Next of Kin"<<endl;
			cout<<"4: Phone Number"<<endl;
			cin>>choice;
			switch(choice){

				case 1:{
					int e;
					cout<<"Enter New Pin Code";
					cin>>pin;
					break;
				}

				case 2:{
					if(card==1){
						card=0;
					}
					else{
						card=1;
					}
					break;
				}

				case 3:{
					cout<<"Enter Next of Kin Name";
					cin>>next_o_kin;
					break;
				}

				case 4:{
					cout<<"Phone Number";
					cin>>ph_no;
					break;
				}
		}

			ofstream f;
			f.open(r.c_str());
			f<<name<<endl<<card<<endl<<CNIC<<endl<<type_acc<<endl<<next_o_kin<<endl<<ph_no;
			f.close();
			
		ansd(q);
	}
			void ansd(string bg){
			
			ofstream file;
			file.open(bg.c_str());
			file<<name<<endl<<pin<<endl<<ammount<<endl<<card<<endl<<CNIC<<endl<<type_acc<<endl<<next_o_kin<<endl<<ph_no;
			file.close();
			
		}
	
};
