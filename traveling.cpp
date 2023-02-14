/* a program of traverling agency */
#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
  void menu();
  class manage
  {
  	protected:
  		string username;
  		public:
  			manage()
  			{ 
  				cout<<" enter the user name to continue admin :";
  				cin>>username;
  				
  			
  				system("cls");
  				menu();
			  }
    ~manage()
  {}
  	
  };
class customer 
{
public:
string name,gender,address;
int age;
double mobile_no;
static int custid;
char all[999];
	void getdetail()    
	{
	ofstream out("oldcustomer.txt",ios::app);
	{  cout<<"Enter your id number :";
	   cin>>custid;
	   cout<<"Enter your  name : ";
		cin>>name;
		cout<<"Enter your age :";
		cin>>age;
	    cout<<"Enter your mobile no. : ";
		cin>>mobile_no;
		cout<<"Enter your gender";
	     cin>>gender; 
        cout<<"Enter your address : ";
	    cin>>address;
	     
		    }
	   	out<<"customer id :"<<custid<<endl<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Mobile no. :"<<mobile_no<<endl<<"Adress :"<<address<<endl<<"gender:"<<gender;
	   	out.close();	
	   	cout<<"Save the details for further purpose "<<endl;		
	}
      void showdetail()
      {
      	ifstream infile("oldcustomer.txt");
      	if(!infile)
      	{
      		cout<<"file error ! "<<endl;
		  }
		  while(!(infile.eof())) 
		  {
		  	infile.getline(all,999);
		  	cout<<all<<endl;
		  }
		  infile.close();
	  }
};
int customer::custid;
class cabservices
{
  public:
 int cab,killometer;
 float cabcost;
 static float lastcost;

