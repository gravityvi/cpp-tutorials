#include<iostream>
using namespace std;

template <typename E,typename T> void display(E x,T y){
	cout<<x<<" is "<<y<<" years old."<<endl;
}

int main()
{
	display("ravi",26);
	return 0;
}
