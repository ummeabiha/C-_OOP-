//******************************HEADER  FILES**************************************************

#include<fstream>
#include<iomanip>
#include<string>

//*********************************CLASSES******************************************

class DRAW      //graphics
{
	public :

	void LINE_HOR(int, int, int, char) ;
	void LINE_VER(int, int, int, char) ;
	void BOX(int,int,int,int,char) ;
};
void DRAW :: LINE_HOR(int column1, int column2, int row, char c)
{
	for ( column1; column1<=column2; column1++ )
	{
		gotoxy(column1,row) ;
		cout <<c ;
	}
}

void DRAW :: LINE_VER(int row1, int row2, int column, char c)
{
	for ( row1; row1<=row2; row1++ )
	 {
		gotoxy(column,row1) ;
		cout <<c ;
	 }
}

void DRAW :: BOX(int column1, int row1, int column2, int row2, char c)
{
	 char ch=218 ;
	 char c1, c2, c3, c4 ;
	 char l1=196, l2=179 ;
	 if (c == ch)
	 {
		c1=218 ;
		c2=191 ;
		c3=192 ;
		c4=217 ;
		l1 = 196 ;
		l2 = 179 ;
	 }
	 else
	 {
		c1=c ;
		c2=c ;
		c3=c ;
		c4=c ;
		l1 = c ;
		l2 = c ;
	 }
	gotoxy(column1,row1) ;
	cout <<c1 ;
	gotoxy(column2,row1) ;
	cout <<c2 ;
	gotoxy(column1,row2) ;
	cout <<c3 ;
	gotoxy(column2,row2) ;
	cout <<c4 ;
	column1++ ;
	column2-- ;
	LINE_HOR(column1,column2,row1,l1) ;
	LINE_HOR(column1,column2,row2,l1) ;
	column1-- ;
	column2++ ;
	row1++ ;
	row2-- ;
	LINE_VER(row1,row2,column1,l2) ;
	LINE_VER(row1,row2,column2,l2) ;
}


class plane                 // stores details of the planes
{
	char planename[50], start[50], destination[50];
	char nam[50], st[50], dest[50];

	public :

	void list();
	int planeno;
	int pl;

	plane()                 // constructor
	{
		planeno=0;
		strcpy(planename," ");
		strcpy(start," ");
		strcpy(destination," ");
	}


	void getdata()         // get details of the plane
	{
		cout<<"Enter the following details..";
		cout<<"\n\n\n\t\tPlane Number : ";
		cin>>planeno;
		cout<<"\n\n\t\tPlane Name : ";
		gets(planename);
		cout<<"\n\n\t\tBoarding Point : ";
		gets(start);
		cout<<"\n\n\t\tDestination : " ;
		gets(destination);
	}

	void putdata()          // display details of the plane
	{
		cout<<"\n\n\t\tPlane Number : ";
		cout<<planeno;
		cout<<endl ;
		cout<<"\n\t\tPlane Name : ";
		cout<<planename ;
		cout<<endl ;
		cout<<"\n\t\tBoarding point : ";
		cout<<start ;
		cout<<endl ;
		cout<<"\n\t\tDestination : ";
		cout<<destination ;

	}

	void modify()        // used to modify any record
	{
		cout<<"\n\n\t\tPlane Number : ";
		cout<<planeno;
		cout<<"\n\t\tPlane Name : ";
		puts(planename);
		cout<<"\n\t\tBoarding point : ";
		puts(start);
		cout<<"\n\t\tDestination : ";
		puts(destination);
		cout<<"\n\n\tEnter new Details. " <<endl;
		cout<<"\n\n\t\tNew Plane No. :(Enter -1 to retain old one)  ";
		cin>>pl;
		cout<<"\n\t\tNew Plane Name. :(Press '.' to retain old one) ";
		gets(nam);
		cout<<"\n\t\tNew Boarding Pt.:(press '.' to retain old one) " ;
		gets(st);
		cout<<"\n\t\tNew Destination.:(press '.' to retain old one) ";
		gets(dest);

		if(pl!= -1)
			planeno=pl;
		if(strcmp(nam,".")!=0)
			strcpy(planename,nam);
		if(strcmp(st,".")!=0)
			strcpy(start,st);
		if(strcmp(dest,".")!=0)
			strcpy(destination,dest);
	}

}p;     //object of class plane



