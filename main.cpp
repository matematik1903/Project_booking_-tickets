#include "modul.h"
int main()
{
float* h;
h = new float[5];
Flight* m;                                                                                                                                                                                                         //
m = new Flight[5];                                                                                                                                                          //
for(int i = 0; i < 5; i++)                                                                                  
    {                                                                                                       
   if ( i == 0)                                                     
	{
	  Flight k("7xPI9","Kyiv","Odessa","19:30","21:30", 4, 4, 5);
	  m[i] = k;
	  h[0] = 130.3;  
	}
   if ( i == 1)
 	{
	  Flight k("AC 8893 ??","Lviv","Rivne","14:30","16:30", 10, 0, 0);
	   m[i] = k;
	   h[1] = 54.2;
	}
   if ( i == 2)
 	{
 	  Flight k("r148*1","Moskva","Warshava","00:30","19:30", 0, 10, 10);
	   m[i] = k;
	   h[2] = 1300.0;
	}
   if ( i == 3)
 	{
 	   Flight k("tu134r-1","Kyiv","Lutsk","08:10","23:30", 10, 3, 4);
	   m[i] = k;
	   h[3] = 350.9;
	}
   if ( i == 4)
    {
       Flight k("AcI-19","Moskva","Warshava","00:05","00:20", 3, 7, 3);
	   m[i] = k;
	   h[4] = 1340.0;
	}                                                                                                       
	}                                                                                                        
int y = 0;
int v;
bool d_n;
Internet_Order_cashbox C;
C.baza(m, 5);
while ( y != 6)
{
	system("cls");
	 cout << "Hello, \n" << "Menu: " << endl;
	 cout << "What tickets are you interested in? " << endl;
     cout << "1 bus ticket       " << "   2. train ticket         " << "3. plane ticket" << endl;
     cout << "No, I'm interested in: \n";
	 cout << "4. List of flights    " << "5. Find a flight     " << endl;
	 cout << "6. Exit;" << endl;
cin >> y;
 switch (y)
  {
 	case 1:
	 system("cls");
 	   {Travel_document_avto QA_1(C.buy_doc_a(m, 5, h));
		if (QA_1.rtr_number() > 0)
		{ 
	   cout << QA_1;}} 
	    break;
 	case 2:
	  system("cls");
	   {Travel_document_train QT_2(C.buy_doc_t(m, 5,h)); 
       if (QT_2.rtr_number() > 0)
		{  cout << QT_2;
	    }}
	     break;
 	case 3:
	   system("cls");
	    {
	   Travel_document_plain QP_3(C.buy_doc_p(m, 5, h)); 
	   if (QP_3.rtr_number() > 0)
		{ 
	   cout << QP_3;}}	 
	    break;
 	case 4:
	  system("cls");
	  cout << "list: " << endl;
	  C.list_of_flaight(m, 5);
	  break;
 	case 5:
	 {
	  system("cls");
	  string z_1;
	  string z_2;
	  cout << "dispatch station: " << endl;
	   cin >> z_1;
	  cout << "arrival station: " << endl;
	   cin >> z_2;
	   system("cls");
	  C.fong_a_Flaight(m, 5, z_1, z_2);
	  } break;
	case 6:
        return 0;
 	default: cout << "Error 0x01cv3456 " << endl;
  }
cout << "Do you wont to continue? (1 - da \ 0 - net) " << endl;
cin >> d_n;
if (d_n == false)
{
	return 0;
}
v = 0;
}
cout << "bodik" << endl;
delete []h;
delete []m;
system("pause");
return 0;
}
