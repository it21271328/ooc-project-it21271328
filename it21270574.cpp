#include<iostream>
#include<string>
using namespace std;

class Movie;

class Offer {
private:
	int offerId;
	int offerAmount;
	string offerDescription;

public:
	Offer();
  Offer(int oofferID, int oofferAmount, string oofferDescription);
	void OfferDiscounts();
};

class Theater {
private:
	int theaterID;
	string theaterName;
	string location;
	string showTime;
  Movie *movies[2];
public:
	Theater();
  Theater(int ttheaterId, string ttheaterName, string llocation,string ShTime);
	void addMovie(Movie *mov1, Movie *mov2);
  void updateSeatsAvailable();
};

//offer class implementation

Offer::Offer() {};
Offer::Offer(int oofferID, int oofferAmount, string oofferDescription) {
	
	offerId = oofferID;
	offerAmount = oofferAmount;
	offerDescription = oofferDescription;
}

void Offer::OfferDiscounts() {};

//Theater calss implementation

Theater::Theater() {};

Theater::Theater(int ttheaterId, string ttheaterName, string llocation, string ShTime) {
	theaterID = ttheaterId;
	theaterName = ttheaterName;
	location = llocation;
  showTime = ShTime;
}
void Theater::addMovie(Movie *mov1, Movie *mov2) 
{
  movies[0]=mov1;
  movies[1]=mov2;
};

void updateSeatsAvailable(){};

int main() 
{
	return 0;
}