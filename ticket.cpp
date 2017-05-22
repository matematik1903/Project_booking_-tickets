#include "modul.h"
Travel_document::Travel_document()
   {
   	 user = "Not information";
	 number_ticket = 1;                                                 // Клас Квиток , успадковуэться 3 іншими
	 length = 1.0;
	 price = 1.0;
	 in_st = "Not information";
     out_st = "Not information";
   };
Travel_document::Travel_document(int number_ticket_1, float length_1, float price_1, string user_1, string in_st_1, string out_st_1)
   {
   	 user = user_1;
	 number_ticket = number_ticket_1;                                                 // Клас Квиток , успадковуэться 3 іншими
	 length = length_1;
	 price = price_1;
	 in_st = in_st_1;
     out_st = out_st_1;
   };
void Travel_document :: stantion(string A_1, string B_1)
 {
 in_st = A_1;
 out_st = B_1;	
 }
void Travel_document::get_length_and_numtic(int u, float j)
  {
	 number_ticket = u;
	 length = j;
  }
int Travel_document :: rtr_number(){return number_ticket;}
Travel_document_avto:: Travel_document_avto()
  {
   a_1 = general_t;
  };
Travel_document_avto::Travel_document_avto(Class_ticket_t_and_a a_1_2)
  {
	a_1 = a_1_2;
  };
float  Travel_document_avto::Calculate_the_price_of_the_ticket_1()
   {
	 switch (a_1)
	 {
	 case 0: price = ((length * 0.32) + (length*0.32)*0.20 + 35)*0.25;
		   break;
	 case 1: price = ((length * 0.32) + (length*0.32)*0.20 + 35)*0.6;
		   break;
	 case 2: price = ((length * 0.21) + (length*0.21)*0.20 + 35);
		   break;
	 default: cout << ".......Error a_1....." << endl;

	 }
	 return price;
   }
ostream& operator<<(ostream& s, const Travel_document_avto& b)
  {
   cout << "Your number ticket: ";
	s << b.number_ticket;
		cout << "      Avto_TICKET;"<<endl;
   cout << "Dispatch station: ";
	s << b.in_st ;
   cout << "       Arrival station: ";
	s << b.out_st << endl;
	s << b.user << endl;	 
	cout << "Price: " ;
	 s << b.price;
	cout << "     Status: ";
	if ( b.a_1 == 0)
	{
	  s << "baby; " << endl;
	}
	if ( b.a_1 == 1)
	{
	 s << "student; " << endl;
	}
	if ( b.a_1 == 2)
	{
	 s << "general; " << endl;
	}
   return s;
  }
Travel_document_train :: Travel_document_train()
   {
	   m_1 = general_t ;
	   m_2 = reserved_seat;
   };
Travel_document_train :: Travel_document_train(Class_ticket_t_and_a m_1_2,Class_booking_train m_2_2)
   {
	   m_1 = m_1_2;
	   m_2 = m_2_2;
   };
float Travel_document_train :: Calculate_the_price_of_the_ticket_1()
   {
	switch (m_1)
	 {
	 case 0:
			switch(m_2)
				{
				case 0 : price = ((length * 0.21) + (length*0.21)*0.20 + 10)*0.25;
					break;
				case 1 : price = ((length * 0.21) + (length*0.21)*0.20 + 10)*0.6;
					break;
				case 2 : price = ((length * 0.21) + (length*0.21)*0.20 + 10);
					break;
				default :
				   cout << ".....Error m_2....." ;

				}
		   break;
	 case 1:
		   switch(m_2)
				 {
				 case 0 : price = ((length * 0.21) + (length*0.21)*0.20 + 20)*0.25;
				   break;
				 case 1 : price = ((length * 0.21) + (length*0.21)*0.20 + 20)*0.6;
				   break;
				 case 2 : price = ((length * 0.21) + (length*0.21)*0.20 + 20);
				   break;
				 default :
					cout << ".....Error m_2....." ;
				 }
		   break;
	 case 2:
			 switch(m_2)
				 {
				 case 0 : price = ((length * 0.21) + (length*0.21)*0.20 + 30)*0.25;
					break;
				 case 1 : price = ((length * 0.21) + (length*0.21)*0.20 + 30);
					break;
				 case 2 : price = ((length * 0.21) + (length*0.21)*0.20 + 30);
					break;
				 default :
					cout << ".....Error m_2....." ;
				 }
		   break;
	 default:  cout << ".......Error m_1....." << endl;
	 }
	return price;
   }
