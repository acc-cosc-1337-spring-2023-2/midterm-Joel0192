#include "question2.h"
#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main()
{
    int a, b;
    auto result = 0;
    auto option = 0;
    string choice;

    do
    {
        cout<<"1-Get GCD"<<"\n";
        cout<<"2-Exit"<<"\n";
        cout<<"Please enter an option:";
        cin>> option;
        
        if(option == 1)
        {
            cout<<"Enter two integers."<<"\n";
            cout<<"#1: ";
            cin>>a;
            cout<<"\n"<<"#2: ";
            cin>>b;
            
            result = find_gcd(a, b);

            if(result >= 1 || result <= 200)
            {
                cout<<"The gcd is: "<< result <<"\n";
            }
            else
            {
                cout<<"Out of range, please try again."<<"\n\n";
            }
        }
        else if(option == 2)
        {
            cout<<"are you sure you want to exit?"<<"\n";
			cout<<"Enter y or n: ";
			cin>>choice;
			if(choice == "y"|| choice == "Y")
			{
				
				cout<<"Thank You!"<<"\n";
				
			}
			else
			{
				cout<<"\n";
			}
        }
        else
		{
			cout<<"Invalid option, Try again"<<"\n\n";
		}
    

    }while(choice != "y" && choice != "Y");

    


    return 0;
}