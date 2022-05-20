#include <iostream>
#include <string>
using namespace std;

class User;
class Theater;
class RegisteredTheaterManager;
class Payment;
class RegisteredCustomer;
class UnregisteredTheaterManager;
class Offer;

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

//RegisteredTheaterManager
class RegisteredTheaterManager: public User
{ 
  protected:
       int ManID;
       int contactNo;
       Theater *theater;
  public:
       void updateTheaterDetails();
       RegisteredTheaterManager();
       RegisteredTheaterManager( string uname,string upassword,string uemail, int manID, int  manContactNo);      
};

//Payment
class Payment
{
  private: 
       int paymentID;
       string paymentDate;
       float amount;
       string paymentMethod;
       string paymentDetails;
       RegisteredCustomer *regcustomer;
       UnregisteredTheaterManager *UnregManager;
       Offer *offer;
              
  public:  
       void viewPaymentDetails();
       void viewSubscriptionDetails();
       void status();
       void addOffers(Offer *Off);
       Payment();
       Payment(int paymentID, string pDate, float pAmount, string pMethod,string pDetails);
};


//User class implementation

void User::search(){};
User::User(){};
User::User(string uname,string upassword,string uemail)
{
  name=uname;
  password=upassword;
  email=uemail;
};

//RegisteredTheaterManager class implementation

void RegisteredTheaterManager::updateTheaterDetails() {};
RegisteredTheaterManager::RegisteredTheaterManager() {};
RegisteredTheaterManager::RegisteredTheaterManager(string uname,string upassword,string uemail, int manID, int manContactNo): User(uname,upassword,uemail)
{
  ManID=manID;
  contactNo=manContactNo;
};

//Payment class implementation

void viewPaymentDetails(){};
void viewSubscriptionDetails(){};
void Payment:: addOffers(Offer *Off)
{
  offer = Off; 
} 

Payment::Payment(){};
Payment::Payment(int pID, string pDate, float pAmount, string pMethod,string pDetails)
{
  paymentID=pID;
  paymentDate=pDate;
  amount=pAmount;
  paymentMethod=pMethod;
  paymentDetails=pDetails;
  //regcustomer- > makePayment(this);
};

int main()
{
  User *user;
  RegisteredTheaterManager *RegMan;
  user = new User("Janani","89ghr@h","jananijayasuriya@gmail.com");
  RegMan = new RegisteredTheaterManager("Wasana","456W@","wasanafernando@gmail.com",112,0764512221);
}