ostream& operator<<(ostream& s, const Travel_document_train& b)
  {
  cout << "Your number ticket: ";
	s << b.number_ticket;
		cout << "      train_TICKET;"<<endl;
   cout << "Dispatch station: ";
	s << b.in_st ;
   cout << "       Arrival station: ";
	s << b.out_st << endl;
	s << b.user << endl;	 
	cout << "Price: " ;
	 s << b.price << endl;
	cout << "Status: ";
	 switch (b.m_1)
	 {
	 case 0 : s << "baby; ";
	 cout << "       Class: ";
			switch(b.m_2)
				{
				case 0 : cout << "reserved_seat " << endl;
					break;
				 case 1 : cout << "compartment" << endl;;
					break;
				 case 2 :cout << "luxe " << endl;;
					break;
				  default :
					cout << ".....Error m_2....." ;
				}
		   break;
	 case 1:  s << "student; ";
	 cout << "       Class: " ;
		   switch(b.m_2)
				 {
				 case 0 : cout << "reserved_seat ";
					break;
				 case 1 : cout << "compartment";
					break;
				 case 2 :cout << "luxe ";
					break;
				 default :
					cout << ".....Error m_2....." ;
				 }
		   break;
	 case 2:  s << "general_t; ";
	 cout << "      Class : ";
			 switch(b.m_2)
				 {
				 case 0 : cout << "reserved_seat ";
					break;
				 case 1 : cout << "compartment";
					break;
				 case 2 :cout << "luxe ";
					break;
				 default :
					cout << ".....Error m_2....." ;
				 }
		   break;
	 default:  cout << ".......Error m_1....." << endl;
	 }
   cout << endl;
   return s;
  }
Travel_document_plain :: Travel_document_plain()
   {
	   p_1 = economy;
   };
Travel_document_plain :: Travel_document_plain(Class_booking_plain p_2)
   {
	   p_1 = p_2;
   };
float Travel_document_plain ::Calculate_the_price_of_the_ticket_1()
	{
	 switch(p_1)
		{
			case 1 : price = ((length) + (length)*0.20 + 40);
					break;
			case 0 : price = ((length) + (length)*0.20 + 100);
					break;
			default :
				   cout << ".....Error p_1 ....." ;
		}
	return price;
	}
ostream& operator<<(ostream& s, const Travel_document_plain& b)
  {
cout << "Your number ticket: ";
	s << b.number_ticket;
	cout << "      Plain_TICKET;"<<endl;
   cout << "Dispatch station: ";
	s << b.in_st ;
   cout << "       Arrival station: ";
	s << b.out_st << endl;
	s << b.user << endl;	 
	cout << "Price: " ;
	 s << b.price;
	cout << "             Class: ";
   switch(b.p_1)
		{
			case 1 : s << "economy ";
			
					break;
			case 0 : s << "business ";
					break;
			default :
				   cout << ".....Error p_1 ....." ;
		}
   cout << endl;	
   return s;
  }
Travel_document_avto :: Travel_document_avto(const Travel_document_avto& s)
   {
   	a_1 = s.a_1;
   }
Travel_document_train :: Travel_document_train(const Travel_document_train& s)
   {
   	m_1 = s.m_1;
   	m_2 = s.m_2;
   }   
Travel_document_plain :: Travel_document_plain(const Travel_document_plain& s)
   {
   	p_1 = s.p_1;
   }	     
void  Travel_document :: st_user(string user_1)
    {
    	user = user_1;
	}
