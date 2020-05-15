#include<iostream>
using namespace std;

int main()
{
	string str;
	int i;
	int count=1;
	cout<<"enter the string in camelcase sequence : "<<endl;
	cin>>str;
	
	int len = str.size();
	for(i=0; i<len; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			count++;
		}
	}
	
	cout<<"word count = "<<count<<endl;
	return 0;
}


