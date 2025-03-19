//singly linear linked list

// Samri ko list

#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
struct node{
int info;
struct node *pnext;
};
struct node *pfirst=NULL,*pthis,*ptemp,*pnew;
int count=0,data;
int loc,i;
void create()
{
	pnew=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter the data:";
	cin>>data;
	pnew->info=data;
	count++;
}
void beg()
{
	if (pfirst==NULL)
	{
		pfirst=pnew;
		pnew->pnext=NULL;
	}
	else{
		pnew->pnext=pfirst;
		pfirst=pnew;
	}
}
void end()
{
	if(pfirst==NULL)
	{
		pfirst=pnew;
		pnew->pnext=NULL;
	}
	else{
		pthis=pfirst;
		while(pthis->pnext!=NULL)
		{
			pthis=pthis->pnext;
		}
		pthis->pnext=pnew;
		pnew->pnext=NULL;
	}
}
	void beforespc()
	{
		cout<<"Enter the location:";
		cin>>loc;
		create();
		if(loc<=count)
		{
			if(loc==0)
			{
				beg();
			}
		else{
			pthis=pfirst;
			for(i=1;i<loc-1;i++)
			{
				pthis=pthis->pnext;
			}
			ptemp=pthis->pnext;
			pthis->pnext=pnew;
			pnew->pnext=ptemp;
		}
	}
	else{
		cout<<"Invalid location";
	}
}
void afterspc()
{
	cout<<"Enter the location:";
	cin>>loc;
	create();
	if(loc<=count)
	{
		if(loc==count)
		{
			end();
		}
		else{
			pthis=pfirst;
			for(i=1;i<loc;i++)
			{
				pthis=pthis->pnext;
			}
				ptemp=pthis->pnext;
		pthis->pnext=pnew;
		pnew->pnext=ptemp;
		}
	}
	else{
		cout<<"invalid location"<<endl;
	}
}
void display()
{
	if(pfirst==NULL)
	{
		cout<<"\nList is empty";
	}
	else{
		pthis=pfirst;
		while(pthis!=NULL)
		{
			cout<<pthis->info<<"\t";
			pthis=pthis->pnext;
		}
	}
}
void bdel()
{
	if(pfirst==NULL)
	{
		cout<<"\nList is empty";
	}
	else if(pfirst->pnext=NULL)
	{
		cout<<"\nDeleted data is:"<<pfirst->info;
		free(pfirst);
		pfirst=NULL;
	}
	else{
		ptemp=pfirst->pnext;
		cout<<"\nDeleted data is:"<<pfirst->info<<endl;
		free(pfirst);
		pfirst=ptemp;
	}
}
void edel()
{
	if(pfirst==NULL)
	{
		cout<<"\nList is empty";
	}
	else if(pfirst->pnext=NULL)
	{
		cout<<"\nDeleted data is:"<<pfirst->info;
		free(pfirst);
		pfirst=NULL;
	}
	else{
		pthis=pfirst;
		while(pthis->pnext!=NULL)
		{
			pthis=pthis->pnext;
		}
		cout<<"\nDeleted data is:"<<pfirst->info;
		free(pthis->pnext);
		pthis->pnext=NULL;
	}
}
int main()
{
	int c;
	char ch;
	
	cout<<"1.Insert at beginning";
	cout<<"\n2.Insertion from end";
	cout<<"\n3.Insertion before spc loc";
	cout<<"\n4.Insertion after spc loc";
	cout<<"\n5.Display";
	cout<<"\n6.Deletion form beginning";
	cout<<"\n7.Deletion from end";
	cout<<"\n8.Exit"<<endl;
	do
	{
	cout<<"Enter your choice:";
	cin>>c;
	switch(c)
	{
		case 1:
		create();
		beg();
		break;
			case 2:
		create();
		end();
		break;
		case 3:
			beforespc();
			break;
		case 4:
			afterspc();
			break;
			case 5:
				display();
				break;
				case 6:
					bdel();
					count--;
					break;
					case 7:
						edel();
						count--;
						break;
						case 8:
							exit(0);
							break;
			default:
				cout<<"Invalid input";
				break;
	}
	cout<<"Do you want to continue:";
	cin>>ch;
}while(ch!='n');
return(0);
}
