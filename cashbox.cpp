 #include "modul.h"
Internet_Order_cashbox :: Internet_Order_cashbox()
   {
	a = 0;
	t = 0;
	p = 0;
	 A = new Travel_document_avto[a];
	 T = new Travel_document_train[t];
	 P = new Travel_document_plain[p];
   }
Internet_Order_cashbox :: Internet_Order_cashbox( int a_1, int t_1, int p_1)
   {
   a = a_1;
   t = t_1;
   p = p_1;
	A = new Travel_document_avto[a_1];
	T = new Travel_document_train[t_1];
	P = new Travel_document_plain[p_1];
   }
 Internet_Order_cashbox :: ~Internet_Order_cashbox()
 {
  delete []A;
  delete []T;
  delete []P;
 }
void Internet_Order_cashbox :: list_of_flaight(Flight* B_1,int n)                     
{
   for(int i = 0; i < n; i++)
    {
    cout << i + 1 << ": " << endl;
    cout << B_1[i];
    }
}
void Internet_Order_cashbox :: fong_a_Flaight(Flight* B_1, int n, string A, string B)
{
  int t = 0;
   for(int i = 0; i < n; i++)                                                                    
	{
    	if ((B_1[i].Departure_1() == A)&&(B_1[i].Place_of_arrival_1() == B))
    	{
    	t++;
		cout << i + 1 << ": " << endl;
        cout << B_1[i];
        }
    }
    if ( t == 0)
    {
    	cout << "Flight not found :(" << endl;
	}
}
Travel_document_avto Internet_Order_cashbox :: buy_doc_a(Flight* B_1, int n, float* h_1)
   {
   int g = n;
   int pil = 1;	
   string name;
   Travel_document_avto e;  
	for ( int i = 0; i < n; i++)
	{
		cout << i << ": " << endl;
		B_1[i].get_info_a();                               
    }
	while ( (g > (n-1))||(pil > 2) )                        
	{	
	cout << "Select light: " << endl;
	cin >> g;
	 if ((B_1[g].a_c()) < 1)
	 {
	 	cout << "Sorry, places in a given direction there, \n" << "Please try again later. \n" << endl;
	 	e.get_length_and_numtic(-1, -1.0);
	 	return e;
	 }
	cout << "Select privilege: " << endl;
	cout << "0. Baby;          " << "1.Student;         " << "2.general_t; \n";
	cin >> pil;                                                                           
    }                                                      
	Class_ticket_t_and_a pr_1;
	switch(pil)                                                     
	{
		case 0: pr_1 = baby;
		  break;
		case 1: pr_1 = student;
		  break;
		case 2: pr_1 = general_t;
		  break;
		default:  cout << ".......Error pr_1....." << endl;  	 
	}
	cout << "Your last and first name: ";
	cin.get();
    getline(cin, name);
	
	Travel_document_avto s(pr_1);
	e = s;
	e.st_user(name);
    e.get_length_and_numtic(a, h_1[g]);
    e.Calculate_the_price_of_the_ticket_1();                                  
    e.stantion(B_1[g].Departure_1(), B_1[g].Place_of_arrival_1());
    
    a = a - 1;
	B_1[g].free_tickets_a(); 
    delete []A;
    Travel_document_avto* A;                                                   
    A = new Travel_document_avto[a];
	return e;
   }
