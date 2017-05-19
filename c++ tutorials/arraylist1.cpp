#include<iostream>
using namespace std;
//abstract class list
template <typename E> class list
{
	public:
		
		//constructors and destructors 
		list(){}
		virtual ~list(){}
		
		//return the number of the elements in the list 
		virtual int numberofelements () =0;
		
		//return the location of current elements
		virtual  E getdata() =0;
		
		//clear all the data of current element 
		virtual void clear() = 0;
		
		//inset a data in the list at the current location
		virtual void insert( E data) = 0;
		
		//insert a data in the end of the list 
		virtual void append( E data)=0;
		
		//delete a data at the current location
		virtual E remove() =0;
		
		//set the current location to the start of the list 
		virtual void setlistlocationtostart()=0;
		
		//set the current location to the end of the list
		virtual void setlistlocationtoend()=0;
		
		//set the current location to the left
		virtual void previouselement()=0;
		
		//set the current location to element right 
		virtual void nextelement()=0;
		
		//set current location to a new location
		virtual int settonewlocation(int location)=0;
		
		
	
};

template<typename E>class arraylist:public list<E>
{
	int arraysize; //maximum size of the list
	int currentsize; //number of data elements stored
	int currentlocation; //location pointer of the list
	E* dataarray; // array for storing data
	
	public:
		//constructors 
		arraylist(int size)
		{
			arraysize=size;
			currentsize=currentlocation=0;
			dataarray=new E[arraysize];
		}
		~arraylist()
		{
			delete [] dataarray;
		}
		int numberofelements ()
		{
			return currentsize;
		}
		 E getdata()
		{
			return dataarray[currentlocation];
		}
		
		void clear()
		{
			dataarray[currentlocation]=0;
		}
		void insert( E data)
		{
			int i;
			if(currentsize==arraysize)
			{
				cout<<"no rooms left for data"<<endl;
			}
			if(currentsize==0)
			{
				append(data);
				currentsize++;
			}
			else
			{
				for(i=currentsize;i>currentlocation;i--)
				{
					dataarray[i]=dataarray[i-1];
				}
				dataarray[currentlocation]=data;
				currentsize++;
			}
			
			
		}
		void append( E data)
		{
			dataarray[currentsize]=data;
			currentsize++;
			
		}
		E remove(){
			int j;
			if(currentsize==0)
			{
				cout<<"no data available for deletion"<<endl;
			}
			else
			{
				for(j=currentlocation;j<currentsize;j++)
				{
					dataarray[j]=dataarray[j+1];
				}
				currentsize--;
			}
		}
		
		void setlistlocationtostart()
		{
			currentlocation=0;
			
		}
		
		void setlistlocationtoend()
	{
		currentlocation=currentsize;
	}
	void previouselement()
	{
		if(currentlocation==0)
		{
			cout<<" no previous element"<<endl;
			}	
			else
			currentlocation--;
			
		
	}
	
	void nextelement()
	{
		if(currentlocation==currentsize)
		{
			cout<<"no next element available"<<endl;
		}
		else
		currentlocation++;
		
	}
	int settonewlocation(int location)
	{
		if(location>0&&location<currentsize)
		{
			currentlocation = location;
			return currentlocation;
		}
		else 
		return 0;
	}
	void display()
	{
		int k;
		for(k=0;k<currentsize;k++)
		{
			cout<<dataarray[k]<<" ";
		}
		cout<<endl;
	}
};

int main()
{
	int i;
	arraylist<int> A(100);
	A.append(1);
	A.append(2);
A.append(3);
A.append(4);
A.append(5);
A.append(6);
A.append(8);
A.append(9);
A.insert(0);
A.remove();
A.display();
	return 0;
}