	void cabdetails()
	{
		int hirecab;
	cout<<" *------- Welcom to Cab services----------*"<<endl;
	cout<<" !---------- Sarri Duniya --------------!"<<endl;
	cout<<" press 1. for standard cab services 20rupess per killometer"<<endl;
	cout<<"press 2. for luxury cab services 30rupess per killometer"<<endl;
	cout<<"which kind of cab services need you :";
	cin>>cab;
	cout<<"what distance travel you :";
	cin>>killometer;
	if(cab==1)
	{
		cabcost=killometer*20;
		cout<<"your charge :"<<cabcost;
		cout<<"press 1.to confirmation hire the cab : "<<endl;
		cout<<"press 2. to select another cab servicesa : ";
		cin>>hirecab;
		system("cls");
		if(hirecab==1)
		{
			lastcost=cabcost;
			cout<<"you are successfully hired a standard cab services  "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(hirecab==2)
		{
			cabdetails();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(8);
			system("cls");
			cabservices();
		}
	}
		else if(cab==2)
		{
				cabcost=killometer*30;
		cout<<"your charge :"<<cabcost;
		cout<<"press 1.to confirmation hire the cab : "<<endl;
		cout<<"press 2. to select another cab servicesa : ";
		cin>>hirecab;
		system("cls");
		if(hirecab==1)
		{
			lastcost=cabcost;
			cout<<"you are successfully hired a luxury cab services  "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(hirecab==2)
		{
		cabdetails();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(20);
			system("cls");
			cabdetails();
		}
		}
		else
		{
			cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
			cabdetails();
		      menu();
		}
		cout<<"press 1 top out this menu and go main menu "<<endl;
		cin>>hirecab;
		system("cls");
		if(hirecab==1)
		{
			menu();
		}
		else
		{
	         menu();
		}
	
	
}
	};
	float cabservices::lastcost;
class flightservices
{  
   public:
	int flight;
     float total_cost;
   static  float finalcost;
   
     	void flightdetail()
     	{
     		int booked;
	cout<<" *-----------------Welcome---------------*"<<endl;
	cout<<" !---------- all india flight services  --------------!"<<endl;
	cout<<" press 1. for economy class"<<endl;
	cout<<"press 2. for first class"<<endl;
	cout<<"press 3 for bussiness class "<<endl;
	cout<<"which kind of class  need you :";
	cin>>flight;
	if(flight==1)
	{
		total_cost= 28567;
		cout<<"your charge :"<<total_cost;
		cout<<"press 1.to confirmation economy class : "<<endl;
		cout<<"press 2. to select another class : ";
		cin>>booked;
		system("cls");
		if(booked==1)
		{
			finalcost=total_cost;
			cout<<"you are successfully economy class "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(booked==2)
		{
			flightdetail();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(20);
			system("cls");
			flightdetail();
		}
	}
		else if(flight==2)
		{
				total_cost=78641;
		cout<<"your charge :"<<total_cost;
		cout<<"press 1.to confirmation first class : "<<endl;
		cout<<"press 2. to select another class: ";
		cin>>booked;
		system("cls");
		if(booked==1)
		{
			finalcost=total_cost;
			cout<<"you are successfully hired a luxury cab services  "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(booked==2)
		{
			flightdetail();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(8);
			system("cls");
			flightdetail();
		}
		}
		else if(flight==3)
		{
			total_cost= 150567;
		cout<<"your charge :"<<total_cost;
		cout<<"press 1.to confirmation bussiness class : "<<endl;
		cout<<"press 2. to select another class : ";
		cin>>booked;
		system("cls");
		if(booked==1)
		{
			finalcost=total_cost;
			cout<<"you are successfully economy class "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(booked==2)
		{
		    flightdetail();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(8);
			system("cls");
			flightdetail();
		}
	}
		
		else
		{
			cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
			flightdetail();
			menu();
		}
		cout<<"press 1 top out this menu and go main menu "<<endl;
		cin>>booked;
		system("cls");
		if(booked==1)
		{
		    menu();
		}
		else
		{
		  menu();
		}
		 }
     
	
};
float flightservices::finalcost;
class railwayservices
{ 
public:
	int train;
     float traincost;
    static float final_cost;
    
     	void traindetail()
     	{
     		int ticket;
	cout<<" *-----------------Welcome---------------*"<<endl;
	cout<<" !---------- all india railway services  --------------!"<<endl;
	cout<<" press 1. for sleeper class"<<endl;
	cout<<"press 2. for  third acclass"<<endl;
	cout<<"press 3 for second ac class"<<endl;
	cout<<"press 4 for first ac class "<<endl;
	cout<<"which kind of class  need you :";
	cin>>train;
	if(train==1)
	{
		traincost= 1021;
		cout<<"your charge :"<<traincost;
		cout<<"press 1.to confirmation sleeper ac class : "<<endl;
		cout<<"press 2. to select another  class : ";
		cin>>ticket;
		system("cls");
		if(ticket==1)
		{
			final_cost=traincost;
			cout<<"you are successfully booked ticket in sleeper class "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(ticket==2)
		{
			traindetail();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(8);
			system("cls");
			traindetail();
		}
	}
		else if(ticket==2)
		{
			  traincost=1941;
		cout<<"your charge :"<<traincost;
		cout<<"press 1.to confirmation third ac class : "<<endl;
		cout<<"press 2. to select another class: ";
		cin>>ticket;
		system("cls");
		if(ticket==1)
		{
			final_cost=traincost;
			cout<<"you are successfully booked ticket in third ac class "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(ticket==2)
		{
			traindetail();
		}
		else
		{
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(8);
			system("cls");
	      traindetail();
		}
		}
		else if(train==3)
		{
			 traincost=2641;
		cout<<"your charge :"<<traincost;
		cout<<"press 1.to confirmation second ac class : "<<endl;
		cout<<"press 2. to select another class: ";
		cin>>ticket;
		system("cls");
		if(ticket==1)
		{
			final_cost=traincost;
			cout<<"you are successfully to booked train ticket in second class "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(ticket==2)
		{
			traindetail();
		}
			cout<<" invalid input! please choose your right choice"<<endl;
			sleep(20);
			system("cls");
	      traindetail();
		}
		else if(train==4)
		{
			 traincost=3941;
		cout<<"your charge :"<<traincost;
		cout<<"press 1.to confirmation first ac class : "<<endl;
		cout<<"press 2. to select another class: ";
		cin>>ticket;
		system("cls");
		if(ticket==1)
		{
			final_cost=traincost;
			cout<<"you are successfully to booked train ticket in second class "<<endl;
			cout<<"go to menu "<<endl;
		}
		else if(ticket==2)
		{
		traindetail();
		}
		else
		{
		   cout<<" invalid input! please choose your right choice"<<endl;
			sleep(8);
			system("cls");
	      traindetail();
		   }
		}
		
		else
		{
			cout<<" invalid input ! please choose right option "<<endl;
			sleep(20);
			system("cls");
		traindetail();
			menu();
		}
		cout<<"press 1 top out this menu and go main menu "<<endl;
		cin>>ticket;
		system("cls");
		if(ticket==1)
		{
		 	menu();
		}
		else
		{
		  menu();
		}
		 }
     
};
float railwayservices::final_cost;
class booking
{  
public:
   int hotel3,package,hotelcost;
   static int final_hotelcost;
   void gethotel()
   {
   	int i;
   	string hotel[]={ "shu_ru_resort", "hotel_in","hotel_marina"};
   	for(i=0;i<3;i++)
   	{
   		cout<<i+1<<"hotel"<<hotel[i]<<endl;
	   }
	   cout<<"choose the number to booked the hotel you want : ";
	   cin>>hotel3;
	   if(hotel3==1)
	   {
	   	cout<<" !------Welcome the Shu_ru_resort------! "<<endl;
	   	cout<<"    package of hotel shu_ru_resort  "<<endl;
	   	cout<<"choose 1 for standard package you pay only 5000 rupess"<<endl;
	   	cout<<"choose 2 for premium package you pay only 10000 rupess"<<endl;
	   	cout<<"choose 3 for luxury package you pay only 15000 rupess"<<endl;
	   	cout<<"choose the number to booked the package  you want ";
	   	cin>>package;
	   	 if(package==1)
	   	 {
	   	 	hotelcost=5000;
	   	 	cout<<"your charge :"<<hotelcost<<endl;;
	     	cout<<"press 1.to confirmation standard package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
	
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a standard package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }

}
	   else  if(package==2)
	   	 {
	   	 	hotelcost=10000;
	   	 	cout<<"your charge :"<<hotelcost<<endl;
	     	cout<<"press 1.to confirmation premium package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a premium package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
	   
}
	   else  if(package==3)
	   	 {
	   	 	hotelcost=15000;
	   	 	cout<<"your charge :"<<hotelcost;
	     	cout<<"press 1.to confirmation luxury package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a luxury package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
	   }
}   
  else if(hotel3==2)
	   {
	   	cout<<" !------Welcome the hotel_in------! "<<endl;
	   	cout<<"    package of hotel shu_ru_resort  "<<endl;
	   	cout<<"choose 1 for standard package you pay only 7000 rupess"<<endl;
	   	cout<<"choose 2 for premium package you pay only 10000 rupess"<<endl;
	   	cout<<"choose 3 for luxury package you pay only 17000 rupess"<<endl;
	   	cout<<"choose the number to booked the package  you want ";
	   	cin>>package;
	   	 if(package==1)
	   	 {
	   	 	hotelcost=7000;
	   	 	cout<<"your charge :"<<hotelcost<<endl;;
	     	cout<<"press 1.to confirmation standard package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
	}
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a standard package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
}

	   else  if(hotel3==2)
	   	 {
	   	 	hotelcost=10000;
	   	 	cout<<"your charge :"<<hotelcost<<endl;
	     	cout<<"press 1.to confirmation premium package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a premium package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
	   
	   }
	   else  if(package==3)
	   	 {
	   	 	hotelcost=17000;
	   	 	cout<<"your charge :"<<hotelcost;
	     	cout<<"press 1.to confirmation luxury package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a luxury package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(20);
			system("cls");
		    gethotel();
			menu();
		   }
	   }
	   
	   else if(hotel3==3)
	   {
	   	cout<<" !------Welcome the hotel_marina------! "<<endl;
	   	cout<<"    package of hotel shu_ru_resort  "<<endl;
	   	cout<<"choose 1 for standard package you pay only 9000 rupess"<<endl;
	   	cout<<"choose 2 for premium package you pay only 13000 rupess"<<endl;
	   	cout<<"choose 3 for luxury package you pay only 20000 rupess"<<endl;
	   	cout<<"choose the number to booked the package  you want ";
	   	cin>>package;
	   	 if(package==1)
	   	 {
	   	 	hotelcost=9000;
	   	 	cout<<"your charge :"<<hotelcost<<endl;;
	     	cout<<"press 1.to confirmation standard package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
	}
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a standard package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
	   
}
	   else  if(package==2)
	   	 {
	   	 	hotelcost=13000;
	   	 	cout<<"your charge :"<<hotelcost<<endl;
	     	cout<<"press 1.to confirmation premium package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a premium package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
	   
	   }
	   else  if(package==3)
	   	 {
	   	 	hotelcost=20000;
	   	 	cout<<"your charge :"<<hotelcost;
	     	cout<<"press 1.to confirmation luxury package  : "<<endl;
	     	cout<<"press 2. to select another package: ";
	    	 cin>>package;
		system("cls");
		if(package==1)
		{	
			final_hotelcost=hotelcost;
			cout<<"you are successfully booked a luxury package enjoy life! "<<endl;
			cout<<"go to menu "<<endl;
		
			}
	   	else if(package==2)
	   	{
	   		gethotel();
		   }
		   else
		   {
		   		cout<<" invalid input ! please choose right option "<<endl;
			sleep(8);
			system("cls");
		    gethotel();
			menu();
		   }
	   }


	   	else
		{
			cout<<" invalid input ! please choose right option "<<endl;
		sleep(20);
			system("cls");
		    gethotel();
			menu();
		}
		cout<<"press 1 top out this menu and go main menu "<<endl;
		cin>>package;
		system("cls");
		if(package==1)
		{
			menu();
		}
		else
		{
			menu();
		}
	   }	
};
int booking::final_hotelcost;
class bill :public customer,public cabservices,public flightservices,public railwayservices,public booking
{  public:
	void printbill()
	{
		ofstream outfile("recipt.txt");
		{
			outfile<<"!------- Shu_ru_jindgi travel agency -------!"<<endl;
			outfile<<"!-------------------Recipt--------------------"<<endl<<endl;
			outfile<<"customer id : "<<customer::custid<<endl;
			outfile<<"your travling resource \t\t\t\t\t\t\t total charge "<<endl;
			outfile<<"cab services cost"<<setw(15)<<cabservices::lastcost<<endl;
			outfile<<"flight services cost"<<setw(15)<<flightservices::finalcost<<endl;
			outfile<<"railway services cost"<<setw(15)<<railwayservices::final_cost<<endl;
			outfile<<"hotel services cost"<<setw(15)<<booking::final_hotelcost<<endl;
			int total=cabservices::lastcost+flightservices::finalcost+railwayservices::final_cost+booking::final_hotelcost;
			outfile<<"total charge in your traveling \t\t\t\t\t"<<total<<endl;
			outfile<<"    !-----THANK YOU for visited my travling agency -----!"<<endl;
			}
			outfile.close();
			
	}
	void showbill()
	{
		ifstream infile("recipt.txt");
		{
	
		if(!infile)
		{
			cout<<"file open error ";
		}
		while(!(infile.eof())){
			infile.getline(all,999);
			cout<<all<<endl;
		}
			}
			infile.close();
	}
};
void menu()
{
	int mainchoice,choose, go_menu;;
	cout<<"!------------Shu_ru_jindgi travel agency -------!"<<endl;
	cout<<"!---------------Main Menu-------------!"<<endl;
	cout<<"       customer management      1  "<<endl;
	cout<<"   cab services management      2  "<<endl;
	cout<<"   flight services management   3  "<<endl;
	cout<<"   railway services management  4  "<<endl;
	cout<<"   hotel services management    5  "<<endl;
	cout<<" total charge & bill management    6  "<<endl;
	cout<<"          exit                  7  "<<endl;
	cout<<"\n\n enter your choice  "<<endl;
	cin>>mainchoice;
	system("cls");
	customer c1;
	cabservices c2;
	flightservices c3;
	railwayservices c4;
	booking   c5;
	bill c6;
	if(mainchoice==1)
	{
		cout<<"customer management  "<<endl;
		cout<<"1 for   new customer "<<endl;
		cout<<"2 for  old customer "<<endl;
		cout<<"enter your choice "<<endl;
		cin>>choose;
		system("cls");
		if(choose==1)
		{
			c1.getdetail();
		}
		else if(choose==2)
		{
			c1.showdetail();
		}
		else {
			cout<<"invalid input please enter valid input "<<endl;
			sleep(8);
			system("cls");
			menu();
		}
		cout<<" press 1 go to main menu "<<endl;
		cin>>go_menu;
		system("cls");
		if(go_menu==1)
		{
			menu();
		}
		else
		{
			menu();
		}
	}
	else if(mainchoice==2)
	{
		c2.cabdetails();
	}
	else if(mainchoice==3)
	{
		c3.flightdetail();
	}
	else if(mainchoice==4)
	{
		c4.traindetail();
	}
	else if(mainchoice==5)
	{
		c5.gethotel();
	}
	else if(mainchoice==6)
	{  
		c6.printbill();
		cout<<"your recipt is all ready printed "<<endl;
		cout<<" to display your recipt on the screen\n enter 1 or not  the go to main menu"<<endl;
		cin>>go_menu;
		if(go_menu==1)
		{
			system("cls");
			c6.showbill();
			cout<<" press 1 to go to main menu"<<endl;
			cin>>go_menu;
			system("cls");
		   if(go_menu==1)
		   {
		   	menu();
		   }
		   else{
		   	menu();
		   }
		}
		else
		{  system("cls");
			menu();
		}
	}
	else if(mainchoice==7)
	{
		cout<<"good bye baby "<<endl;
		
		system("cls");
	  exit(0);
	}
	else
	{
     	cout<<"invalid input! please choose right input "<<endl;
	
		system("cls");
		menu();
	}
}
int main()
{ 

  class manage shuru;
  
 return 0;	
}