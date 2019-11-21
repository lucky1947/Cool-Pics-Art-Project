/**
 * test.cpp
 *
 * EECS 183, Winter 2017
 * Project 4: CoolPics
 *
 * <#Name(s)#> Lucky Chowdhury
 * <#uniqname(s)#> lmchow
 *
 * <#Description#> Test suite for all classes and their member functions.
 */


#include <iostream>
using namespace std;

#include <fstream>
#include "Point.h"
#include "Color.h"
#include "Circle.h"
#include "Line.h"
#include "Rectangle.h"
#include "Triangle.h"

void test_point();
void test_color();
void test_line();
void test_triangle();
void test_circle();
void test_rectangle();

int main() {
    test_point();
    test_color();
    test_line();
    test_triangle();
    test_circle();
    test_rectangle();
    
    return 0;
}
    // testing for Point.cpp

void test_point() {
    Point pt1;
    
    pt1.setX(15);
    
    cout << "pt1 is: " << pt1 << endl;
    
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "pt1 is: " << pt1 << endl;
    
    Point pt2;
    
    pt2.setX(20);
    
    cout << "pt2 is: " << pt2 << endl;
    
    ifstream input_file2;
    input_file2.open("data1.txt");
    pt2.read(input_file);
    cout << "pt2 is: " << pt2 << endl;
    
    Point pt3;
    
    pt3.setX(7);
    
    cout << "pt3 is: " << pt3 << endl;
    
    ifstream input_file3;
    input_file3.open("data1.txt");
    pt3.read(input_file);
    cout << "pt3 is: " << pt3 << endl;
    
    Point pt4;
    
    pt4.setX(19);
    
    cout << "pt4 is: " << pt4 << endl;
    
    ifstream input_file4;
    input_file4.open("data1.txt");
    pt4.read(input_file);
    cout << "pt4 is: " << pt4 << endl;
    
    Point pt5;
    
    pt5.setX(100);
    
    cout << "pt5 is: " << pt5 << endl;
    
    ifstream input_file5;
    input_file5.open("data1.txt");
    pt5.read(input_file);
    cout << "pt5 is: " << pt5 << endl;
    
    Point pt6;
    
    pt6.setX(-6);
    
    cout << "pt6 is: " << pt6 << endl;
    
    ifstream input_file6;
    input_file6.open("data1.txt");
    pt6.read(input_file);
    cout << "pt6 is: " << pt6 << endl;
    
    Point pt7;
    
    pt7.setX(120);
    
    cout << "pt7 is: " << pt7 << endl;
    
    ifstream input_file7;
    input_file7.open("data1.txt");
    pt7.read(input_file);
    cout << "pt7 is: " << pt7 << endl;
    
    Point pt8;
    
    pt8.setY(120);
    
    cout << "pt8 is: " << pt8 << endl;
    
    ifstream input_file8;
    input_file8.open("data1.txt");
    pt8.read(input_file);
    cout << "pt8 is: " << pt8 << endl;
    
    Point pt9;
    
    pt9.setY(-6);
    
    cout << "pt9 is: " << pt9 << endl;
    
    ifstream input_file9;
    input_file9.open("data1.txt");
    pt9.read(input_file);
    cout << "pt9 is: " << pt9 << endl;
    
    Point pt10(10, 100);
    
    cout << "pt10 is: " << pt10 << endl;
    
    ifstream input_file10;
    input_file10.open("data1.txt");
    pt10.read(input_file);
    cout << "pt10 is: " << pt10 << endl;
    
    Point pt11(-7, 99);
    
    cout << "pt11 is: " << pt11 << endl;

    ifstream input_file11;
    input_file11.open("data1.txt");
    pt11.read(input_file);
    cout << "pt11 is: " << pt11 << endl;
    
    //test of default constructor
    Point p1;
    // test of the other constructor
    Point p2(3, 9);
    
    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);
    
    // test of member functions getX() and getY()
    cout << "(" << p1.getX()
    << ", " << p1.getY()
    << ")" << endl;
    // you can also do cin >> p1;
    p1.read(cin);
    
    cout << p1 << endl;
     
}

    // testing for Color.cpp
    
    void test_color() {
        
    Color color;
    Color col1(0, 255, 0);
    Color col2(-4, 255, 0);
    Color col3(255, -2, 0);
    Color col4(0, 0, -4);
    Color col5(256, 0, 0);
    Color col6(0, 256, 0);
    Color col7(0, 0, 256);
        
        color.setRed(255);
        color.setRed(256);
        color.setRed(-2);
        color.setRed(0);
        
        color.setGreen(256);
        cout << color << endl;
        cout << color.getGreen() << endl;
        color.setGreen(255);
        cout << color << endl;
        cout << color.getGreen() << endl;
        color.setGreen(0);
        cout << color << endl;
        cout << color.getGreen() << endl;
        color.setGreen(-2);
        cout << color << endl;
        cout << color.getGreen() << endl;
        
        
        color.setBlue(255);
        cout << color << endl;
        cout << color.getBlue() << endl;
        color.setBlue(256);
        cout << color << endl;
        cout << color.getBlue() << endl;
        color.setBlue(-2);
        cout << color << endl;
        cout << color.getBlue() << endl;
        color.setBlue(0);
        cout << color << endl;
        cout << color.getBlue() << endl;
        
        
        ifstream input_file;
        input_file.open("data1.txt");
        color.read(input_file);
        cout << "Color is: " << color << endl;
        
        cout << color.getRed() << color.getGreen() << color.getBlue() << endl;

        color.read(cin);
        cout << color << endl;
        color.write(cout);
    }
    
    // testing for Line.cpp

