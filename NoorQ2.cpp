/* Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
Default values for Pay_Rate Rs. 500 per hours)
*/



#include<iostream>
using namespace std;


class salary{
	public:
	
		string name;
		int h;
    	int salary;
    	int r=500;
   void calculate(int pay_rate,int hours)
{
	r=500;
	h=hours;
	cout<<"\nSalary of worker is : "<<r*h;
}

   void display()
   {
   	cout<<"\nSalary is "<<r*h;
   }
};

	
main()
{
		salary s1;
		string name;
		int hours;
    	float salary;
    	float pay_rate=500;
		cout<<"\nWorker name :";
		cin>>name;
		cout<<"\nTotal hours worked";
		cin>>hours;
		s1.calculate(500,hours);
		s1.display();
		
		
			
		
}