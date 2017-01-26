#ifndef BOX_H
#define BOX_H

#include<string>
using namespace std;

class Box
{
   public:
	Box(string, int);
	~Box();
	void setName(string);
	string getName();
	void setNumItems(int);
	int getNum(string);

   private:
	string name;
	int itemTot;
};

#endif
