#include <iostream>
#include<string>

using namespace std ;

//User class
class User
{
   protected:
       string name;
       string password;
       string email;

   public:
       User();
       User(string name,string password,string email);
       void search();
};

User::User(){};
User::User(string uname,string upassword,string uemail){
  name=uname;
  password=upassword;
  email=uemail;
};
void User::search(){};

//Ticket class
class Ticket{
private:
		int ticketId;
		float price;
		string issuedDate;
		string showDate;
		string showTime;
		int seatNo;
		RegisteredCustomer *RegC;   //class relationship

public:
	Ticket();
	Ticket(int tid, float pri, string iDate, string sDate, string sTime, int sNo);
	void displayTicketDeatils();
	void addPayment(Payment *p);
};

Ticket::Ticket() {  //constructor
};

Ticket::Ticket(int tid, float pri, string iDate, string sDate, string sTime, int sNo) {
	ticketId = tid;
	price = pri;
	issuedDate = iDate;
	showDate = sDate;
	showTime = sTime;
	seatNo = sNo;
};

void Ticket::displayTicketDeatils() {
	cout << "Ticket ID - " << ticketId << endl;
	cout << "Price - " << price << endl;
	cout << "issued Date - " << issuedDate << endl;
	cout << "showDate - " << showDate << endl;
	cout << "Show Time - " << showTime << endl;
	cout << "seatNo  " << seatNo << endl;
}

void addPayment(Payment *p){};

int main (){
  
 return 0; 
}