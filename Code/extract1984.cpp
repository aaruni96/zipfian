#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
	int wcount=0,flag;
	char inword[256],words[30380][256];
	unsigned long long int ar[30380];
	for(int i=0;i<30380;i++)
	{
		ar[i]=0;
	}
	
	ifstream in("/home/aaruni/Desktop/zipfian project/1984georgeorwell.txt");
	
	if(!in)
	{
		cout<<"could not open file. please check\n";
		return 1;
	}
	
	while(in>>inword)
	{
		for(int i=0;i<int(strlen(inword));i++)		//normalising words, stripping capitalisation and punctuations
		{
			inword[i]=tolower(inword[i]);		//everything is now lower case
			if(inword[i]<'a' || inword[i]>'z')
			{
				if (i>0)
				{
					inword[i]='\0';		//all rear punctuations are now gone
				}
				else	//front punctuations
				{
					for(int j=0; ; j++)
					{
						if(inword[j]=='\0')
							break;
						inword[j]=inword[j+1];
					}
				}
			}
			inword[i]=tolower(inword[i]);
		}
		
		if(!strlen(inword))
			continue;
		for(int i=0;i<wcount;i++)
		{
			flag=0;
			if(!strcmp(inword,words[i]))
			{
				ar[i]++;
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			strcpy(words[wcount+1],inword);
			ar[wcount+1]++;
			wcount++;
		}
	}
	
	for(int i=1;i<wcount;i++)
	{
		cout<<words[i]<<'\t'<<ar[i]<<endl;
	}
		
	return 0;
}
