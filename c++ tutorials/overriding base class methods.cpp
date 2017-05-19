#include<iostream>
#include<string>

using namespace std;
 
 
class person{

 public:
 	void introduce(){
 		cout<< "Hi I am a person"<<endl;
 		
	 }
	 
	 
};

class student: public person{
	public:
		
		void introduce(){
			cout << "Hi I am student and I am awesome"<<endl;
		}
};

int main()
{
	student james;
	james.introduce();//the introduce function of base class is overriden by derived class. 
	return 0;
}
