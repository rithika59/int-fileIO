#include<iostream>
#include<fstream>
using namespace std;

void write()
{
	ofstream fout("int.txt");

	if(!fout)
		cout<<"coudn't create:-";
	else
	{
		int n;
		cout<<"Enter integer into the file -1 to stop:-"<<endl;
		cin>>n;
		while(n != -1)
		{
			fout<< n<<endl;
			cin>>n;
		}
	}
}

void read()
{
	ifstream fin("int.txt");

	if(!fin)
		cout<<"coudn't create:-";
	else
	{
		int n;
		//cout<<"Enter integer into the file -1 to stop:-"<<endl;
		fin>>n;
		while(!fin.eof())
		{
			cout<< n<<endl;
			fin>>n;
		}
	}
}
int main()
{
	write();
	read();
	return 0;
}
