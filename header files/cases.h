#include<iostream>
#include<C:\Users\Admin\Desktop\project\header files\newaccount.h>
#include<C:\Users\Admin\Desktop\project\header files\manager.h>
#include<C:\Users\Admin\Desktop\project\header files\login.h>
using namespace std;

void bankee(){

	int choice=1;
	while(choice!=3){
	system("CLS");
	cout<<"1) Login"<<endl<<"2) New Account"<<endl<<"3) Exit";
	cin>>choice;
	switch(choice){

		case 1:{

			//aggigation
			system("CLS");
			login l1;
			l1.y();
			break;
		}
		
		case 2:{

			system("CLS");
			//aggigation
			newacc n1;
			n1.newac();
			break;
		}
		
		case 3:{
			
			break;
		}
		default:
		system("CLS");
		cout<<"Your Input is not Valid";
	}
	}
	}
	
void casee(){
	
	int choice=1;
	while(choice!=3){
	cout<<"1) Manager Login"<<endl<<"2) Customer Login"<<endl<<"3) Exit";
	cin>>choice;
	
	switch(choice){
	
		case 1:{
			system("CLS");
			manager();
			break;
		}
	
		case 2:{
				system("CLS");
			bankee();
			break;
		}
	
		case 3:{
			
			break;
		}
	
		default:
		system("CLS");
		cout<<"Your Input is not Valid";
		
	}
}
}
