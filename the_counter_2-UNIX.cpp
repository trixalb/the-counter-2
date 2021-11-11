#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<string>
#include<cstring>
using namespace std;



int main()
{
bool executing = false;
bool configurating = false;
int counter = 0;
int printed = 0;
cout << "Welcome!";
cout << "\nthis project is available in GitHu b de mitodocpp or the Programmer!";
configurating = true;
executing = false;
cout << "\n\nenter the maximum number:";
cin >> counter;
executing = true;
counter += 1;
while(executing == true)
{
cout << printed;
cout << "\n";
counter -= 1;
printed += 1;
usleep(1000000);
if(counter == 0 || counter < 0)
{
executing = false;
return 0;
}
}
}
