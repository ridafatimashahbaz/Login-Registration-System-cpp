#include <iostream>
#include<iomanip>
using namespace std;
double grade_to_value(char grade);
void displayGrades(char grade[],int courses);
int main()
{
int courses;
double GPA,CGPA;
double grade_value;
double grade_points=0;
double total_grade_points=0;
int total_credits=0;

cout<<"=================CODE ALPHA==================="<<endl;
cout<<"==============Internship Project=============="<<endl;
cout<<"================March 2026 Batch=============="<<endl;
cout<<"=================RIDA FATIMA=================="<<endl;
cout<<endl;
cout<<endl;
cout<<"=============== CGPA CALCULATOR==============="<<endl;
cout<<endl;

cout<<"Enter your registered number of courses: ";
cin>>courses;
cout<<endl;
char grade[courses];
int credits[courses];
for (int i=0;i<courses;i++)
{
   cout<<"For course "<<i+1<<endl;
   cout<<"Enter Grade: ";
   cin>>grade[i];
   grade_value=grade_to_value(grade[i]);
   cout<<"Enter Credit Hours: ";
   cin>>credits[i];
grade_points=grade_value*credits[i];
total_credits+=credits[i];
total_grade_points+=grade_points;

cout<<"---------------------------------------------"<<endl;
}
GPA=total_grade_points/total_credits;
displayGrades(grade,courses);

cout<<fixed<<setprecision(2)<<endl;
cout<<"Semester GPA= "<<GPA<<endl;
CGPA=GPA;
cout<<"Final CGPA= "<<CGPA<<endl;
return 0;
}

double grade_to_value(char grade)
{
    switch(grade)
    {
     case 'A':
     case 'a':
        return 4.0;
     case 'B':
     case 'b':
        return 3.0;
     case 'C':
     case 'c':
        return 2.0;
     case 'D':
     case 'd':
        return 1.0;
     default:
        return 0.0;
    }
}

void displayGrades(char grade[],int courses)
{
    for(int i=0;i<courses;i++)
    {
    cout<<"Grade for course "<<i+1<<" is : "<<grade[i]<<endl;
    }
}


