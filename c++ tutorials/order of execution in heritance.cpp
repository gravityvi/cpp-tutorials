#include<iostream>
#include<string>
using namespace std;

class person{
	public:
	person()
	{
		cout<<"constructor of the person class called."<<endl;
	}
	
	~person()
	{
		cout<<"destructor of the person class called."<<endl;
		
	}
	
};


class student:public person{
	
	public:
		
		student()
		{
			cout<<"constructor of the student class called."<<endl;
		}
		
		~student()
		{
			
			cout<<"destructor of the student class called."<<endl;
		}
	
};

int main()
{
	student james;
	
	
	
	return 0;
}
