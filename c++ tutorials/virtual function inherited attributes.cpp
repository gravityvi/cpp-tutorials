#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		
		virtual void introduce()
		{
			cout<<"hi from person"<<endl;
		}
};

class student : public person {
		void introduce()
		{
			cout<<"hi from student"<<endl;
		}
	
};

class gstudent:public student
{
	public:
	//	void introduce()
	//	{
	//		cout<<"hi from graduate student"<<endl;
	//	}
};

void whosthis(person &p)
{
	p.introduce();
}

int main()
{
	person james;
	student ravi;
	gstudent arti;
	
	whosthis(james);
	whosthis(ravi);
	whosthis(arti);
	return 0;
}