void test_line() {
    Line l1;
    
    Point p1(10,10);
    Point p2(90,20);
    Point p3(-10,10);
    Point p4(10,-20);
    Point p5(10,-10);
    Point p6(-10,20);
    Point p7(12,12);
    Point p8(80,10); 
    
    Color col1(255,150,0);
    Color col2(256,150,0);
    Color col3(255,150,-6);
    Color col4(0,-15,255);
    
    Line l2(p1,p2,col1);
    Line l3(p3,p4,col2);
    Line l4(p5,p6,col3);
    Line l5(p7,p8,col4);
    
    cout << l2 << endl;
    cout << l3 << endl;
    cout << l4 << endl;
    cout << l5 << endl;
    
    l1.setEnd(p1);
    cout << l1 << endl;
    l1.setEnd(p2);
    cout << l1 << endl;
    l1.setEnd(p3);
    cout << l1 << endl;
    l1.setEnd(p4);
    cout << l1 << endl;
    l1.setEnd(p5);
    cout << l1 << endl;
    l1.setEnd(p6);
    cout << l1 << endl;
    l1.setEnd(p7);
    cout << l1 << endl;
    l1.setEnd(p8);
    cout << l1 << endl;
    
    ifstream input_file;
    input_file.open("data1.txt");
    l1.read(input_file);
    cout << "Line is: " << l1 << endl;
    
    l1.read(cin);
    cout << l1.getStart() << endl;
    cout << l1 << endl;
    l1.write(cout);
}

    // testing for Triangle.cpp

void test_triangle() {
    Triangle t1;
    
    Point p1(15,50);
    Point p2(15,90);
    Point p3(40,80);
    Color col1(0,140,20);
    Triangle t2(p1,p2,p3,col1);
    cout << t2 << endl;
    
    Point p4(-25,60);
    Point p5(25,-100);
    Point p6(40,80);
    Color col2(140,-20,0);
    Triangle t3(p4,p5,p6,col2);
    cout << t3 << endl;
    
    Point p7(90,60);
    Point p8(90,90);
    Point p9(40,80);
    Color col3(0,0,255);
    Color col4(0,255,0);
    Color col5(255,0,0);
    Triangle t4(p7,col3,p8,col4,p9,col5);
    cout << t4 << endl;

    Point p10(90,60);
    Point p11(90,90);
    Point p12(40,80);
    Color col6(0,0,256);
    Color col7(-2,255,0);
    Color col8(255,0,0);
    Triangle t5(p10,col6,p11,col7,p12,col8);
    cout << t5 << endl;
    
    t1.setVertexThree(p1);
    cout << t1 << endl;
    t1.setVertexThree(p2);
    cout << t1 << endl;
    t1.setVertexThree(p3);
    cout << t1 << endl;
    
    t1.setVertexOne(p1);
    cout << t1 << endl;
    t1.setVertexOne(p2);
    cout << t1 << endl;
    t1.setVertexOne(p3);
    cout << t1 << endl;
    
    t1.setVertexThreeColor(col1);
    cout << t1 << endl;
    t1.setVertexThreeColor(col2);
    cout << t1 << endl;
    t1.setVertexThreeColor(col3);
    cout << t1 << endl;
    
    ifstream input_file;
    input_file.open("data1.txt");
    t1.read(input_file);
    cout << "Triangle is: " << t1 << endl;
    
    cout << t1.getVertexOne() << endl;
    cout << t1.getVertexThreeColor() << endl;
    t1.write(cout);

}
    // testing for Circle.cpp

