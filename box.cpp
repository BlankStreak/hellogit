//implementation
#include"box.h"
#include<string>
#include<iostream>
using namespace std;

Box::Box(string boxName, int numItems)
	{
	  boxName = " ";
	  numItems = 0;
	}
Box::~Box()
    { 
    }
void Box::setName(string boxName)
	{
 	  name = boxName;
	}
string Box::getName()
	{
	  return name;
	}
void Box::setNum(int numItems)
	{ 
	  itemTot = numItems;
	}
int getNum()
	{
	 return itemtot;
	}







