#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void print_table(int i)
{
	int j,t;
	for(j=1;j<=10;j++)
	cout<<i<<"*"<<j<<"="<<i*j<<endl;
}
int main()
{
	int temp=0;
	cout<<"enter initial table"<<endl;
	cin>>temp;
	while(1){
	cout<<"enter symbol"<<endl;
	int c;
	c=getch();
//	cout<<c<<" "<<endl;
	switch(c)
	{
		case 72:
			cout<<"up"<<endl;
			system("cls");
			if((temp+1)!=0)
			{
				print_table(++temp);
			}
			break;
			case 80:
				cout<<"down"<<endl;
				system("cls");
				if((temp-1)!=0)
				{
					print_table(--temp);
				}
				break;
		
						default:{
							cout<<"wrong chocie"<<endl;
							break;
						}
	}
}
}
