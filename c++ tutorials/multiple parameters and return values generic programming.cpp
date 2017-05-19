#include<iostream>
using namespace std;

template<typename E> void display(E x,E y)
{
	cout<<x<<" and "<<y<<endl;
}

template <typename T> T maxi(T x,T y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
	
}

int main()
{
	 
	display("ravi","ritesh");

	cout<<maxi(1.44,1.42);
	return 0;
}
