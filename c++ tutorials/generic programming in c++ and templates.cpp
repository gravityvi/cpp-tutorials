#include<iostream>
using namespace std;

//template <typename identifier> ret_type fun_name(parameters)

template<typename myType> void display(myType a)
{
	cout<<"you have passed "<<a<<endl;
}
	
int main()
{
	display(5);
	
	return 0;
}
