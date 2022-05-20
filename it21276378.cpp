#include <iostream>
#include <string>
using namespace std;

class Movie;
class Theater;
class UnregisteredCustomer;
class RegisteredCustomer;
class Payment;
class Ticket;
class User;

//User
class User
{
   protected:
       string name;
       string password;
       string email;

   public:
       void search();
       User();
       User(string name,string password,string email);  
};

void User::search(){};
User::User(){};
User::User(string uname,string upassword,string uemail)
{
  name=uname;
  password=upassword;
  email=uemail;
};

//Registered Customer
class RegisteredCutomer:public User {
protected:
	int CutoemrId;
	int contactNo;
	int dateOfBirth;
  Payment *payments[2];

public:
	RegisteredCutomer();
  RegisteredCutomer(string uname,string upassword,string uemail,int ccustomerId, int ccontactNo, int ddateOfBirth );
	void login();
	void bookTicket();
	void makePayment(Payment *P);
	void cancelTikcet();
};


RegisteredCutomer::RegisteredCutomer() {}
RegisteredCutomer::RegisteredCutomer(string uname,string upassword,string uemail,int ccustomerId, int ccontactNo, int ddateOfBirth):User(uname,upassword,uemail) {

	int CutoemrId = ccustomerId;
	int contactNo = ccontactNo;
	int dateOfBirth = ddateOfBirth;
}

void login() {}
void bookTicket() {}
void makePayment(Payment *P) {}
void cancelTikcet() {}

//Movie
class Movie {
private:
	int movieId;
	string movieName;
	string movieGenere;
	string movieDescription;
  UnregisteredCustomer *unregcustomer[2];
  RegisteredCustomer *regcustomer[2];
  
public:
	Movie();
  Movie(int mmovieId, string mmovieName, string mmovieGenere, string mmovieDescription);
	void addMovie();
	void editMovie();
	void removeMovie();
};

Movie::Movie() {}
Movie::Movie(int mmovieId, string mmovieName, string mmovieGenere, string mmovieDescription) {

	movieId = mmovieId;
	movieName = mmovieName;
	movieGenere = mmovieGenere;
	movieDescription = mmovieDescription;
}

void addMovie() {}
void editMovie() {}
void removeMovie() {}


int main() {
	return 0;
}