void test_circle() {
    Circle c1;
    
    Point p1(50,50);
    Color col1(35,230,0);
    Circle c2(p1,25,col1);
    cout << c2 << endl;
    
    Point p2(-50,50);
    Color col2(35,230,0);
    Circle c3(p2,25,col2);
    cout << c3 << endl;
    
    Point p3(-70,70);
    Color col3(235,-230,0);
    Circle c4(p3,25,col3);
    cout << c4 << endl;
    
    Point p4(70,70);
    Color col4(235,230,0);
    Circle c5(p3,-25,col3);
    cout << c5 << endl;

    Point p5(70,70);
    Color col5(235,230,0);
    Circle c6(p3,125,col5);
    cout << c6 << endl;
    
    Point p6(70,-70);
    Color col6(235,230,0);
    Circle c7(p6,25,col6);
    cout << c7 << endl;
    
    Point p7(70,70);
    Color col7(256,230,0);
    Circle c8(p6,25,col7);
    cout << c8 << endl;
    
    Point p8(70,70);
    Color col8(235,230,256);
    Circle c9(p6,25,col8);
    cout << c9 << endl;

    c1.setCenter(p1);
    cout << c1 << endl;
    c1.setCenter(p2);
    cout << c1 << endl;
    c1.setCenter(p3);
    cout << c1 << endl;
    c1.setCenter(p4);
    cout << c1 << endl;
    c1.setCenter(p5);
    cout << c1 << endl;
    c1.setCenter(p6);
    cout << c1 << endl;
    c1.setCenter(p7);
    cout << c1 << endl;
    c1.setCenter(p8);
    cout << c1 << endl;
    
    c1.setRadius(25);
    cout << c1 << endl;
    c1.setRadius(-25);
    cout << c1 << endl;
    c1.setRadius(125);
    cout << c1 << endl;
    c1.setRadius(0);
    cout << c1 << endl;
    
    ifstream input_file;
    input_file.open("data1.txt");
    c1.read(input_file);
    cout << "Circle is: " << c1 << endl;

}
    // testing for Rectangle.cpp

void test_rectangle() {
    /*
     Rectangle:: constructor test #1
     Rectangle:: constructor test #2
     Rectangle:: getEnd
     Rectangle:: setColor
     Rectangle:: setStart
     */
    Rectangle r1;
    
    Point p1(20,20);
    Point p2(40,40);
    Color col1(80,30,200);
    Rectangle r2(p1,p2,col1);
    cout << r2 << endl;
    
    Point p3(-20,20);
    Point p4(40,-40);
    Color col2(80,30,200);
    Rectangle r3(p3,p4,col2);
    cout << r3 << endl;
    
    Point p5(45,20);
    Point p6(85,49);
    Color col3(220,5,5);
    Color col4(180,51,255);
    Color col5(180,15,255);
    Color col6(220,5,5);
    Rectangle r4(p5,p6,col3,col4,col5,col6);
    cout << r4 << endl;
    
    Point p7(10,10);
    Point p8(20,20);
    Color col7(-80,30,200);
    Rectangle r5(p7,p8,col7);
    cout << r5 << endl;
    
    Point p9(10,10);
    Point p10(20,20);
    Color col8(80,30,256);
    Rectangle r6(p9,p10,col8);
    cout << r6 << endl;
    
    Point p11(45,20);
    Point p12(85,49);
    Color col9(220,-5,5);
    Color col10(180,51,-255);
    Color col11(256,15,255);
    Color col12(5,225,0);
    Rectangle r7(p11,p12,col9,col10,col11,col12);
    cout << r7 << endl;

    r1.setColor(col1);
    r1.setColor(col2);
    r1.setColor(col3);
    r1.setColor(col4);
    r1.setColor(col5);
    r1.setColor(col6);
    r1.setColor(col7);
    r1.setColor(col8);
    r1.setColor(col9);
    r1.setColor(col10);
    r1.setColor(col11);
    r1.setColor(col12);
    
    r1.setStart(p1);
    r1.setStart(p2);
    r1.setStart(p3);
    r1.setStart(p4);
    r1.setStart(p5);
    r1.setStart(p6);
    r1.setStart(p7);
    r1.setStart(p8);
    r1.setStart(p9);
    r1.setStart(p10);
    r1.setStart(p11);
    r1.setStart(p12);
    
    ifstream input_file;
    input_file.open("data1.txt");
    r1.read(input_file);
    cout << "Rectangle is: " << r1 << endl;

    cout << r1.getEnd() << endl;
    
}


