/*Create a class named Fruit with a data member to calculate the number of fruits in a basket. Create two
other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.(Inheritance)*/

#include<iostream>
using namespace std;

class Fruit{
	public:
    int  mangoes;
	int  apples;
	
	void totalFruits(int a,int m)
	{
		cout<<"\nTotal number of fruits in a basket: "<<a+m;
	}
	
};

class apples:public Fruit
{
	public:
	int a;
	
	void setApple(int apples)
	{
	a=apples;
	cout<<"\nTotal apples in the basket are : "<<a;
	}
	
};

class mangoes:public Fruit
{ 
   public:
   	int m;
   	void setMango(int mangoes)
   	{
   	m=mangoes;
	cout<<"\nTotal mangoes in the basket are :"	<<m;
	   }
	
};

main ()
{    

    Fruit f;
	int m,a;
	cout<<"\nEnter total number of mangoes: ";
	cin>>m;
	cout<<"\nEnter total number of apples: ";
	cin>>a;
	apples a1;
	a1.setApple(a);
	mangoes m1;
	m1.setMango(m);
	f.totalFruits(a,m);
	
	
}