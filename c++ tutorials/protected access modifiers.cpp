#include<iostream>
#include<string>
using namespace std;
class person
{
	//protected variables are also available to sub classes which inherits it.
	//whereas the private variables are not available.
protected:
		string name;
		public:
			void setname(string iname)
			{
				name=iname;
				
			}
			string getname()
			{
			 return name;
			}
	
};


class student:public person
{
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

james.display();
return 0;	
	
}
