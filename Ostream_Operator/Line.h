#ifndef Line_HPP
#define Line_HPP

#include "Point.h"
#include <iostream>
using namespace std;

class Line
{
private:
		
		Point startPoint;	// startpoint
		Point endPoint;		// endpoint

public:

	// Constructors
	Line();									// Line with both end Points at the origin
	Line(const Point& p1, const Point& p2);	// Line with end Points [p1, p2]
	Line(const Line& L1); 				// Copy constructor
	virtual ~Line();							// Destructor

	// Accesssing functions
	Point start() const;						// create two member functions called start() and end(), both function return Point type 
	Point end() const;								

	// Modifiers
	void start(const Point& pt);					// Set Point pt1
	void end(const Point& pt);						// Set Point pt2
	string ToString();                         // create a member function ToString() that returns a string


};

 ostream& operator << (ostream& os, Line p);          // create a global function (not a member function) so can't access private members of class Point for the operator <<


#endif

