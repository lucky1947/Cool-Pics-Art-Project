/**
 * Point.cpp
 *
 * EECS 183, Winter 2017
 * Project 4: CoolPics
 *
 * <#Name(s)#> Lucky Chowdhury
 * <#uniqname(s)#> lmchow
 *
 * <#Description#> All member functions for class Point are implemented here.
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write,
// checkRange.

Point::Point() {
    x = 0;
    y = 0;
    
}
Point::Point(int xVal, int yVal) {
    setX(xVal);
    setY(yVal);
}

void Point::setX(int xVal) {
    x = checkRange(xVal);
    
    return;
}

int Point::getX() {
    return x;
}

void Point::setY(int yVal) {
    y = checkRange(yVal);
    
    return;
}

int Point::getY() {
    return y;
}

// Read point in form (x,y)
void Point::read(istream& ins) {
    char parentheses = 'p';
    ins.fail();
    ins >> parentheses >> x >> parentheses >> y >> parentheses;
}

// Write point in form (x,y)
void Point::write(ostream& outs) {
    outs.fail();
    outs << "(" << checkRange(x) << "," << checkRange(y) << ")" << endl;
}

// Check if value is in range of drawing board
int Point::checkRange(int val) {
    if (val < 0) {
        return 0;
    } else if (val >= DIMENSION) {
        return DIMENSION - 1 ;
    } else {
        return val;
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}

