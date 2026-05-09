#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
	string a, loop;
	cout<<"Welcome to the Hisab Kitab Calculator.....";
	cout<<endl;
	do
	{
		cout<<"Hello User!, do you want to calculate: "; //Answer in yes or no
		cin>>a;
		if(a=="yes")
		{
			char operation;
			cout<<"The Hisaab Kitaab Calulator can calculate following things."<<endl;
			cout<<"a. Addition"<<endl;
			cout<<"b. Subtraction"<<endl;
			cout<<"c. Multiplication"<<endl;
			cout<<"d. Devision"<<endl;
			cout<<"e. Modulus"<<endl;
			cout<<"f. Power"<<endl;
			cout<<"g. Square Root"<<endl;
			cout<<endl;
			cout<<"From above operations, which one do you want to perform: ";
			cin>>operation;
			if(operation=='a'||operation=='A')
			{
				int n, num, sum=0;
				cout<<"How many numbers do you want to find the sum of?: ";
				cin>>n;
				for(int i=1; i<=n; i++)
				{
					cout<<"Enter the Integer no. "<<i<<" : ";
					cin>>num;
					sum+=num;
				}
				cout<<"The sum of the given values is: "<<sum;
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else if(operation=='b'||operation=='B')
			{
				float n1, n2;
				cout<<"Enter the first value here: ";
				cin>>n1;
				cout<<"Enter the second value here: ";
				cin>>n2;
				cout<<n1-n2;
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else if(operation=='c'||operation=='C')
			{
				int n;
				float num, mult=1;
				cout<<"How many numbers do you want to find the product of?: ";
				cin>>n;
				for(int i=1; i<=n; i++)
				{
					cout<<"Enter the value of no. "<<i<<" : ";
				cin>>num;
					mult*=num;
				}
				cout<<"\nThe product of given calues is: "<<mult;	
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else if(operation=='d'||operation=='D')
			{
				float n1, n2;
				cout<<"Enter the value of Devidend here: ";
				cin>>n1;
				cout<<"Enter the value of Devisor here: ";
				cin>>n2;
				cout<<"The final value after the devision of the two given numbers is: "<<n1/n2;
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else if(operation=='e'||operation=='E')
			{
				int n1, n2;
				cout<<"To find the reminder value after the devision of two numbers (MODULUS)"<<endl;
				cout<<"Enter the value of Devidend here: ";
				cin>>n1;
				cout<<"Enter the value of Devisor here: ";
				cin>>n2;
				cout<<"The reminder after the devision of the given two numbers is: "<<n1%n2;
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else if(operation=='f'||operation=='F')
			{
				float base, result;
				int exponent;
				cout<<"Enter the value that you want to apply the power operation on: ";
				cin>>base;
				cout<<"Upto which degree you want to raise the power: ";
				cin>>exponent;
				result=pow(base, exponent);
				cout<<endl;
				cout<<"The final answer after raising the degree of "<<base<<" to form 1 to "<<exponent<<" is: "<<result;
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else if(operation=='g'||operation=='G')
			{
				float n, result;
				cout<<"Enter the number you want to find the square root of: ";
				cin>>n;
				result=sqrt(n);
				cout<<endl;
				cout<<"The square root of "<<n<<" is: "<<result<<endl;
				cout<<endl;
				cout<<"Thanks for using the Hisab Kitab Calculator"<<endl;
			}
			else
			{
				cout<<"Kindly select one of 7 valid options";
			}
		}
		else
		{
			cout<<"INVALID ANSWER, kindly answer in yes or no";
		}
		cout<<"Do you want ot calculate again: ";
		cin>>loop;
	}while(loop=="yes"||loop=="Yes"||loop=="YES");
	cout<<endl;
	cout<<"Thanks for using the service if HISAB KITAB CALCULATOR   <3";
	getch();
	return 0; 
}
