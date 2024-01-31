#include<iostream>
#include<C:\Users\Admin\Desktop\project\header files\edit.h>
#include<stdlib.h>
#include<C:\Users\Admin\Desktop\project\header files\trancfer.h>
#include<C:\Users\Admin\Desktop\project\header files\depposit.h>
//#include<C:\Users\Admin\Desktop\project\header files\loan.h>
#include<fstream>

using namespace std;

class login :public bank{
	public:

		void y(){
			string x,j;
			int t;
			fname="C:/Users/Admin/Desktop/project/txtdatafiles/";
			cout<<"Account Number: ";
			cin>>x;
			fname=fname+x+".txt";
			string line;
			fstream file;
			file.open(fname.c_str());														
			file>>name>>pin>>ammount>>card>>CNIC>>type>>next_o_kin>>ph_no;
			cout<<"Pin Code: ";
			cin>>t;
			file.close();
			if(t==pin){
				cout<<"Welcome to your Bank "<<name<<endl;
				int choice=0;

				while(choice!=6){
						cout<<"1) Withdraw"<<endl<<"2) Deposit"<<endl<<"3) Transfer"<<endl<<"4) Edit"<<endl<<"6) Exit";
						cin>>choice;

					switch(choice){

						case 1:{
							
							//aggigation
								system("CLS");
							show d2;
							d2.withrow(x);
								getch();
								system("CLS");
							break;
						}

						case 2:{
								//aggigation
								system("CLS");
							depposit d1;
							d1.input();
								getch();
								system("CLS");
							break;
						}

						case 3:{
								//aggigation
								system("CLS");
							show s1;
							s1.tran(fname);
								getch();
								system("CLS");
							break;
						}

						case 4:{
							//aggigation

								system("CLS");
							edit e1;
							e1.editt(x);
								getch();
								system("CLS");
							break;
						}
						
						
						
					}
				}
			}

			else{
					system("CLS");
				cout<<"Your Input is invalid"<<endl;
			}
		}
		
};
