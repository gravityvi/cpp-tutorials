#include<iostream>
#include<string>
using namespace std;

class person{//class which contains one or more pure virtual functions then this class is called abstract class.
	public:
		virtual void introduce()=0;//whichever class which derives from this class has to overide this function as it is pure virtual function
		
			
		
};

void person :: introduce(){
	cout<<"hi form person"<<endl;
}

class student : public person{
	public:
		void introduce(){
			cout<<"hi from student"<<endl;
			person :: introduce();
		}
		
};


int main()
{
	person ravi;//we cannot declare objects for abstract class.
	student james;
	james.introduce();
	return 0;
}
