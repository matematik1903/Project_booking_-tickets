#include"modul.h"
Flight:: Flight()
   {
	flight_number= "No info";
	departure = "No info";
	place_of_arrival = "No info";
	hour_departure_time = "No info";
	hour_arrival_time = "No ingo";
	a = 0;
	t = 0;
	p = 0;
   }
Flight::Flight(string flight_number_1, string departure_1, string place_of_arrival_1, string hour_departure_time_1, string hour_arrival_time_1, int a_1, int t_1, int p_1)
   {
   flight_number = flight_number_1;
   departure = departure_1;
   place_of_arrival = place_of_arrival_1;
   hour_departure_time = hour_departure_time_1;
   hour_arrival_time = hour_arrival_time_1;
   a = a_1;
   t = t_1;
   p = p_1;
   }
void Flight :: free_tickets_a(){ a = a - 1;}
void Flight :: free_tickets_t(){ t = t - 1;}
void Flight :: free_tickets_p(){ p = p - 1;}
void Flight::Cancel_booking()
   {
	 hour_departure_time = "Sorry, flight postponed";
	 hour_arrival_time = "Sorry, flight postponed";
	 a = 0;
	 t = 0;
	 p = 0;
   }
Flight&  Flight::operator =(const Flight& s)
   {
	flight_number = s.flight_number;
	departure = s.departure;
	place_of_arrival = s.place_of_arrival;
	hour_departure_time = s.hour_departure_time;
	hour_arrival_time = s.hour_arrival_time;
	a = s.a;
	t = s.t;
	p = s.p;
	return *this;
   }
ostream& operator <<(ostream& s, const Flight& b)
	{
	cout << "Flight number: ";
	 s << b.flight_number << endl;
	cout << "Departure: ";
	 s << b.departure << endl;
	cout << "Place of arrival: ";
	 s << b.place_of_arrival << endl;
	cout << "Hour departupe time: ";
	 s << b.hour_departure_time <<endl;
	cout << "Hour departupe time: ";
	 s << b.hour_arrival_time << endl;
	if ( b.a > 0)
	{cout << "Tickets for the car: ";
	 s << b.a << endl;}
	if ( b.t > 0)
	{cout << "Tickets for the train: ";
	 s << b.t << endl;}
	if ( b.p > 0)
	{cout << "Tickets for the plain: ";
	 s << b.p << endl;}
	 cout << endl;
	 return s;
	}
  string Flight::Departure_1(){return departure;}
  string Flight::Place_of_arrival_1() {return place_of_arrival;}
  int Flight::a_c(){ return a;}
  int Flight::t_c(){ return t;}
  int Flight::p_c(){ return p;}
void Flight :: get_info_a()
   {
   	 cout << "Flight number: ";
	 cout << flight_number << endl;
	cout << "Departure: ";
	 cout << departure << endl;
	cout << "Place of arrival: ";
	 cout << place_of_arrival << endl;
	cout << "Hour departupe time: ";
	 cout << hour_departure_time <<endl;
	cout << "Hour departupe time: ";
	 cout << hour_arrival_time << endl;
	cout << "Tickets for the car: ";
	  cout << a << endl;
	cout << endl;  
   }
void Flight :: get_info_t()
   {
   	cout << "Flight number: ";
	 cout << flight_number << endl;
	cout << "Departure: ";
	 cout << departure << endl;
	cout << "Place of arrival: ";
	 cout << place_of_arrival << endl;
	cout << "Hour departupe time: ";
	 cout << hour_departure_time <<endl;
	cout << "Hour departupe time: ";
	 cout << hour_arrival_time << endl;
    cout << "Tickets for the train: ";
	 cout << t << endl;
	cout << endl; 
   }
void Flight :: get_info_p()
   {
   	cout << "Flight number: ";
	 cout << flight_number << endl;
	cout << "Departure: ";
	 cout << departure << endl;
	cout << "Place of arrival: ";
	 cout << place_of_arrival << endl;
	cout << "Hour departupe time: ";
	 cout << hour_departure_time <<endl;
	cout << "Hour departupe time: ";
	 cout << hour_arrival_time << endl;
	cout << "Tickets for the plain: ";
	 cout << p << endl;
	cout << endl; 
   }
