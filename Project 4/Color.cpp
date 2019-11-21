/**
 * Color.cpp
 *
 * EECS 183, Winter 2017
 * Project 4: CoolPics
 *
 * <#Name(s)#> Lucky Chowdhury
 * <#uniqname(s)#> lmchow
 *
 * <#Description#> All member functions for class Color are implemented here.
 */

#include "Color.h"

Color::Color() {
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int redVal, int greenVal, int blueVal) {
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
}

void Color::setRed(int redVal) {
    red = checkRange(redVal);
}

int Color::getRed() {
    return red;
}

void Color::setGreen(int greenVal) {
    green = checkRange(greenVal);
}

int Color::getGreen() {
    return green;
}

void Color::setBlue(int blueVal) {
    blue = checkRange(blueVal);
}

int Color::getBlue() {
    return blue;
}

// Read color in form red green blue
void Color::read(istream& ins) {
    int red = 0;
    int green = 0;
    int blue = 0;
    
    ins >> red >> green >> blue;
    
    setRed(red);
    setGreen(green);
    setBlue(blue);
}

// Write color in form red  green  blue
void Color::write(ostream& outs) {
    int red = getRed();
    int green = getGreen();
    int blue = getBlue();
    
    outs << red << " " << green << " " << blue;
}

// Check if value is in range [0,255] on the RGB color scale
int Color::checkRange(int val) {
    if (val < 0) {
        return 0;
    } else if (val > 255) {
        return 255;
    } else {
        return val;
    }
}


// Your code goes above this line.
// Don't change the implementations below!
  
istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}

