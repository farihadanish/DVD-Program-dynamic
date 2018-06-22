#include<iostream>
#include<string>
#include "DVD.h" //Including the DVD Class so that its objects can be created here
using namespace std;
int i;//for for loop
class dvdcollection
{
  public:
  dvdcollection()   //constructor
  {
    this->Totalcost=0;
    this->index=0;
    this->size=5;
   list = new dvd [5];//list is pointing new dvd in heap
  };
	
  dvdcollection(float totalcost , dvd *list)   //constructor
  {
    this->Totalcost=totalcost; 
    this->list=list;
  };
  dvdcollection(dvdcollection & clone)  //copy constructor
  {
    this->Totalcost=clone.Totalcost;
    this->index=clone.index;
    this->list=clone.list;
    this->size=clone.size;
  };
  void setTotalcost(float cost)  //setter
  {
    this->Totalcost=cost;
  };
  void setindex(int index)   //setter
  {
    this->index=index;
  };
  void setlist(dvd *list)   //setter
  {
    this->list=list;
  };
  float gettotalcost()   //getter
  {
    return this->Totalcost;
  };
  int getindex()  //getter
  {
    return this->index;
  };
	
  ////////////////////////////////////////////////////////////////////////
  void add(dvd &d) //For adding dvds in collection
  {
    if(index < size )
    {
      list[index] = d;//to add dvds from 5th index that is why we wrote [index] here
      index++;
    }
    else
    {
      incsize(d);//increase size of list of dvd 
    }
    this->Totalcost += d.getcost();
  };
  
  void display()  //display function
  {
    
    cout<< "        MY COLLECTION    "<<endl;
    for(i=0;i<index;i++)
    {
      cout << this->list[i] <<endl;
    }
    cout<<"Total Cost :" <<this->Totalcost<<endl;
  };
int search(string  name)  //Searching by name
  {
    dvd d1;//created object of dvd 
    int temp=-1;// because 0 will be default and if we write 0 here then it will return 0 if found or not that is why -1
    for(i = 0 ; i < index ; i++)
    {
       d1 = this->list[i];//this line will check on every index of the list and will be incremented if not found
      if(name == d1.getname())
      {
        temp=i;//temp will contain the value of index where the dvd is found
        break;//current nearest loop break
      }
    }
      return temp;
  };
  int search(float cost)  //Searching by price
    {
    dvd d1;//created object of dvd
    int temp=-1;//because 0 will be default and if we wwrite 0 here then it will return 0 whether dvd is found or not
    for(i = 0 ; i < index ; i++)
    {
       d1 = this->list[i];//this line will check on every index of the list and will be incremented if not found
      if(cost == d1.getcost())
      {
        temp=i;//same as above
        break;
      }
    }
      return temp;
    };
    
    void Delete(string name)  //For deleting collection
    {   
    int temp = search(name);//temp is equals to the above searched name
    if(temp >= 0)
   { 
    for(i=temp ; i < index-1 ; i++)//less than 1 index.(ik delete hogi tou oper aati jaegi)
    { 
      this->list[i] = this->list[i+1]; // we'll overwrite so that it can be deleted
    }
    index--;
  }
  else
  {
    cout<<"Not found!!"<<endl;
  }
};
  
  protected:     //private function only accessable within a class
  void incsize(dvd &d)  //increase the size of an array
  {
    size = size * 2;
    dvd *newlist = new dvd[size];//new size will be updated 
    for(i=0 ; i < (size/2) ; i++)//half the size because we have to add after the old size
    {
      newlist[i] = list[i]  ;//the dvds in the old small list array will be added in the new list(copied)
    }
    
    delete [] list;// deleting the old list
    list = newlist ;//now after deleting the old list. old list is now pointing the new list in heap. because in the program we are familiar with the word list not new list
    list[index] = d;//adding new dvds in newlist
    index++;//no of dvds increasing because size increased
  };

  private:
  float Totalcost;
  dvd *list;
  int size;
  int index;
  
};
