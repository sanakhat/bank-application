#include<iostream>
#include<fstream>

using namespace std;

void manager(){
	system("CLS");
	float ammount;
	int card,pin,acc;
	string type,name,fname,type_acc,next_o_kin,date;
	long long int num,CNIC,ph_no;
	int x,c;
	int y=9999;
	string h="C:/Users/Admin/Desktop/project/manager/customer data/";
	c=0;
	cout<<"Pass:";
	cin>>x;
	c=5;
	system("CLS");
	if(x==y){
		while(c!=1){

		system("CLS");	
		cout<<"1) Exit"<<endl<<"2) Customer Details"<<endl<<"3) Transaction History";
			cin>>c;
			system("CLS");

			switch(c){


				case 1:{
					
					break;
				}

				case 2:{
						system("CLS");
					cout<<"Account Number: ";
					string j;
					cin>>j;
					h=h+j+".txt";
					ifstream fe;
					fe.open(h.c_str());
					fe>>date>>name>>card>>CNIC>>type_acc>>next_o_kin>>ph_no;
					cout<<"Account Opening Date: "<<date<<endl<<"Customer Name: "<<name<<endl;

					if(card==1){
						cout<<"Card in Use"<<endl;
					}

					else if(card==0){
						cout<<"Card not Issued"<<endl;
					}

					else {
						cout<<"Scammer Delete Account"<<endl;
					}
					cout<<"NIC Number: "<<CNIC<<endl<<"Account type: "<<type_acc<<endl<<"Next of Kin: "<<next_o_kin<<endl<<"Phone Number: "<<ph_no;
					
					fe.close();
						getch();

					break;
				}

				case 3:{
						system("CLS");
					cout<<"Account Number: ";
					string j,line;
					cin>>j;
					h="C:/Users/Admin/Desktop/project/manager/transection history/"+j+".txt";
					ifstream fe;
					fe.open(h.c_str());
					while(fe){
						getline(fe,line);
						cout<<line<<endl;
					}
					fe.close();
						getch();

					break;
				}

				default:
						system("CLS");
					cout<<"Your Input is not Valid";
				}
			}
		}

		else{
				system("CLS");
			cout<<"invalid input";
		}
	}
