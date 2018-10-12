#include <iostream>

using namespace std;

int main()
{
	char x;
	cin>>x;
	cout<<(int)x<<endl;
	for(int i=65;i<123;i++)
	{
		cout<<(char)i<<" = "<<i<<"  ";
	}
	for(char i='A';i<='z';i++)
		cout<<int(i)<<" = "<<i<<"  ";
	return 0;	
}
