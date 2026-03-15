#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string username;
string password;
void displayMenu();
void registration(string username,string password);
void login(string username,string password);

int main()
{

cout<<"=================CODE ALPHA==================="<<endl;
cout<<"==============Internship Project=============="<<endl;
cout<<"================March 2026 Batch=============="<<endl;
cout<<"=================RIDA FATIMA=================="<<endl;
cout<<endl<<endl;
displayMenu();
return 0;
}

void displayMenu()
{
char choice;
do{

cout<<"======== Login And Registration System ======="<<endl;
cout<<endl;
cout<<"1.Register "<<endl;
cout<<"2.Login  "<<endl;
cout<<"3.Exit"<<endl;
cout<<endl;

cout<<"Enter 1/2/3: ";
cin>>choice;

if (choice=='1')
registration(username,password);
else if (choice=='2')
login(username,password);
else if(choice!='3')
{
    cout<<"Invalid Input.Please try again."<<endl;
}
}
while(choice!='3');
    cout<<"Thank you for visiting."<<endl;
}


void registration(string username,string password)
{
    system("cls");
    cout<<"============================"<<endl;
    cout<<"Welcome to Registration Form"<<endl;
    cout<<"============================"<<endl;
do{
    cout<<"Enter Username: ";
    cin>>username;
    cout<<endl;
}while(username.length()<3);

do{
    cout<<"Enter Password: ";
    cin>>password;
    cout<<endl;
}while(password.length()<4);
ifstream infile("username_output.txt");
bool found=false;
string USERNAME,PASSWORD;
while(infile>>USERNAME>>PASSWORD)
{
  if(USERNAME==username)
  {
    found=true;
    break;
  }
}
infile.close();

if(found)
{
     cout<<"Username is already in Use."<<endl;
     cout<<"------------------------------"<<endl;
     cout<<"Try Again: "<<endl;
}
if(!found)
{
cout<<"============================"<<endl;
cout<<"Registration Successful!"<<endl;
cout<<"============================"<<endl;
ofstream outfile;
outfile.open("username_output.txt",ios::app);
outfile<<username<<" "<<password<<endl;
outfile.close();
}
 system("pause");
 system("cls");

}
void login(string username,string password)
{
string searchname;
string searchpass;
system("cls");
cout<<"============================"<<endl;
cout<<"Welcome to Login Form"<<endl;
cout<<"============================"<<endl;

    cout<<"Enter Username: ";
    cin>>searchname;
    cout<<endl;
    cout<<"Enter Password: ";
    cin>>searchpass;
    cout<<endl;
    ifstream infile("username_output.txt",ios::in);
    bool found=false;
    string USERNAME,PASSWORD;
    while( infile>>USERNAME>>PASSWORD)
    {

if((USERNAME==searchname)&&(PASSWORD==searchpass)){
             found=true;
            break;
        }
    }
    infile.close();
if(found){
 cout<<"============================"<<endl;
 cout<<"Login Successful!  :)" <<endl;
 cout<<"============================"<<endl;
 cout<<"Welcome, "<<searchname<<"!"<<endl;
    }

     else
        {
            cout<<"============================"<<endl;
             cout<<"Login Unsuccessful!  :("<<endl;
             cout<<"Incorrect Username or Password."<<endl;
             cout<<"============================"<<endl;
        }

 system("pause");
 system("cls");

}



