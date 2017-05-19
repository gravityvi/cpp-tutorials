#include<iostream>
#include<string>
using namespace std;
class human{
	//called base class.
	public:
		string name;
		int age;
		
		void setname(string iname){
			name=iname;
		}
		
		void setage(int iage)
		{
			age=iage;
		}
	
	
	
};

class student : public human{
	//by using public human we are passing all the non private stuff to class student as public.
	//this class is called a sub class.
	public:
		int id;
		
		void setid(int input)
		{
			id=input;
		}
		
		void introduce()
		{
			cout<<"Hi I am "<<name<<" and I am "<<age<<" years old ."<<endl;
			cout<<"my student id is "<<id<<endl;
		}
	
};




int main()
{
	student james;
	james.setname("james");
	james.setage(18);
    james.setid(201601120);
    james.introduce();jjk
    
	
	
	
	
	
	return 0;
}
