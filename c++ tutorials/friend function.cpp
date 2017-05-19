#include<iostream>
#include<string>
using namespace std;
class human
{
private:
string name;
int age;
public:
	human(string iname,int iage)
	{
		name=iname;
		age=iage;
	}
 void tellme()
 {
 	cout<<name<<endl<<age<<endl;
	 }	
	 
	


friend void display(human man);//funtion can use the variables of class human.
};
int main()
{
	human james("james",24);
	display(james);
	
	return 0;
}

void display(human man){

cout<<man.name<<endl<<man.age<<endl;
}
