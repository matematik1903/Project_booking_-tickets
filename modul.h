#include <iostream>
#include <string>
#include <cstring>
using namespace std;
 class Flight
 {
  private:
   string flight_number;         
   string departure;            
   string place_of_arrival;     
   string hour_departure_time;  
   string hour_arrival_time;       
   int a,t,p;
  public:
  Flight();
  Flight(string flight_number_1, string departure_1, string place_of_arrival_1, string hour_departure_time_1, string hour_arrival_time_1, int a_1, int t_1, int p_1);
  ~Flight(){};
   void Cancel_booking();     
   Flight& operator =(const Flight& s);
   friend ostream& operator <<(ostream& s, const Flight& b);
   string Departure_1();            
   string Place_of_arrival_1();    
   int a_c();                       
   int t_c();                      
   int p_c();                    
   void get_info_a();
   void get_info_t();
   void get_info_p();  
   void free_tickets_a();
   void free_tickets_t();
   void free_tickets_p();
 };
class Travel_document
{
   protected:
	int number_ticket;      
	float length;           
	float price;          
    string user;  
    string in_st;
    string out_st;
   public:
  Travel_document();                                                               
  Travel_document(int number_ticket_1, float length_1, float price_1, string user_1, string in_st_1, string out_st_1);     
  ~Travel_document(){};                                                            
  virtual float Calculate_the_price_of_the_ticket_1() = 0;    
  void get_length_and_numtic(int u, float j);                 
  int rtr_number();                               
  void st_user(string user_1);
  void stantion(string A_1, string B_1);
};
enum Class_ticket_t_and_a {student = 1, baby = 0, general_t = 2};
class Travel_document_avto : public Travel_document
 {
  private:
   Class_ticket_t_and_a a_1;                  
  public:
  Travel_document_avto();                                  
  Travel_document_avto(Class_ticket_t_and_a a_1_2);
  Travel_document_avto(const Travel_document_avto& s);
  ~Travel_document_avto(){};                                
  float Calculate_the_price_of_the_ticket_1();                                         
  friend ostream& operator<<(ostream& s, const Travel_document_avto& b);
 };
enum Class_booking_train {compartment = 1, reserved_seat = 0, luxe = 2}; 
class Travel_document_train : public Travel_document
 {
  private:
   Class_ticket_t_and_a m_1;                 
   Class_booking_train m_2;           
  public:
  Travel_document_train();                                                            
  Travel_document_train( Class_ticket_t_and_a m_1_2,Class_booking_train m_2_2);         
   Travel_document_train(const Travel_document_train& s);
  ~Travel_document_train(){};                                                          
  float Calculate_the_price_of_the_ticket_1();                                    
  friend ostream& operator<<(ostream& s, const Travel_document_train& b);
 };
 enum Class_booking_plain {economy = 1, business = 0 };         
 class Travel_document_plain : public Travel_document
 {
  private:
   Class_booking_plain p_1;                
  public:
   Travel_document_plain();                                   
   Travel_document_plain(Class_booking_plain p_2);            
    Travel_document_plain(const Travel_document_plain& s);
   ~Travel_document_plain(){};                                
  float Calculate_the_price_of_the_ticket_1();          
    friend ostream& operator<<(ostream& s, const Travel_document_plain& b);
 };
 class Internet_Order_cashbox      
 {
   private:
   int a,t,p;                                              
   Travel_document_avto* A;          
   Travel_document_train* T;         
   Travel_document_plain* P;	      
   public:
   Internet_Order_cashbox();                                         
   Internet_Order_cashbox(int a_1, int t_1, int p_1);                
   ~Internet_Order_cashbox();	                                      
   Travel_document_avto buy_doc_a(Flight* B_1, int n, float* h_1);                                                        
   Travel_document_plain buy_doc_p(Flight* B_1, int n, float* h_1);                                                        
   Travel_document_train buy_doc_t(Flight* B_1, int n,float * h_1);                                                       
   void baza(Flight* B_1, int n);           	                                  
   void list_of_flaight(Flight* B_1, int n);                                      
   void fong_a_Flaight(Flight* B_1, int n, string A, string B);                    
 };
