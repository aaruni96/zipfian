#include<iostream>

using namespace std;

int main()
{
	for(int i=0;i<26;i++)
	{
		cout<<"\t\t\tcase \'"<<char('a'+i)<<"\' : \n\t\t\t\tar["<<i<<"]+=1;\n\t\t\t\tbreak;";
		cout<<endl;
	}
	return 0;
}
