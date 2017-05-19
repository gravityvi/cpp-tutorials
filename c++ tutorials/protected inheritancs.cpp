#include<iostream>
#include<string>
using namespace std;


class person
{
	protected:
string name;	
	
	public:
		
		void setname(string iname){
			
			name=iname;
		}
};

class student : protected person{
	
	public: 
	void display()
	{
		cout<<name<<endl;
	}
	
	void namesetter(string iname)
	{
		setname(iname);
	}
};
int main()
{
	
	student ravi;
	ravi.setname("james");
	ravi.display();
}
