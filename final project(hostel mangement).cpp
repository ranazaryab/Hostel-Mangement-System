#include<iostream>
#include<ctime>
#include<cstring>
using namespace std;
void line();
void detail();
int main()
{
	int a;
	mainhome:
	cout<<"\n\n\n\t\t===============*WELCOME TO LAHORE GARRISON UNIVERSITY HOSTEL*===============\n\n\n\n\n\n\n";
	cout<<"\t\t\t=================================================================="<<endl;
	cout<<"\t\t\t||                                                         \t||"<<endl;
	cout<<"\t\t\t||   =<Chose any option given below for hostel information>=\t||\n";
	cout<<"\t\t\t==================================================================\n\n\n\n\n";
	cout<<"\t\tPRESS:-\n";
	cout<<"\t\t\t 1.For Rooms Information."<<endl;
	cout<<"\t\t\t 2.For Food Information."<<endl;
	cout<<"\t\t\t 3.For Room Service."<<endl;
	cout<<"\t\t\t 4.FOR Bills Information."<<endl;
	cout<<"\t\t\t 5.FOR Booking ."<<endl;
	cout<<"\n\n\t\t================================================"<<endl;
	cin>>a;
	system("cls");
	cout<<"\n YOU ENTERED  '"<< a <<"'\n RESULT OF YOUR ENTERED OPTION IS=\n\n\n";
	
	switch(a)
	{
	
		case 1:
			 {
			 	cout<<"\t\t\t=====*SELECT THE ROOM OF YOUR CHOICE*=====\n\n\n";
			    char choice;
			    home:
			 	cout<<"\n  1. *BUSSINESS Class Rooms*";
			 	cout<<"\n  2. *MODERATE Class Rooms*";
			 	cout<<"\n  3. *ECONIMIC Class Room*\n";
			 	cout<<"\n ENTER OPTION FROM ABOVE="<<endl;
			 	cin>>choice;
			 	system("cls");
			 	cout<<"\n YOU ENTERED "<< choice <<endl;
			 	if(choice=='1')
			 	{
			 		cout<<"\n\n[Rooms Information]\n\n BUSSINESS CLASS ROOMS. \n\n There are well furnished,cleaned Rooms available in this Type\n\n";
			 		cout<<"THE NUMBER OF TOTAL ROOMS IN THIS TYPE ARE=10 \n";
			 		cout<<"[Students information]\n==There are 20 spaces available for students in this type:"<<endl;
			 		cout<<"Charges of this Rooms is= Rs:20000 per room on per month";
			 		line();
			 		int opt;				
				 	cout<<"\n Due YOU WANT TO return TO Room info PAGE PREES 1.\n\nOr you want to go to main page press 2.\n\nOr Press 3 to move to the Book menue.\n\n OR IF YOU want TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto home;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto mainhome;
					 }
					 else if(opt==3)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
				 }
		 		 else if(choice=='2')
				 {
				 	cout<<"\n\n[Rooms information]\n\n MODERATE CLASS ROOMS \n\n There are well rooms available in this Type\n\n";
				 	cout<<"THE NUMBER OF TOTAL ROOMS IN THIS TYPE ARE=10\n";
				 	cout<<"[Students information]\n==There are 20 spaces available for students:"<<endl;
				 	cout<<"Charges of this Rooms is= Rs:15000 per room on per month";
				 	line();
				 	int opt;				
				 	cout<<"\n Due YOU WANT TO return TO Room info PAGE PREES 1.\n\nOr you want to go to main page press 2.\n\nOr Press 3 to go to book menue.\n\n OR IF YOU want TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto home;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto mainhome;
					 }
					 else if(opt==3)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
				 }
				 else if(choice=='3')
				 {
				 	cout<<"\n[Room information]\n\n ECONOMIC CLASS ROOMS. \n\n There are cleaned rooms available in this Type\n\n";
				 	cout<<"THE NUMBER OF TOTAL ROOMS IN THIS TYPE ARE=10 \n";
				 	cout<<"[students information]\n==There are 30 spaces available for students in this type of rooms"<<endl;
				 	cout<<"charges of this rooms is= Rs:10000 per room on per month";
				 	line();
				 	int opt;				
				 	cout<<"\n Due YOU WANT TO return TO Room info PAGE PREES 1.\n\nOr you want to go to main page press 2.\n\nOr Press 3 to go to book menue.\n\n OR IF YOU want TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto home;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto mainhome;
					 }
					 else if(opt==3)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
					 }
				 	else
				 	{
				 		cout<<"Please select the correct option";
				 	goto home;
				 	}
				 	
                    int opt;				
				 	cout<<"\n IF YOU WANT TO GO TO MAIN PAGE PREES 1.\n\n OR IF YOU TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto mainhome;
					 }
					 else 
					 {
					 	exit(1);
					 }
				 	break;
				 	
				 }
				
		 	case 2:
			 {
				cout<<"=======Select the Food on your choice=======\n";
				string food;
				go:
				cout<<"\n ENTER ANY OPTION BELOW TO GET DETAIL OR CHARGES:"<<endl;
				cout<<"1. mor for *breakfast Only*\n2. eve for *Lunch*\n3. night for *Dinner*"<<endl;
				cout<<"\n PLEASE ENTER YOUR CHOICE=";
				cin>>food;
				system("cls");
				cout<<"\n YOU ENTERED= "<<food<<"\n\n";
				if(food=="mor"||food=="MOR")
				{
				    cout<<"[food information]\n===There are tasty foods available\n";
				    cout<<"Charges of  only morning food is Rs:1000 per head  per month";
				    line();
				    int opt;				
				 	cout<<"\n Due YOU WANT TO return TO food option PAGE PREES 1.\n\nOr you want to go to main page press 2.\n\n Press 3 to go to book menue.\n\n OR If YOU want TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto go;
					 }
					 else if (opt==2)
					 {
					 	system("cls");
					 	goto mainhome;
					 }
					 else if(opt==3)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
				}
				else if(food=="eve"||food=="EVE")
				  {
				    cout<<"[food information]\n===There are tasty food available\n";
					cout<<"charges of eveing food is = Rs:1000 per head per month";
					line();
					int opt;				
				 	cout<<"\n Due YOU WANT TO return TO food option PAGE PREES 1.\n\nOr you want to go to main page press 2.\n\n Press 3 to go to book menue.\n\n OR IF YOU want TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto go;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto mainhome;
					 }
					 else if(opt==3)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
				 }
				else if(food=="night"||food=="NIGHT")
				 {
					cout<<"[food information]\n===There are tasty food available\n";
					cout<<"charges of night food is = Rs:1500 per head per month";
					line();
					int opt;				
				 	cout<<"\n Due YOU WANT TO return TO food option PAGE PREES 1.\n\n Or you want to go to main page press 2.\n\nPress 3 to go to book menue.\n\n OR IF YOU want TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto go;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto mainhome;
					 }
					 else if(opt==3)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
				    }
			    else
					{
					cout<<"please select the correct option";
					goto go;
					}
					break;
					 }
					 
			case 3:
			 {
			 	cout<<"=======THERE ARE TWO SERVICES AVAILABLE=======\n";
			 	 service:
				 int services;
			 	cout<<"Press:\n 1.TO GET INFORMATION:";
			 	cin>>services;
			 	if(services==1)
			 	{
			 		cout<<"[service information]\n=== Home Cleaning Services===\n";
			 		cout<<"Charges of home service is Rs:1000 for one Room  per month";
			 		line();
				 	cout<<"[dress information]\n==Dress Cleaning SERVICE==\n";
				 	cout<<"Charges of dress clean service is Rs:1500 for one month";
				 	line();
				 } 
				 else
				 {
				 	cout<<"Please Enter 1:";
				 	goto service;
				 }
				 int opt;				
				 	cout<<"\n IF YOU WANT TO GO TO MAIN PAGE PREES 1.\n\n Press 2 to go to book menue.\n\nOR IF YOU TO EXIT  PRESS Any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto mainhome;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
				 break;
			 }
			 case 4:
			  {
			  	cout<<"=======There are different bills information and charges.========\n";
			  	
			  		cout<<"\n\t ELECTRICITY BILL.";
			  		cout<<"\n\t SUI GAS BILL.";
			  		cout<<"\n\t WATER BILLS.";
			  		cout<<"\n\t NET BILL(you can use free wifi whole month).";
			  		cout<<"\n\n\n\n IT'S COMPULSARY TO PAY '1500' FOR ALL THESE BILLS.";
			  		
			  		int opt;				
				 	cout<<"\n IF YOU WANT TO GO TO MAIN PAGE PREES 1.\n\n Press 2 to go to book main.\n\n OR IF YOU TO EXIT  PRESS any other key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto mainhome;
					 }
					 else if(opt==2)
					 {
					 	system("cls");
					 	goto bookmain;
					 }
					 else 
					 {
					 	exit(1);
					 }
					 break;
		      }
		      case 5:
		      	{
		      		goto bookmain;
		      		break;
				  }
         default:
         	{
         		cout<<"\n THIS OPTION IS NOT AVAILABLE IN MENUE "<<endl;
         		cout<<"\n PLEASE ENTER THE CORRECT OPTION :";
			 }
			 
			 int opt;				
				 	cout<<"\n IF YOU WANT TO GO TO MAIN PAGE PREES 1.\n\n OR IF YOU TO EXIT  PRESS any key.\n press:";
				 	cin>>opt;
				 	if(opt==1)
				 	{
				 		system("cls");
				 		goto mainhome;
					 }
					 else 
					 {
					 	exit(1);
					 }
	}
	bookmain:
	int date,month,year;
	time_t t=time(NULL);
	tm*timePtr=localtime(&t);
	date=timePtr->tm_mday;
	month=timePtr->tm_mon+1;
	year=timePtr->tm_year+1900;
	cout<<"\n DATE:"<<date<<"\n MONTH:"<<month<<"\n YEAR:"<<year;
	if(month==5)
	{
		cout<<"\n THIS IS OCCASIONAL MONTH.\n ROOMS NOT AVAILABLE:";
	}
	else
	{	
	cout<<"\n YOU ARE GOING TO RESERVE YOUR ROOM IN OUR HOSTEL:\n";
	cout<<"\n WE NEED YOUR SHORT DETAIL:\n";
	detail();
	system("pause");
	system("cls");
	int b[6]={0,0,0,0,0,0};
	int choice,charges=0;
	cout<<"\n WHICH ROOM YOU WANT TO BOOK FOR YOU:"<<endl;
	cout<<"\n THERE ARE DIFFERENT OPTIONS TO CHOICE THE ROOM OR SERVICES YOU WANT TO INCLUDE:"<<endl;
	book:
	cout<<"\n\t PRESS 1 for Bussiness Class Rooms :\n\t Press 2 For Moderate Class Rooms:\n\t Press 3 FOr Economic Class Rooms:"<<endl;
    cout<<"\n\t Press 4 for Bussiness Class Rooms Without mess but with all other things:\n\t Press 5 for Moderate Class Rooms Without mess but with all other things:\n\t Press 6 for Economic Class Rooms Without mess but with all other things:"<<endl;
	cin>>choice;
	system("cls");
	switch(choice)
	{
		case 1:
			{
				int choice;
				b[0]++;
				if(b[0]>10)
				{
					cout<<"\n ROOMS NOT AVAILABLE\n";
				}
				else
				{
				cout<<"\n WHICH FOOD YOU WANT TO INCLUDE:\n1.FOR BREAKFAST\n2.FOR LUNCH\n3.FOR DINNER.\n4.to include all.\n";
				cin>>choice;
				system("cls");
				if(choice==1)
				{
				cout<<"\n\t Rent of Room is 20000Rs.\n\t Bill For Food is 1000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills Rs1500Rs.\n";		
				charges=charges+20000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==2)
			   {
			   	cout<<"\n\t Rent of Room is 20000Rs.\n\t Bill For Food is 1000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+20000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==3)
			   {
			   	cout<<"\n\t Rent of Room is 20000Rs.\n	Bill For Food is 1000Rs. \n 	For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+20000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==4)
			   {
			   	cout<<"\n\t Rent of Room is 20000Rs.\n\t Bill For Food is 4000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+20000+4000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else
			   {
			   	cout<<"\n PLEASE ENTER RIGHT OPTION:";
			   goto book;
			   }
		    }
				break;
	}
			case 2:
				{
					int choice;
					b[1]++;
					if(b[1]>10)
					{
						cout<<"\n ROOMS NOT AVAILABLE\n";
					}
					else
					{
					
					cout<<"\n WHICH FOOD YOU WANT TO INCLUDE:\n1.FOR BREAKFAST\n2.FOR LUNCH\n3.FOR DINNER.\n4.to include all.\n";
				cin>>choice;
				system("cls");
				if(choice==1)
				{
				cout<<"\n\t Rent of Room is 15000Rs.\n\t Bill For Food is 1000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+15000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==2)
			   {
			   	cout<<"\n\t Rent of Room is 15000Rs.\n	Bill For Food is 1000Rs. \n 	 For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+15000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==3)
			   {
			   	cout<<"\n\t Rent of Room is 15000Rs.\n	Bill For Food is 1000Rs. \n 	For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+15000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==4)
			   {
			   	cout<<"\n\t Rent of Room is 15000Rs.\n\t Bill For Food is 4000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+15000+4000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else
			   {
			   	cout<<"\n PLEASE ENTER RIGHT OPTION:";
			   goto book;
			   }
                 break;			
			}
	}
				
			case 3:
				{
				int choice;
				b[2]++;
				if(b[2]>10)
				{
					cout<<"\n ROOMS NOT AVAILABLE\n";
				}
				else
				{
				cout<<"\n WHICH FOOD YOU WANT TO INCLUDE:\n1.FOR BREAKFAST\n2.FOR LUNCH\n3.FOR DINNER.\n4.to include all.\n";
				cin>>choice;
				system("cls");
				if(choice==1)
				{
				cout<<"\n\t Rent of Room is 10000Rs.\n\t Bill For Food is 1000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+10000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==2)
			   {
			   	cout<<"\n\t Rent of Room is 10000Rs.\n\t Bill For Food is 1000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+10000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==3)
			   {
			   	cout<<"\n\t Rent of Room is 10000Rs.\n	Bill For Food is 1000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";		
				charges=charges+10000+1000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else if(choice==4)
			   {
			   	cout<<"\n\t Rent of Room is 10000Rs.\n\t Bill For Food is 4000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs\n";		
				charges=charges+10000+4000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			   }
			   else
			   {
			   	cout<<"\n PLEASE ENTER RIGHT OPTION:";
			   goto book;
			   }
				break;
			}
	}
				
		 case 4:
		 	{
		 		b[3]++;
		 		if(b[3]>10)
		 		{
		 			cout<<"\n ROOMS NOT AVAILABLE\n";
				 }
				 else
				 {
		 		cout<<"\n\t Rent of Room is 20000Rs.\n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";
		 		charges=charges+20000+1000+1500+1500;
		 		cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
		 		cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			 goto book;
		        }
		break;
			 }
		case 5:
			{
				b[4]++;
				if(b[4]>10)
				{
					cout<<"\nROOMS NOT AVAILABLE\n";
				}
				else
				{
				cout<<"\n\t Rent of Room is 15000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs.\n";
				charges=charges+15000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			goto book;
			break;
			
		}
			}
		case 6:
			{
				b[5]++;
				if(b[5]>10)
				{
					cout<<"\n ROOMS NOT AVAILABLE\n";
				}
				else
				{
					
				cout<<"\n\t Rent of Room is 10000Rs. \n\t For HOME AND LAUNDARY SERvices 2500Rs.\n\t For other bills 1500Rs\n";
				charges=charges+10000+1000+1500+1500;
				cout<<"\n\t IN CASE OF ANY VOILATION EXTRA FINE WILL INCLUDE:\n";
				cout<<"\n\t YOUR CHARGES PER MONTH ARE="<<charges<<"Rs.";
			goto book;
			break;
			
		}
			}
		default:
			{
				cout<<"\n INVALID INPUT";
				cout<<"\n Please Enter the correct option";
				break;
			}
     goto book;
	}
    cout<<"\n";
    line();
	system("pause");
	system("cls");
	goto mainhome;
}
	
	return(0);
	
}
void line()
{
	for(int i=0;i<=1;i++)
	{
	cout<<"\n=============================================================================\n";
    }
}
void detail()
{
	string name,iname,num,gender;
	cout<<"\n ENTER YOUR NAME"<<endl;
	name:
	cin>>name;
	if((name>"a")||(name>"A"))
	{
		cout<<"\n";
	}
	else
	{
		cout<<"\n INVALID INPUT\n ENTER YOUR NAME AGAIN:\n";
		goto name;
	}
	cout<<"\n ENTER YOUR GENDER:";
	gen:
	cin>>gender;
	if(((gender=="male")||(gender=="female"))||((gender=="MALE")||(gender=="FEMALE")))
	{
		cout<<"\n";
	}
	else
	{
		cout<<"\n INVALID INPUT\n PLEASE ENTER AGAIN:";
		goto gen;
	}
	cout<<"\n ENTER YOUR INSTITUTE NAME:";
	iname:
	cin>>iname;
	if((iname>"a")||(iname>"A"))
	{
		cout<<"\n";
	}
	else
	{
		cout<<"\n INVALID INPUT\n ENTER INSTITUTE NAME AGAIN:\n";
		goto iname;
	}
	cout<<"\n ENTER YOUR MOBILE NUMBER:";
	numb:
	cin>>num;
	if(num>"a")
	{
		cout<<"\n INVALID INPUT\n PLEASE ENTER AGAIN:";
		goto numb;
	}
	else
	{
		cout<<"\n";
	}
}
	
 
