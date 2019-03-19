#ifndef _COOP_H
#define _COOP_H 

#include "../Land.h"

class Coop : public Land{
	public:
		Coop(); //ctor
		
		LAND_TYPE landType(); //return an int representation of child class coop

		char Render();		  //outputs char representation
		void SetRender(char); //setter
};

#endif