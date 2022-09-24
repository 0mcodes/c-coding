//program to calculate area of triangle using parameterised constructor
#include<iostream>
using namespace std;
class triar
{
	private:
		float b,h,ar;
	public:
		triar(float x,float y);
	void output();
};
triar::triar(float x,float y)
{
	b=x;
	h=y;
}
void triar::output()
{
	ar=0.5*b*h;
	cout<<"Area of triangle = "<<ar;
}
int main()
{
	triar obj(3,4);
	obj.output();
    return(0);
}
