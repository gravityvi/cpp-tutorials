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

template<typename E>
class node
{
	public :
		
		E data; //stores the data for the current node
		node *next; //points to the next node
		
		//constructors
		node()
		{
			E data=0;
		  node *next=NULL;
		}
			
};
template <typename E>
class linklist:public list<E>
{
	node<E>* firstelement;
	node<E>* lastelement;
	node<E>* currentelement;
	int sizeoflist;
	
	public:
		//constructors and destructors
		linklist()
		{
		//	node<E> *temp;
			firstelement=lastelement=currentelement=NULL;
		//	temp->next=NULL;
			sizeoflist=0;
		}
		~linklist()
		{
			for(currentelement=firstelement;firstelement!=NULL;firstelement=firstelement->next)
			{
				delete currentelement;
			}
		}
	void append(E data)
	{
		 node<E> *n=new node<E>();
		 n->data=data;
		if(sizeoflist==0)
		{
		   n->next=NULL;
				  firstelement=lastelement=n;
		  sizeoflist++;
  
		}
		else
		{
			lastelement->next=n;
			n->next=NULL;
			lastelement=n;
			sizeoflist++;
		}
	}
	
	E getdata()
	{
		return currentelement->data;
	}
	
	void insert(E data)
	{
		if(sizeoflist==0)
		{
			append(data);
		}
			if(currentelement==firstelement)
			{
					node<E> *n= new node<E>();
				n->data=data;
				n->next=firstelement;
				firstelement=n;
				sizeoflist++;
			}
		else
		{
			node<E> *n= new node<E>();
			node<E> *temp;
			temp=firstelement;
		
			while(temp->next!=currentelement)
			{
				temp=temp->next;
			}
			n->data=data;
			temp->next=n;
			n->next=currentelement;
			temp=temp->next;
			currentelement=temp;
			sizeoflist++;
			
		}
	}
	
	void nextelement()
	{
		currentelement->next;
	}
	
	int numberofelements()
	{
		return sizeoflist;
	}
	
	void previouselement()
	{
	
			node<E> *temp;
			temp=firstelement;
			while(temp->next!=currentelement)
			{
				temp=temp->next;
			}
			currentelement=temp;
	}
	
	E remove()
	{
		if(sizeoflist==0)
		{
			cout<<"nothing left to be removed"<<endl;
		}
		else
		{
				node<E> *temp;
			temp=firstelement;
			if(currentelement==firstelement)
			{
				firstelement=firstelement->next;
				currentelement=firstelement;
			}
			while(temp->next!=currentelement)
			{
				temp=temp->next;
			}
			
			temp->next=currentelement->next;
			currentelement=temp;
			sizeoflist--;
			
		}
	}
	
	void setlistlocationtoend()
	{
		currentelement=lastelement;
	}
	void setlistlocationtostart()
	{
		currentelement=firstelement;
	}
	int settonewlocation(int location)
	{
		int i;
		currentelement=firstelement;
		for(i=0;i<location-1;i++)
		{
			currentelement=currentelement->next;
		}
		return currentelement->data;
	}
	void clear()
	{
		node<E> *temp=firstelement;
		while(temp!=lastelement)
		{
			delete temp;
		}
			firstelement=lastelement=currentelement=new node<E>;
			sizeoflist=0;
		
	}
	void display()
	{
		node<E> *temp;
		temp=firstelement;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	
};

int main()
{
	linklist<int> james;
james.append(1);
	james.append(2);
	james.setlistlocationtostart();
	james.insert(0);
	james.setlistlocationtostart();
	james.insert(-1);
	james.setlistlocationtoend();
	james.remove();
	james.display();
	
	return 0;
}