class tickets             // stores details of tickets made
{
	int age;
	char name[50];

	public :

	int pnrno;     // reservation no.
	void get()             // get details of user for tickets
	{
		pnrno=random(350-20+1)+20;
		cout<<"\nEnter your details :-";
		cout<<"\n\n\tName : ";
		gets(name);
		cout<<"\n\tAge : ";
		cin>>age;
		cout<<"\n\tPlane Number : ";
		cin>>p.planeno ;
		cout<<"\n\n\n\t\t\tWait till your ticket is being booked";
		delay(700);
		cout<<"\n\n\t\tYour PNR No. is : "<<pnrno;
	}

	void put()             // display details of tickets
	{
		cout<<"\nYour Details are :-";
		cout<<"\n\n\t\tPNR No. : "<<pnrno;
		cout<<endl ;
		cout<<"\n\t\tName : "; cout<<name ;
		cout<<endl ;
		cout<<"\n\t\tAge : "<<age;
	}

}t;       // object of class "tickets"

//******************************CLASSES CLOSE*******************************************************

//*****************************ADMIN FUNCTIONS*************************************************************




void plane::list()
{
	clrscr() ;
	fstream file ;
	file.open("plane.DAT", ios::in) ;
	DRAW d ;
	d.BOX(1,2,80,24,218) ;
	d.LINE_HOR(2,79,4,196) ;
	d.LINE_HOR(2,79,6,196) ;
	d.LINE_HOR(2,79,22,196) ;
	textcolor(BLACK+BLINK) ;
	gotoxy(30,3) ;
	cprintf("LIST OF THE FLIGHTS") ;
	textcolor(LIGHTGRAY) ;
	textcolor(WHITE) ;
	textbackground(BLACK) ;
	for (int i=2; i<=79; i++)
	{
		gotoxy(i,5) ;
		cprintf(" ") ;
	}
	gotoxy(2,5) ;
	cprintf(" Sno. FLIGHT NO.   FLIGHT NAME           FROM             TO ") ;
	textcolor(WHITE) ;
	textbackground(BLACK) ;
	int row=7, sno=1 ;
	while (file.read((char *) this, sizeof(plane)))
	{
		gotoxy(4,row) ;
		cout <<sno ;
		gotoxy(9,row) ;
		cout <<planeno ;
		gotoxy(24,row);
		cout<<planename;
		gotoxy(44,row) ;
		cout <<start ;
		gotoxy(60,row) ;
		cout <<destination;
		gotoxy(3,23) ;
		cout <<"PRESS <ENTER> TO EXIT" ;
		gotoxy(3,28) ;
		cout <<"                                  " ;
		row++ ;
		sno++ ;
	}
	getch();
	file.close() ;
}


