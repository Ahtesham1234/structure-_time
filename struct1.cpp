//struct1.cpp
//demonstrates the initializing of structure variable

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct part                   //define a structure
{
int modelnumber;      //ID number of the widget
int partnumber;       //ID number of widget part
float cost;          // cost of part
};
//////////////////////////////////////////////////////////////////////////////

int main()
{                       //initialize the variable
part part1 ={6224,373,217.55F};
part part2;                  //define part2

cout<<"Model " <<part1.modelnumber
<<"part"  <<part1.partnumber
<<"cost $" <<part1.cost<<endl;

part2=part1  //assign the prat1 values to part2,heheheheheheheeheh:)

cout<<"Model " <<part2.modelnumber
<<"part"  <<part2.partnumber
<<"cost $" <<part2.cost<<endl;

return 0;
}




