#include<iostream>
using namespace std;

int main()
{
	int i,n,updown=0,res=0;
	char ch;
	cout<<"enter n:";
	cin>>n;
	 for(i=0;i++<n; )
	 {
	 	cin>>ch;
	 	if(ch=='U')
	 	updown++;
	 	else updown--;
	 	if(updown == 0 && ch =='U')
	 	res++;
	 }
	 cout<<res<<endl;
	 return 0;
}
