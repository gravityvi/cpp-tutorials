#include<iostream>
#include<string>
using namespace std;

class father 
	{
	
	public:
		
		int height;
		
		void askfather()
		{
			cout<<"I am your father ask me what you want?"<<endl;
		}
	};
	
class mother
	{
	
	public:
		
		string skincolour;
		
		void askmother()
		{
			cout<<"I am your father ask me what you want?"<<endl;
		}
	};
	
class child : public father, public mother{
	
	public:
		
		void askparents(){
			cout<<"I am asking my parents"<<endl;
		}
		void setcolourheight(string icolour,int iheight)
		{
			
			height=iheight;
			skincolour=icolour;
		}
		void display()
		{
			cout<<"height is "<<height<<"and the colour is "<<skincolour<<endl;
		}
};

int main()
{
	child james;
	james.setcolourheight("white",6);
	james.display();
	james.askfather();
	james.askmother();
	return 0;
}

