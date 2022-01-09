#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;

string line;
void copyy();
void update();
void deletspace();
void deletline();
void capital();


int main()
{
    getch();
    return 0;
}
void copyy()  //copy youefile to ourfile
{
ifstream input("yourfile.txt");
ofstream output("temp.txt");
while(getline(input,line))
output<<line<<"\n";
input.close();
output.close();
}
void update()  //tabdil yourfile be ourfile
{
ifstream input("ourfile.txt");
ofstream output("temp.txt");
while(getline(input,line))
output<<line<<"\n";
input.close();
output.close();
}
void deletspace()  // hazfe space ezafe
{
 unsigned i=0;
ifstream input("temp.txt");
ofstream output("ourfile.txt");
if(input.is_open())
{
while(!input.eof())
{
getline(input,line);
for(i=0;i<line.length();i++)
{
while(line[i]==' ')
{
i++;
}
}
}
}
}
void deletline()  // hazfe khate ezafi
{
ifstream input("temp.txt");
ofstream output("ourfile.txt");
if(input.is_open())
{
while(getline(input,line))
{
if(line.length()==0)
continue;
output<<line;
output<<"\n";
}
}
}