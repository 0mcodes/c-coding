// Copy constructor
#include<iostream>
using namespace std;
class Copy
{
	private:
		int x,id;
	public:
		void display();
	    void init(int x);
}obj1;
void Copy::init(int x)
{
	id=x;
}
void Copy::display()
{
	cout<<"Value is:"<<id<<"\n";
}
int main()
{
	obj1.init(25);
	obj1.display();
	
	Copy obj2(obj1);
	obj2.display();
	return(0);
}
