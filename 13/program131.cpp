#include<iostream>
using namespace std;
class Test
{
	private:
		int n;
	public:
		void in() 
		{
			cout<<"Enter a number:";
			cin>>n; 				
		}
		
		void out() 
		{
			cout<<"The value of n="<<n;	
		}
};

int main() 
{
	system("cls");
	Test obj;
	obj.in();
	obj.out();
	getchar();
	return 0;
}

