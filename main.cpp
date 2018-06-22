#include<iostream>
#include "DvDCollection.h"
using namespace std;
int main()
{
	
  dvdcollection d1;
  dvd dvd1("DVD1",20);
  d1.add(dvd1);
  
  dvd dvd2("DVD2",2000);
  d1.add(dvd2);
  
  dvd dvd3("DVD3",2500);
  d1.add(dvd3);
  
  d1.display();
  
  cout<<d1.search("DVD3")<<endl;
  d1.Delete("DVD1");
  d1.display();
  
//  d1.add(*(new dvd("Windows XP",150)));
//  d1.add(*(new dvd("Windows 10",170)));
//  d1.add(*(new dvd("GTA VC",100)));
//  d1.add(*(new dvd("IGI",120)));
//  d1.add(*(new dvd("NEED FOR SPEED",150)));
//  d1.add(*(new dvd("CALL OF DUTY",170)));
//  d1.add(*(new dvd("CRICKET 2011",100)));
//  d1.display();
//  cout<<"\n\n\n\n"<<d1.search("IGI");
//  d1.Delete("CRICKET 2011");
//  d1.display();
  //d1.Delete("IGI");
  //d1.display();

//  d2.add(*(new dvd("Wacdadc",170)));
//  d2.add(*(new dvd("GTA VC",100)));
//  d2.add(*(new dvd("IGI",120)));
//  d2.add(*(new dvd("NEED FOR SPEED",150)));
//  d2.add(*(new dvd("CALL OF DUTY",170)));
//  d2.add(*(new dvd("CRIadcdacdcdc",100)));
//  d2.display();
//  cout << endl <<"Index :"<<d1.search(100)<<endl;
//  d1.Delete("CRICKET 2011");
//  d1.display();
//  system("pause");

};


//https://github.com/Hamzaaasif/dynamic-memory-allocation-dvd-collection-.git
