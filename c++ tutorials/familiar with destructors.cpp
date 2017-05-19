#include<iostream>
#include<string>
using namespace std;
class human{
	public:
		
		string *name;
		int *age;
	public:
		human(string iname,int iage)
		{
			name = new string;
			age = new int;
			*name = iname;
			*age = iage;
	}
	void display()
	{
		cout<<"Hi my name is "<<*name<<". I am "<<*age<<" years old"<<endl;
	}
		
		~human()
		{
		*name="noname";
		*age=0;
			
			cout<<"all memories are released"<<endl;
		}
};
	int main()
	{
		human *ravi;
		ravi=new human("ravi",18);
		ravi->display();
		delete ravi;
		ravi->display();
		
		return 0;
		
	}
			

