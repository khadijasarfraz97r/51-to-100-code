// Swap two numbers
#include<iostream>
using namespace std;
int main(){
	int x,y,temp;
	cout<<"Enter the value of x and y";
	cin>>x>>y;
	cout<<"before\n x="<<x<<"\n y="<<y<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"after=\n x="<<x<<"\n y="<<y<<endl;
	return 0;
}