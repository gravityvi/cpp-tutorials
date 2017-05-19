#include<iostream>
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
//protected member of base class act as a protected member of the inherited class
//public member of the base class act as public member of derived class.
class student: public person{
	
	
	public:
		void display()
		{
			cout<<name<<endl;
		}
};

int main()
{
	
	student james;
	
	james.setname("james");
	james.display();
	
	return 0;
}
