#include <stdio.h>
#include <time.h>
#include<string>
#include<iostream>
using namespace std;
class Time
{

};
int main ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
	 string s=ctime (&rawtime);
cout<<s;
 
  return 0;
} 
