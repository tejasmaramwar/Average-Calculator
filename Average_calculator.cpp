#include<iostream>
using namespace std;

class average_calculator
{
	public:
			double choice;
			double choice1;
			double price, price1;
			double distance, totalfuel, average;
			double fill;
			double avg,cost,lit;
		void vehicletype()
		{
			cout<<"\n";
			cout<<"Enter type of vehicle \n";
			cout<<"1. Bike \n2. Car \n";
			cout<<"Enter your choice: ";
			
			cin>>choice;
		}
		
		void fueltype()
		{
			cout<<"\n";
			cout<<"Enter type of fuel that your vehicle needs\n";
			cout<<"1. Petrol \n2. Diesel \n";
			cout<<"Enter your choice: ";
			
			cin>>choice1;
		}
		
		void currentprice()
		{
			cout<<"\n";
			cout<<"Enter the current price of fuel \n";
			if(choice1 == 1)
			{
				cout<<"Petrol Price: ";
				cin>>price;
			}
			else
			{
				cout<<"Diesel Price: ";
				cin>>price1;
			}
		}
		
		void totalaverage()
		{
			cout<<"\n";
			cout<<"Enter total distance travelled by the vehicle: ";
			cin>>distance;
			cout<<"\n";
			cout<<"Enter total amount of fuel filled in the vehicle: ";
			cin>>fill;
			
			if(choice1 == 1)
			{
				totalfuel = fill/price;
				cout<<"The total amount of fuel filled in vehicle(in litres) is: "<<totalfuel<<endl;
			}
			else
			{
				totalfuel = fill/price1;
				cout<<"The total amount of fuel filled in vehicle(in litres) is: "<<totalfuel<<endl;
			}
			
			if(choice1 == 1)
			{
				average = (distance * price) / fill;
				cout<<"Average of your vehicle is: "<<average<<endl;
			}
			else
			{
				average = (distance * price1) / fill;
				cout<<"Average of your vehicle is: "<<average<<endl;
			}
			
		}
		
		void fuelcost()
		{
			cout<<"\n";
			cout<<"Enter the average of the vehicle: ";
			cin>>avg;
			
			cout<<"Enter the total distance to be travelled by your vehicle(in kms): ";
			cin>>distance;
			
			vehicletype();
			fueltype();
			currentprice();
			
			if(choice1 == 1)
			{
				lit = distance / avg;
				cost = lit * price;
				cout<<"The total amount of money needed to travel is "<<cost<<endl;
			}
			else
			{
				lit = distance / avg;
				cost = lit * price1;
				cout<<"The total amount of money needed to travel is: "<<cost<<endl;
			}
		}
		
};

int main()
{
	average_calculator a1;
	int i = 1, selection;
	while(i = 1)
	{
		cout<<"Enter 1 to find AVERAGE\n";
		cout<<"Enter 2 to find FUEL COST\n";
		cin>>selection;
		switch(selection)
		{
			case 1:
				a1.vehicletype();
				a1.fueltype();
				a1.currentprice();
				a1.totalaverage();
				break;
				
				
			case 2:
				a1.fuelcost();
				break;
			
			default: 
				cout<<"Invalid choice!";
				break;
				
		}
		
		
		i++;
	}
}




































