#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
	string name;
	
	public:
		
		void setname(string iname)
		{
			
			name=iname;
			
	    }
	    
};


class student : protected person
{
	
	public:
		
		void display()
		{
			
			cout<<"hi my name is"<<name<<endl;
		}
		
		void setstudentname(string iname)
		{
			setname(iname);
		}
};
	
	
	


int main()
{
	
	student james;
	james.setstudentname("james");
	james.display();
}

