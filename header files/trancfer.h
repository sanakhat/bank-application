#include<iostream>
#include<fstream>
#include <ctime>

using namespace std;

class show{

	int ammount,pin,a,b,p;
	string name,c,d;

	public:
		void tran(string x){

			int y;
			string h="C:/Users/Admin/Desktop/project/manager/transection history/"+x+".txt";
			string z="C:/Users/Admin/Desktop/project/txtdatafiles/"+x+".txt";
  			time_t currTime;
  			tm* currTm;
			ifstream file;
			file.open(z.c_str());
			file>>name>>pin>>ammount>>a>>b>>c>>d>>p;
			cout<<"Amount Transfer: ";
			cin>>y;
			cout<<"Bank Name: ";
			cin>>z;
			ammount=ammount-y;
			cout<<"Transactiion Successfull: "<<z<<"Amount: "<<y<<"Balance: "<<ammount<<endl;
			cout<<"Transactiion ID:  47329477239749";
			file.close();
			char dateString5[100];
			cout<<strftime(dateString5, 50, "YY-MM-DD: %Y-%m-%d",currTm)<<"Transfer successfull:"<<endl<<"Amount: "<<y<<"Balance: "<<ammount<<endl;
			ofstream f;
			f.open(h.c_str(),ios::app);
			f<<"Withdraw Successfull:"<<endl<<"Amount: "<<y<<"Balance: "<<ammount;
			f.close();
		ans(x);
		}

		void ans(string bg){
			ofstream file;
			file.open(bg.c_str());
			file<<name<<endl<<pin<<endl<<ammount<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<p;
			file.close();
		}

		void withrow(string x){
			int y;
			string acc;
			string h="C:/Users/Admin/Desktop/project/manager/transection history/"+x+".txt";
			string z="C:/Users/Admin/Desktop/project/txtdatafiles/"+x+".txt";
			ifstream file;
			file.open(z.c_str());
			file>>name>>pin>>ammount>>a>>b>>c>>d>>p;
			cout<<"Amount Withdraw:";
			cin>>y;
			ammount=ammount-y;
			char dateString5[100];
  			time_t currTime;
  			tm* currTm;
			cout<<strftime(dateString5, 50, "YY-MM-DD: %Y-%m-%d", currTm)<<"Withdraw Successfull: "<<endl<<"Amount: "<<y<<"Balance: "<<ammount;
			file.close();
			ofstream f;
			f.open(h.c_str(),ios::app);
			f<<"Withdraw Successfull: "<<endl<<"Amount: "<<y<<"Balance: "<<ammount;
			f.close();
			ansd(z);
		}

		void ansd(string bg){
			ofstream file;
			file.open(bg.c_str());
			file<<name<<endl<<pin<<endl<<ammount<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<p;
			file.close();
		}
};
