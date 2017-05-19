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
			person::introduce();//this is for calling base class function.
		}
};

int main()
{
	student james;
	james.introduce();
	james.person::introduce();//by writing these we can acesss the base class overriden functions.
	return 0;
}
