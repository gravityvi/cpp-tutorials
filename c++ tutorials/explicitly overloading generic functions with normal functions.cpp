#include<iostream>
using namespace std;
void whatyougot(int x);
template <typename T> void whatyougot(T x);
int main()
{
	whatyougot(23.456);
	whatyougot(22);
	whatyougot("james");
	return 0;
}

template <typename T> void whatyougot(T x){
	cout<< "inside what you got generic function"<<endl;
	cout<<"i got x"<<endl;
}

void whatyougot(int x){
	
cout<< "inside what you got normal function"<<endl;
	cout<<"i got x"<<endl;
}
