#include <iostream>
#include <string>

using namespace std;

class Movie;
class User; 
class Payment;

//User
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

//UnregisteredCustomer
class UnregisteredCustomer : public User
{
	protected:
		Movie *Movies[2];
	public :
		UnregisteredCustomer();
		UnregisteredCustomer(string uname,string upassword,string uemail);
		void viewDetails();
	
};

UnregisteredCustomer::UnregisteredCustomer() {};

UnregisteredCustomer::UnregisteredCustomer(string uname,string upassword,string uemail):User(uname,upassword,uemail){};

void UnregisteredCustomer:: viewDetails(){};

//UnregisteredTeaterManager
class UnregisteredTeaterManager : public User
{
	protected:
		Payment *pay;
	public :
		UnregisteredTeaterManager();
		UnregisteredTeaterManager(string uname,string upassword,string uemail);
		void PaySubscripstion();
	
};

UnregisteredTeaterManager::UnregisteredTeaterManager() {};

UnregisteredTeaterManager::UnregisteredTeaterManager(string uname,string upassword,string uemail):User(uname,upassword,uemail){};

void UnregisteredTeaterManager:: PaySubscripstion(){};


int main()
{
	return 0;
};