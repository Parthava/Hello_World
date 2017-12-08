#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<conio.h>
int main()
{
	char data[100],tname[50],pname[50],nltp[20]={".ltp"},fname[50],ext[20],ltp[20]={"ptl"},delf[20],temp,d;
	int i,j=0,k=0,l,status;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
	cout<<"\t\t* * * * The Bob Software Production Presents * * * *"<<endl;
	cout<<"\t\t\t * * * * Light Pad v.1 * * * *\n"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦";
	cout<<"\n This is a new software that is used to make and open files in .ltp format. It   is secured, that is the data entered by the users are being encrypted.";
	cout<<"\n\n\n\t\t\t   Press any key to continue";
	getch();
	clrscr();
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
	cout<<"\t\t* * * * The Bob Software Production Presents * * * *"<<endl;
	cout<<"\t\t\t * * * * Light Pad v.1 * * * *\n"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦";
	cout<<"\n Enter your option in: "<<endl;
	cout<<"\n 1. Make a File \n\n 2. Open a File \n\n 3. Delete a File \n\n Enter Here: ";
	cin>>i;
	clrscr();
	if(i==1) //First menu
	{
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
	cout<<"\t\t* * * * The Bob Software Production Presents * * * *"<<endl; // first menu
	cout<<"\t\t\t * * * * Light Pad v.1 * * * *\n"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦";
	cout<<"\n Enter the path and name of the file you want to make. For eg: E:/test\n\n Enter Here: "; //covertion Starts
	gets(tname);
	for(i=0;tname[i]!='\0';i++) //logical .ltp part start
	pname[i]=tname[i];
	for(l=0;nltp[l]!='\0';l++)
	pname[i+l]=nltp[l];
	pname[i+l]='\0'; //logical .ltp part ends
	cout<<"\n Enter your data here: ";
	gets(data);
	ofstream outfile;
	outfile.open(pname);
	while(data[k]!='\0')
	{
		data[k]=data[k]-30;
		k++;
	}
	outfile<<data;
	outfile.close();
	cout<<"\n Your data is saved in "<<pname<<". Thanks for using ";
	}
	else if(i==2)
	{
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
	cout<<"\t\t* * * * The Bob Software Production Presents * * * *"<<endl; // second menu
	cout<<"\t\t\t * * * * Light Pad * * * *\n"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦";
	cout<<"\n Enter the path of the file you want to open. For eg: E:/test.ltp\n\n Enter Here: "; //covertion Starts
	gets(fname);
	i=0; // reverse mechanism of fname starts
	j=strlen(fname)-1;
	while(i<j)
	{
		temp=fname[i];
		fname[i]=fname[j];
		fname[j]=temp;
		i++;
		j--;
	} // reverse mechanism of fname ends
	for(i=0;fname[i]!='.';i++) // cutting of ptl starts
	ext[i]=fname[i];
	ext[i]='\0'; // cutting of plt ends
	i=0; // reverse mechanism of fname starts
	j=strlen(fname)-1;
	while(i<j)
	{
		temp=fname[i];
		fname[i]=fname[j];
		fname[j]=temp;
		i++;
		j--;
	} // reverse mechanism of fname ends
	if(strcmp(ltp,ext)==0) // condition checking for only .ltp file
	{
		ifstream infile(fname);
		if(infile)
			{
				cout<<"\n Your data is here "<<endl;
				while(!infile.eof())
				{
					infile.get(d);
					cout<<(char)(d+30);
				}
				infile.close();
			}
		else
			cout<<"\n The path of the file is incorrect. Enter a valid one."; //Convertion Ends
	}
	else
	{
		cout<<"\n This extension cannot be opened ";
	}
	}
	else if(i==3)
	{
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
	cout<<"\t\t* * * * The Bob Software Production Presents * * * *"<<endl; // second menu
	cout<<"\t\t\t * * * * Light Pad * * * *\n"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦";
	cout<<"\n Enter the path of the file you want to delete. For eg: E:/test.ltp\n\n Enter Here: "; //covertion Starts
	gets(delf);
	i=0; // reverse mechanism of fname starts
	j=strlen(delf)-1;
	while(i<j)
	{
		temp=delf[i];
		delf[i]=delf[j];
		delf[j]=temp;
		i++;
		j--;
	} // reverse mechanism of fname ends
	for(i=0;delf[i]!='.';i++) // cutting of ptl starts
	ext[i]=delf[i];
	ext[i]='\0'; // cutting of plt ends
	i=0; // reverse mechanism of fname starts
	j=strlen(delf)-1;
	while(i<j)
	{
		temp=delf[i];
		delf[i]=delf[j];
		delf[j]=temp;
		i++;
		j--;
	} // reverse mechanism of fname ends
	if(strcmp(ltp,ext)==0) // condition checking for only .ltp file
	{
	  status=remove(delf);
		if(status==0)
		  cout<<"\n The file "<<delf<<" has been deleted succefully. Thanks for using.";
		else
		{
			cout<<"\n Unable to delete the file. Press Alt+F4 to quit.";
			perror("\n Error: ");
		}
	}
	 else
	{
		cout<<"\n The file cannot be deleted because of its extension. Press Alt+F4 to quit.";
	}
	}
	else
	{
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
	cout<<"\t\t* * * * The Bob Software Production Presents * * * *"<<endl; // default menu
	cout<<"\t\t\t    * * * * Light Pad v.1 * * * *\n"<<endl;
	cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦";
	cout<<"\n Plaese select an appropiate option or press Alt+F4 to quit";
	}
	return 0;
}