Travel_document_train Internet_Order_cashbox :: buy_doc_t(Flight* B_1, int n, float* h_1)
   {
   int g = n;
   int pil = 1;
   int cl = 1;	
   string name;
   Travel_document_train e;    	 
	for ( int i = 0; i < n; i++)
	{
		cout << i << ": " << endl;
		B_1[i].get_info_t();
    }  
	while ( (g > (n-1))||(pil > 2)||(cl > 2))
	{		
	cout << "Select light: " << endl;
	cin >> g;
	if ((B_1[g].t_c()) < 1)
	 {
	 	cout << "Sorry, places in a given direction there, \n" << "Please try again later. \n" << endl;
	 	e.get_length_and_numtic(-1, -1.0);
	 	return e;
	 }
	cout << "Select privilege: " << endl;
	cout << "0. Baby;                 " << "1.Student;              " << "2.general_t; \n";
	cin >> pil; 
	cout << "1. Compartment;          " << "0. Reserved_seat;       " << "2. Luxe;\n";
	cin >> cl;
    }    	                                          
	Class_ticket_t_and_a pr_1;
	Class_booking_train pr_2;	
	switch(pil)
	{
		case 0: pr_1 = baby;
		  break;
		case 1: pr_1 = student;
		  break;
		case 2: pr_1 = general_t;
		  break;
		default:  cout << ".......Error pr_1....." << endl;  	 
	}
	switch(cl)   
	{
		case 0: pr_2 = reserved_seat;
		  break;
		case 1: pr_2 = compartment;
		  break;
		case 2: pr_2 = luxe;
		  break;
		default:  cout << ".......Error pr_2....." << endl;  	 
	}
    cout << "Your last and first name: ";
   cin.get();
   getline(cin, name);
	Travel_document_train s(pr_1 ,pr_2);
    e = s;
    e.st_user(name);
    e.get_length_and_numtic(t, h_1[g]);
    e.Calculate_the_price_of_the_ticket_1();
	e.stantion(B_1[g].Departure_1(), B_1[g].Place_of_arrival_1()); 
    t = t - 1;
    B_1[g].free_tickets_t();
	delete []T;
    Travel_document_train* T;
	T = new Travel_document_train[t];
    return e;
   }
Travel_document_plain Internet_Order_cashbox :: buy_doc_p(Flight* B_1, int n, float* h_1)
   {  	
   int g = n;
   int cl = 1;	
   string name;	
   Travel_document_plain e; 
	for ( int i = 0; i < n; i++)
	{
		cout << i << ": " << endl;
		B_1[i].get_info_p();
    }
	while ( (g > (n-1))||(cl > 1))
	{	
	cout << "Select light: " << endl;
	cin >> g;
	if ((B_1[g].p_c()) < 1)
	 {
	 	cout << "Sorry, places in a given direction there, \n" << "Please try again later. \n" << endl;
	 	e.get_length_and_numtic(-1, -1.0);
	 	return e;
	 }
	cout << "Select privilege: " << endl;
	cout << "0. Economy;        " <<  "1. Business; \n";
	cin >> cl;
    }				 
    Class_booking_plain pr_1;                
    switch(cl)   
	{
		case 1: pr_1 = business ;
		  break;
		case 0: pr_1 =  economy ;
		  break;
		default:  cout << ".......Error pr_1....." << endl;  	 
	}
   cout << "Your last and first name: ";
   cin.get();
   getline(cin, name);
	Travel_document_plain s(pr_1);
    e = s;
    e.st_user(name);
    e.get_length_and_numtic(p, h_1[g]);
    e.Calculate_the_price_of_the_ticket_1();
    e.stantion(B_1[g].Departure_1(), B_1[g].Place_of_arrival_1());  
    p = p-1;
    B_1[g].free_tickets_t();
    delete []P;
    Travel_document_plain* P;
	P = new Travel_document_plain[p];
    return e;
   } 
void Internet_Order_cashbox :: baza(Flight* B_1, int n)
   {
   for ( int i = 0; i < n; i++)
   {
   if ( (B_1[i].a_c()) > 0)                            
   {
    int q = B_1[i].a_c();
    a = a + q;
	delete []A;
    Travel_document_avto* A;
	A = new Travel_document_avto[a];
   }
   if (( B_1[i].t_c()) > 0)                
   {
   int q = B_1[i].t_c();
   t = t + q;
    delete []T;
    Travel_document_train* T;
	T = new Travel_document_train[t];
   }
   if (( B_1[i].p_c()) > 0)                     
   {
   int q = B_1[i].p_c();
    p = p + q; 
    delete []P;
    Travel_document_plain* P;
	P = new Travel_document_plain[p];
   }
 }
}
