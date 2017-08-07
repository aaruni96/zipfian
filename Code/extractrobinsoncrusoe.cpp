#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

int main()
{
	char inchar;
	unsigned long long int ar[26];
	for(int i=0;i<26;i++)
	{
		ar[i]=0;
	}
	
	ifstream in("/home/aaruni/Desktop/zipfian project/lifeandadventuresofrobinsoncrusoedanieldefoe.txt");
	
	if(!in)
	{
		cout<<"could not open file. please check\n";
		return 1;
	}
	
	while(in>>inchar)
	{
		inchar=tolower(inchar);
		if (inchar<'a' || inchar>'z')
		{
			continue;
		}
		
		switch (inchar)
		{ 
			case 'a' :
				ar[0]+=1;
				break;
			case 'b' : 
				ar[1]+=1;
				break;
			case 'c' : 
				ar[2]+=1;
				break;
			case 'd' : 
				ar[3]+=1;
				break;
			case 'e' : 
				ar[4]+=1;
				break;
			case 'f' : 
				ar[5]+=1;
				break;
			case 'g' : 
				ar[6]+=1;
				break;
			case 'h' : 
				ar[7]+=1;
				break;
			case 'i' : 
				ar[8]+=1;
				break;
			case 'j' : 
				ar[9]+=1;
				break;
			case 'k' : 
				ar[10]+=1;
				break;
			case 'l' : 
				ar[11]+=1;
				break;
			case 'm' : 
				ar[12]+=1;
				break;
			case 'n' : 
				ar[13]+=1;
				break;
			case 'o' : 
				ar[14]+=1;
				break;
			case 'p' : 
				ar[15]+=1;
				break;
			case 'q' : 
				ar[16]+=1;
				break;
			case 'r' : 
				ar[17]+=1;
				break;
			case 's' : 
				ar[18]+=1;
				break;
			case 't' : 
				ar[19]+=1;
				break;
			case 'u' : 
				ar[20]+=1;
				break;
			case 'v' : 
				ar[21]+=1;
				break;
			case 'w' : 
				ar[22]+=1;
				break;
			case 'x' : 
				ar[23]+=1;
				break;
			case 'y' : 
				ar[24]+=1;
				break;
			case 'z' : 
				ar[25]+=1;
				break;
		}
	}
	
	for(int i=0;i<26;i++)
	{
		cout<<char('a'+i)<<'\t'<<ar[i]<<endl;
	}
		
	return 0;
}