void add()                 // add record to the file
{
	char ch;
	ofstream fout;
	fout.open("plane.dat", ios::out|ios::app|ios::binary);
	if(!fout)
		cout<<"File can't be opened";
	do
	{
		clrscr();
		gotoxy(0,10);
		p.getdata();
		fout.write((char*) &p, sizeof(p));
		cout<<"\n\n\n\n\t\tWant to enter more ? (y/n) ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');

	fout.close();
}

void search()         // search any record from the file
{
	ifstream fo;
	fo.open("plane.dat", ios::out|ios::binary);
	if(!fo)
		cout<<"\n\n\t\t\tFile Can't be Found ... ";
	delay(200);
	cout<<"\n\n\n\t\tEnter the Plane No. whose details you want to see: ";
	int ps,count=0;
	cin>>ps;
	delay(400);
	while(!fo.eof())
	{
		fo.read((char*)&p, sizeof(p));
		if(p.planeno==ps)
		{
			delay(400);
			p.putdata();
			cout<<"\n\n\tPress <Enter> ";
			getch();
			break ;
		}
		else
			count++;
	}
	if(count>0)
	{
		cout<<"\n\n\n\t\tNo such Plane is in Service " ;
	}

	fo.close();
}

void mod()             // modify any record
{
	   fstream fio;
	   fio.open("plane.dat", ios::in|ios::out|ios::binary);
	   long pos;
	   int count=0,pno;
	   cout<<"\n\n\tEnter the Plane no. whose record is to be modified: ";
	   cin>>pno;
	   while(!fio.eof())
	   {
		       pos=fio.tellg();
		       fio.read((char *)&p, sizeof(p));
		       if(p.planeno==pno)
		       {
				if(count>0)
				{
					cout<<"Record modified";
					break;
				}
				else
				{
					p.modify();
					fio.seekg(pos);
					fio.write((char*) &p, sizeof(p));
					count++;
					break ;
				}
		       }
	   }
	   if(count==0)
		cout<<"\n\n\tRecord not found !!\n";
		fio.seekg(0);
		fio.close();
}

void del()              // delete any record
{
	   ifstream fio;
	   ofstream file;
	   fio.open("plane.dat", ios::in|ios::binary);
	   file.open("temp.dat", ios::out|ios::binary|ios::app);
	   int pn;
	   char found='f', confirm='n';
	   cout<<"\n\n\t\tEnter the Plane No. whose record is to be deleted: ";
	   cin>>pn;
	   while(!fio.eof())
	   {
		      fio.read((char*)&p, sizeof(p));


			      if(p.planeno==pn)
			      {
					  p.putdata();
					  while(found!='t')
					  {
						  found='t';
						  cout<<"\n\n\tAre you sure you want to delete this record? (y/n)  ";
						  cin>>confirm ;
						  if(confirm=='n'||confirm=='N')
						  {
							file.write((char*)&p, sizeof(p));

						  }

					  }


			      }
			      else
				  file.write((char*)&p, sizeof(p));


	   }
	   if(found=='f')
		   cout<<"The record does not exist \n";
	   fio.close();
	   file.close();
	   remove("plane.dat") ;
	   rename("temp.dat", "plane.dat");
}

//********************************USER FUNCTIONS**************************************

void reservation()                  // ticket reservation
{
	char b;
	cout<<"\n\n\t\t\tTicket Registration ";
	char a;
	cout<<"\n\n\n\t\tPress 'y' to see list of all serviceable flights ";
	cin>>a;
	if(a=='y' | a=='Y')
	{
		delay(300);
		p.list();
	}
	ofstream fo;
	fo.open("ticket.dat",ios::out|ios::binary|ios::app);
	if(!fo)
		cout<<"File can't be opened";
	else
	{
		do
		{
			clrscr() ;
			t.get();
			fo.write((char*)&t, sizeof(t));
		cout<<"\n\n\t\tWant to register more tickets ?(y/n) ";
		cin>>b;
		}while(b=='y'|b=='Y');
	}

	fo.close();
}

void cancellation()          // ticket cancellation
{

	textbackground(LIGHTGRAY);
	textcolor(BLACK);
	int rn,count=0;;
	gotoxy(17,12);
	ifstream fin;
	ofstream fo;
	fin.open("ticket.dat", ios::in|ios::binary);
	fo.open("temp.dat", ios::out|ios::binary|ios::app);
	if(!fin||!fo)
	{
		cout<<"\n\t\t\tFile can't be found ... ";
		return;
	}
	else
	{
		cout<<"\n\n\t\tEnter the PNR No. which you want to cancel ";
		cin>>rn;
		delay(400);

		while(!fin.eof())
		{
			fin.read((char*)&t, sizeof(t));
			if(t.pnrno==rn)
			{
				textbackground(LIGHTGRAY);
				textcolor(BLACK);
				t.put();
				delay(300);
				cout<<"\n\n\tDo you really want to cancel your ticket ?(y/n) ";
				char r;
				cin>>r;
				if(r=='y'||r=='Y')
				{
					clrscr() ;
					count++;
					cout<<"\n\n\n\n\n\n\n\n\t\t\tYour Ticket has been cancelled ";

				}
				else
				{
					fo.write((char*)&t, sizeof(t));

				}




			}

			if(count==0)
			{
				cout<<"\n\n\t\tThe data entered was invalid";
				fo.write((char*)&t, sizeof(t));
				break;
			}
		}

	}
	delay(600);
	remove("ticket.dat");
	rename("temp.dat","ticket.dat");
	fin.close();
	fo.close();
}

void dispreserve()                // display records of tickets
{
	ifstream fin;
	fin.open("ticket.dat", ios::in|ios::binary);
	if(!fin)
		cout<<"\n\n\n\t\t\t File Can't Be opened ";
	else
	{
		gotoxy(53,55);
		cout<<"Enter Ticket PNR no. :-  ";
		int res;
		cin>>res;
		int count=0;
		while(!fin.eof())
		{
			fin.read((char *)&t, sizeof(t));
			if(t.pnrno==res)
			{
				t.put();
				cout<<"\n\n\tPress <ENTER> to go back to the menu. ";
				count++;
			}

		}
		if(count==0)
		{
			cout<<"\n\n\n\t\tInvalid PNR entered ";
		}
	}
	fin.close();
}

//*******************************MAIN FUNCTION*********************************************

void main()
{

	textcolor(WHITE);               // graphics for colors
	textbackground(CYAN);
	clrscr();
	textcolor(LIGHTBLUE+BLINK) ;
	cout<<"\n\n\t\tWELCOME TO COMPUTERISED AIRLINE RESERVATION SYSTEM ";

	DRAW d ;
		d.BOX(19,6,62,20,218) ;
		textcolor(BLACK) ;
		textbackground(WHITE) ;
		for (int i=7; i<=19; i++)
		for (int j=20; j<=61; j++)
		{
			gotoxy(j,i) ;
			cprintf(" ") ;
		}
		gotoxy(29,9) ;
		gotoxy(29,9) ;
		gotoxy(27,13) ;
		cprintf(" VIOR AIR TICKET RESERVATION") ;

	delay(3000);
	mainmenu:
	clrscr();
	cout<<"\n\n\t\tWELCOME TO COMPUTERISED AIRLINE RESERVATION SYSTEM";
		d.BOX(19,6,62,19.5,218) ;
		textcolor(BLACK) ;
		textbackground(WHITE) ;
		for (int i1=7; i1<=19; i1++)
		for (int j1=20; j1<=61; j1++)
		{
			gotoxy(j,i) ;
			cprintf(" ") ;
		}
		gotoxy(29,9) ;
		gotoxy(30,8) ;
		cprintf("REGISTER YOUR ENTRY TYPE") ;
		gotoxy(20,10) ;
		cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~") ;
		gotoxy(32,12) ;
		cprintf("1: ADMINISTRATOR") ;
		gotoxy(32,13) ;
		cprintf("2: USER") ;
		gotoxy(32,14) ;
		cprintf("PRESS::0 TO EXIT") ;
		gotoxy(30,17) ;
		cprintf("ENTER YOUR CHOICE ") ;
	int op;
	cin>>op;
	textcolor(BLACK) ;
	textbackground(LIGHTGRAY) ;

	clrscr();
	if(op==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tExit initialised ";
		delay(600);
		exit(0);
	}

//******************************USER INTERFACE******************************************************

	else if(op==2)
	{

		char ch;
		do
		{
			int choice;
			delay(1200);
			clrscr();
			menu:
			clrscr();
		cout<<"\n\n\t\t\a\aWELCOME USER TO COMPUTERISED AIRLINE RESERVATION SYSTEM";
		d.BOX(18.5,6.5,63,20.5,218) ;
		textcolor(WHITE) ;
		textbackground(BLACK) ;
		for (int i=7; i<=19; i++)
		for (int j=20; j<=61; j++)
		{
			gotoxy(j,i) ;
			cprintf(" ") ;
		}
		gotoxy(39,8) ;
		cprintf("MENU") ;
		gotoxy(20,10) ;
		cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~") ;
		gotoxy(30,11) ;
		cprintf("1: DISPLAY FLIGHT DETAILS ") ;
		gotoxy(30,12) ;
		cprintf("2: RESERVE A FLIGHT TICKET ") ;
		gotoxy(30,13) ;
		cprintf("3: DISPLAY YOUR TICKET") ;
		gotoxy(30,14) ;
		cprintf("4: CANCEL A TICKET") ;
		gotoxy(30,15) ;
		cprintf("5: EXIT") ;
		gotoxy(30,16) ;
		cprintf("6: RETURN TO LOGIN PAGE");
		gotoxy(30,19);
		cprintf("ENTER YOUR CHOICE ") ;
		cin>>choice;
		textcolor(BLACK) ;
		textbackground(LIGHTGRAY) ;

			delay(1300);
			clrscr();
			switch(choice)
			{

				case 1 : p.list();
					 break ;

				case 2 : reservation();
					 break ;

				case 3 : dispreserve();
					 break ;

				case 4 : cancellation();
					 break ;

				case 5 : cout<<"\n\n\n\n\n\n\t\t\t\tExiting software";
					 delay(600);
					 exit(0);
					 break ;

				case 6 : goto mainmenu;


				default : cout<<"The choice you entered was incorrect";
					  delay(500);
					  cout<<"\nPress 'y' to continue and 'n' to exit ";
					  cin>>ch;
			}
			goto menu;


		}while(ch=='y'||ch=='Y');

	}

//********************************ADMIN INTERFACE***************************************************

	else if(op==1)
	{
		int k=0;
		while(k<4)
		{
			clrscr();
			cout<<"\n\n\n\n";
			delay(300);
			cout<<"\n\n\n\n\n\tWARNING: DO NOT PRESS ENTER KEY AFTER ENTERING PASSWORD!!!! " ;
			cout<<"\n\n\n\t\t\tEnter the password ";

			char p[11],pass[11];
			strcpy(p,"inaeroplane");
			for(int i=0;i<11;i++)
			{
				pass[i]=getch();
				cout<<"*";
			}
			cout<<"\n\n\n\n";
			delay(500);
			if(strcmp(pass,p)==0)
			{
			       delay(1200);
			       clrscr() ;
			       cout<<"\n\n\n\n\n\n\n\n\t\t\t\tAdmin entry granted ";
			       k=4;
			}

			else
			{
				cout<<"\n\n\t\tWant to enter password again ?(y/n) : ";
				char g;
				cin>>g;
				if(g=='y'|g=='Y')
					k++;
				else
				{
					clrscr() ;
					cout<<"\n\n\n\n\t\t\t\tExiting the software....";
					delay(1000);
					exit(0);
				}
			}
		}
		 if(k==4)
		 {
				char ch1='y';
				while(ch1=='y'||ch1=='Y')
				{
					int choice1;
					delay(1200);
					mainscreen:
					clrscr();
					cout<<"\n\n\t\t\a\aWELCOME ADMIN TO COMPUTERISED AIRLINE RESERVATION SYSTEM";
					d.BOX(19,6,62,20,218) ;
					textcolor(WHITE) ;
					textbackground(BLACK) ;
					for (int i=7; i<=19; i++)
					for (int j=20; j<=61; j++)
					{
						gotoxy(j,i) ;
						cprintf(" ") ;
					}
					gotoxy(39,8) ;
					cprintf("MENU") ;
					gotoxy(20,10) ;
					cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~") ;
					gotoxy(20,11) ;
					cprintf("1: DISPLAY FLIGHT DETAILS FROM DATABASE") ;
					gotoxy(20,12) ;
					cprintf("2: ADD NEW FLIGHT TO DATABASE") ;
					gotoxy(20,13) ;
					cprintf("3: SEARCH DATABASE FOR PARTICULAR FLIGHT") ;
					gotoxy(20,14) ;
					cprintf("4: MODIFY FLIGHT DETAILS IN DATABASE") ;
					gotoxy(20,15) ;
					cprintf("5: DELETE FLIGHT FROM DATABASE") ;
					gotoxy(20,16) ;
					cprintf("6: EXIT PROGRAM") ;
					gotoxy(20,17) ;
					cprintf("7: RETURN TO LOGIN PAGE");
					gotoxy(20,19);
					cprintf("ENTER YOUR CHOICE ") ;
					cin>>choice1;
					textcolor(BLACK) ;
					textbackground(LIGHTGRAY) ;
					delay(1300);
					clrscr();
					switch(choice1)
					{

						case 1 : p.list();
							 break ;

						case 2 : add();
							 break ;

						case 3 : search();
							 break ;

						case 4 : mod();
							 break ;

						case 5 : del();
							 break ;

						case 6 : cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tExiting software ";
							 delay(600);
							 exit(0);
							 break ;

						case 7 : goto mainmenu;


						default: cout<<"\n\n\n\t\t\tUnknown choice...";
							 delay(500);
							 cout<<"\n\n\t\t\tWant to enter the choice again?(y/n)";
							 cin>>ch1;
					}
					goto mainscreen;
				}
		 }
	}

	else
	{
		cout<<"Invalid entry\n";
	}


	getch();
}