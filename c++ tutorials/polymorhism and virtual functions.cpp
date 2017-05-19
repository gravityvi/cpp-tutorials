#include<stdio.h>
#include<iostream>

using namespace std;
class person
{
	public :
	virtual void introduce(){
		cout<<"hey from person"<<endl;
		
	}
};

class student:public person{
	public:
		
		void introduce(){
			cout<<"hey from student"<<endl;
		}
};

class farmer:public person{
	
   	void introduce(){
			cout<<"hey from farmer"<<endl;
		}
	
};

void whosThis(person &P){
	P.introduce();
}

int main()
{
	farmer james;
	student ravi;
	whosThis(james);
	whosThis(ravi);
	return 0;
}
