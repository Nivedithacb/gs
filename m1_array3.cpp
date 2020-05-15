#include<iostream>
using namespace std;

int main()
{
	int x;
	int n;
	cout<<"enter no of students:";
	cin>>n;
	cout<<"enter students marks:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>=38 && x%5>=3)
		{
			while(x%5!=0)
			{
				x++;
			}
		}
		cout<<x<<endl;
	}
	return 0;
}





