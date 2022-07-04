
#include<iostream>
#include<fstream>
#include <string>
#include <stdlib.h>    
#include <time.h>       
using namespace std;
int i,k;
int j = 0;
string campus[5] = { "Islamabad", "Faisalabad","Peshawar", "Quetta", "Lahore" };//5
string salary[5] = { "200000", "300000","50000", "80000", "90000" };
string department[5] = { "BBA", "CS","A&F", "EE", "INFO" };
string job[5] = { "HOD", "Professor","Faculty", "Accounts", "Assistant Professor" };
string cc[5] = { "OOP", "CYBER CRIME","PROGRAMMING", "COAL", "HISTORY" };
void Kmenu()
{
    cout << "                                          FAST UNIVERSITY           " << endl;
    cout << "                                      Syestem for Staff Members           ";
    cout << endl << "                                             Welcome";
    cout << endl << "                                            Main Menu\n" << endl << endl;

    cout << "Press the Option of your Desire\n" << "\nLOGIN TO KNOW ASSIGNED ATTRIBUTES" << endl;
    cout << "IMPORTANT::::YOU NEED TO REGISTER\Login IF YOU ARE A NEW USER SO THE SOFTWARE CAN ASSIGN YOU WITH ATTRIBUTES" << endl;


    cout << endl << endl << "                                       1. Login     2. Register    3.Check Attributes(KEY)" << endl;
    cout << "Please Enter your Preferred Choice :- " << endl;

}
struct KMA
{
    string camp;
    string sal;
    string depart;
    string work;
    string course;
};
KMA* key = new KMA[50];
class AA
{


public:
    AA()
    {

        cout << "                                          FAST UNIVERSITY           " << endl;
        cout << "                                      Syestem for Staff Members           ";
        cout << endl << "                                             Welcome";
        cout << endl << "                                            Main MENU\n" << endl << endl;

        cout << "Press the Option of your Desire\n" << "\nLOGIN TO KNOW ASSIGNED ATTRIBUTES" << endl;
        cout << "IMPORTANT::::YOU NEED TO REGISTER IF YOU ARE A NEW USER SO THE SOFTWARE CAN ASSIGN YOU WITH ATTRIBUTES" << endl;


        cout << endl << endl << "                                       1. Login     2. Register" << endl;
        cout << "Please Enter your Preferred Choice :- " << endl;
    }
    void Pmenu()
    {
        srand(time(NULL));
        i = rand() % 5;
        cout << endl<<"USER ASSIGNED ATTRIBUTES ARE::" << endl;
        cout << "JOB:" << job[i] << endl;
        cout << "Campus:" << campus[i] << endl;
        cout << "Salary:" << salary[i] << endl;
        cout << "Department:" << department[i] << endl;
        if (i == 1 || i == 4)
            cout << "current course:" << cc[i] << endl;
        cout << "YOUR GENERATED KEY IS  :  " << j;
        
        key[j].camp = campus[i];
        key[j].work = job[i];
        key[j].depart = department[i];
        key[j].sal = salary[i];
        if (i == 1 || i == 4)
        key[j].course = cc[i];
        key[j].course = "NONE";
        ++j;
       
    }

};
class panel
{
private:
   AA m;
    int choice;
     
protected:


public:
    void Panel(int c)
    {
        int command = 0;
        string name, password, inName, inPassword, registerName[20], registerPassword[20];
        Panel(command, name, password, inName, inPassword, registerName, registerPassword);
    }
    void Panel(int command, string  name, string  password, string inName, string  inPassword, string registerName[20], string registerPassword[20])
    {
    	int chk1=0;
        cout << "1)MAIN MENU\n2)login)\n"
            << "Command: ";
        cin >> command;
        if (command == 1)
        {
            AA access;
            cin >> choice;
            Panel(choice);
        }

        if (command == 2)
        {

           ofstream f;
			f.open("user.txt");
            if (!f.is_open())
            {
                cout << "could not open file\n";

            }
            //getline(f, name, '\n');
            //getline(f, password, '\n');

            //f.close(); //you don't need it open now, since you have the name and password from the file

            //login
            for(int k=0;k<2;k++)
            cout<<"Hello"<<registerName[k]<<"  "<<endl;
            while (1)
            {

                cout << "\n\n\n"
                    << "Enter Username: ";
                cin >> inName;
                cout << "Enter Password: ";
                cin >> inPassword;
                
                   		if (inName == registerName[k] && inPassword == registerPassword[k])
               				{

			                    cout << "Login Successful\n"<< "Welcome  "<< inName;
			                    break;
								k++;
                			}
                		else
                cout << "Incorrect Name or Password\nTRY AGAIN";

            }

            m.Pmenu();
        }

    }
};
class user :public panel
{
private:
    int chk;
    string cnic;
    int choice;
    ofstream g;
    
public:
    void register_user(int c, string  name, string  password, string inName, string  inPassword, string registerName[20], string registerPassword[20],int count)
    {




        cout << "REGISTER For \n 1)USER \n 2)MAIN MENU \n Choose:-";
        cin >> chk;

        if (chk == 1)
        {


            //open file for registration
            
			
			
			
			g.open("user.txt",ios::app);
            if (!g.is_open())
            {
                cout << "could not open file\n";
                AA access;
                cin >> choice;
                Panel(choice);
            }
            cout << "\n\n\n"
                << "New Username: ";
            cin >> registerName[count];
            cout << "New Password: ";
            cin >> registerPassword[count];
            g << registerName[count];
            g << "\t\t\t";
            g << registerPassword[count]<<endl;
            g.close();
		
        }
        
        if (chk == 2)
        {
            AA();
            cin >> choice;
            Panel(choice);
        }

    }

};
void checkkey()
{
    int keyn;
    cout << "ENTER YOUR KEY:";
    cin >> keyn;
    if (keyn <= j)
    {
        cout<<"CAMPUS:" << key[keyn].camp<<endl;
        cout << "JOB:" << key[keyn].work <<endl;
        cout << "DEPARTMENT:" << key[keyn].depart<<endl;
        cout << "SALARY:" << key[keyn].sal <<endl;
        cout << "CURRENTCOURSE:" << key[keyn].course<<endl;
       
    }

}

int main()
{
    const int size = 20;
    int command = 0;
    bool check=1;
    	user U;
    string  name, password, inName, inPassword, registerName[20], registerPassword[20];
    int choice,count=0;
    for(int m=0;m<20;m++)
    registerName[m]='\0';
    for(int m=0;m<20;m++)
    registerPassword[m]='\0';
    do {
    	if (check)
    	{
	
		check=0;
		
	}
        else
		{
		Kmenu();
		}
		cin >> choice;
        if (choice == 2) {
            U.register_user(choice, name, password, inName, inPassword, registerName, registerPassword,count);
            count++;
          
        }
        if (choice == 1)
        {
            U.Panel(command, name, password, inName, inPassword, registerName, registerPassword);
        }
        if (choice == 3)
        {
            checkkey();
        }

    } while (choice != 0);

}


