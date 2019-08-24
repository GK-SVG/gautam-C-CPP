#include<iostream>
using namespace std;

int year(int);
int year1(int);
int year2(int);
int year3(int);
int month(int);
void date(int);




int main()
{
  int a,b,c,d,e,mon;
  cout<<"\n enter date ,month, year: ";
         //here a,b,c store the input
  cin>>a>>b>>c;


            //here year is fuction not class member(function calling)
  c=year(c-1);
           // here d and e assign the value of c
   e=d=c;
          //store value of c for add
  c=year1(c);
          //store vallue of d for add
  d=year2(d);
          //store value of e for add
  e=year3(e);
              // store mon value for add
  mon =month(b);
  a=(a+c+d+e+mon)%7;
  date(a);
  return 0;
}



int month(int b)
{
  int x;
  if(b>0 && b<=12)
  switch(b-1)
  {
    case 0:
      x=0;
      break;
    case 1:
      x=3;
      break;
    case 2:
      x=3;
      break;
    case 3:
      x=6;
      break;
    case 4:
      x=8;
      break;
    case 5:
      x=11;
      break;
    case 6:
      x=13;
      break;
    case 7:
      x=16;
      break;
    case 8:
      x=19;
      break;
    case 9:
      x=21;
      break;
    case 10:
      x=24;
      break;
    case 11:
      x=26;
      break;
    default:
        cout<<"invalid month";
        break;
  }
  else
  x=0;
  return x;

}



 void date(int c)
{
  switch(c)
  {
     case 1:
        cout<<"\n\nMONDAY";
        break;
     case 2:
        cout<<"\n\nTUEDAY";
        break;
     case 3:
        cout<<"\n\nWEDNESDAY";
        break;
     case 4:
        cout<<"\n\nTHURSDAY";
        break;
     case 5:
        cout<<"\n\nFRIDAY";
        break;
     case 6:
        cout<<"\n\nSATURDAY";
        break;
     case 7:
        cout<<"\n\nSUNDAY";
        break;
     case 0:
        cout<<"\n\nSUNDAY";
        break;


  }

}



int year(int c)
{
  int x;
  if(c>=400)
  {
    x=c%400;
  }
  else
  {
    x=c;
  }

   return x;
}




int year1(int c)
{
  int x;
   if(c>=100)
   {
      x=(c/100)*5;
   }
   else
    x=0;
   return x;
}




int year2(int c)
{
  int x;
  x=((c%100)/4)*5;
  return x;

}




int year3(int c)
{
  int x;
  x=((c%100)%4);
}
