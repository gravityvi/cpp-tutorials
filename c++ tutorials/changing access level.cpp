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
class student:private person
{
	public:
		
		person :: name ;  //this name is now gonna act as a public member of the derived class.
		//person :: setname;
		void namesetter(string iname)
		{
			setname(iname);
		}

		void display()
		{
			
		cout<<name<<endl;
			}	
};



int main()
{
	student james;
	james.namesetter("james");
	james.display();
return 0;

}
