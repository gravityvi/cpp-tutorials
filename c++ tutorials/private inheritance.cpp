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
		void namesetter(string iname)
		{
			setname(iname);
		}

		void display()
		{
			
		cout<<name<<endl;
			}	
};

class gstudent: public student
{
	
	public:
		void gsetname(string iname)
		{
			namesetter(iname);
		}
};

int main()
{
	
gstudent james;
james.gsetname("james");
james.display();

}
