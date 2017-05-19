#include<iostream>
#include<string>
using namespace std;

class father {
	
	protected:
		int height;
	public:
		
		father()//no need to define height object over here we are defining it in derived class
		{
			
			cout<<"constructer of father called"<<endl;
		
			
		}
};

class mother  {
	
	protected:
		string skincolour;
	public:
		
	mother()//no need to define skincolour object over here we are defining it in derived class
		{
			
			cout<<"constructer of mother called"<<endl;
			
			
		}
};




class child: public father,public mother
{
	
	public:
		
		child(int x,string colour):father(),mother()//we have here passed the values of height and colour to the father and mother classes using the inherited class child.
		{
			height = x;
			skincolour = colour;
			cout<<"child class constructor called"<<endl;
		}
		
		void display()
		{
			cout<<"height is "<<height<< "and the skin colour is "<<skincolour<<endl;
		}
};

int main()
{
	
	child james(19,"brown");
	james.display();
	return 0;
	
	
}
