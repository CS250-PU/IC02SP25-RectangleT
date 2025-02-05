//****************************************************************************** 
// File name:	 Rectangle.cpp
// Author:		 CS, Pacific University
// Date:			 
// Class:			 CS 250
// Assignment: Rectangle Lab
// Purpose:		 Declares each of the function prototypes associated with 
//						 class Rectangle also known as the Rectangle Interface
//******************************************************************************

#include <fstream>

class Rectangle {
public:
  Rectangle (double = 1.0, double = 1.0);
  void setLength (double);
  void setWidth (double);
  double getLength () const;
  double getWidth () const;
  double getArea () const;
  double getPerimeter () const;
private:
  double mLength;
  double mWidth;
};