#include <fstream>
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#include <string>

using namespace std;
string replace(string str,char a,string b ){
	for(int i=0;str[i]!='\0';i++)
	
		if(str[i]==' ' ) str[i]='_';
	return str;
}

int main()

{
	
double x1,x2;
double a,b,c;
cout.width(12);

cout.fill('_');
cout<<replace("The quatric decision\nEnter in one line value of factors and press <Enter>\n",' ' ,"_.");

cin>>a>>b>>c;

if(a==0)
{

cout<<replace("The equation isn't square",' ',"_.");
cout.width(12); 
}
else
{
double d=(b*b)-(4*a*c);
if(d<0)
{
cout<<replace("The equation has no decision in the valid area",' ',"_.");
cout.width(12);

}
if(d==0)
{
cout<<replace("The equation has2 identical roots of theequation:\n",' ',"_.");
cout.width(12);
cout.precision(4);
x1=-b/(2*a);
cout<<"x = "<<x1;
}
if(d>0)
{
cout<<replace("Equation roots:\n",' ',"_.");
cout.width(12);
cout.precision(4);
d=sqrt(d);
x1=(-b+d)/(2*a);
x2=(-b-d)/(2*a);
cout<<"x1 = "<<x1<<endl;
cout.width(12); 
cout.precision(4);
cout<<"x2 = "<<x2;
system("PAUSE");
}
}
return 1;
}
