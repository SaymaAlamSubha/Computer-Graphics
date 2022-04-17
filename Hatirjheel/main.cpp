#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;


static void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


static void bridgeRoad()
{


    glLineWidth(15.5);
    glBegin(GL_LINES);// bridge upper part
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-50+x,-20+y );
    }



    glEnd();

    glLineWidth(15.5);
    glBegin(GL_LINES);// bridge upper part
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=22.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-15+x,-20+y );
    }



    glEnd();

    glLineWidth(15.5);
    glBegin(GL_LINES);// bridge upper part
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(19+x,-20+y );
    }



    glEnd();



    glBegin(GL_POLYGON);              //bridge road
    glColor3ub(56, 56, 56);


    glVertex2f(-80.0f, -20.0f);
    glVertex2f(45.0f, -20.0f);
    glVertex2f(45.0f, -10.0f);
    glVertex2f(-75.0f, -10.0f);

    glEnd();

    glBegin(GL_POLYGON);              //bridge road side
    glColor3ub(255,250,240);


    glVertex2f(-80.0f, -21.0f);
    glVertex2f(45.0f, -21.0f);
    glVertex2f(45.0f, -20.0f);
    glVertex2f(-80.0f, -20.0f);

    glEnd();

    glBegin(GL_POLYGON);              //bridge road side
    glColor3ub(255,250,240);


    glVertex2f(-75.0f, -10.0f);
    glVertex2f(45.0f, -10.0f);
    glVertex2f(45.0f, -9.0f);
    glVertex2f(-75.0f, -9.0f);

    glVertex2f(-80.0f, -20.0f);
    glVertex2f(-80.0f, -20.0f);

    glVertex2f(-75.0f, -11.0f);
    glVertex2f(-75.0f, -11.0f);


    glEnd();







    glPushMatrix();
    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);

    glEnd();







    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();



    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();

    glPopMatrix();










    glLineWidth(15.5);
    glBegin(GL_LINES);// bridge upper part
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-50+x,-30+y );
    }



    glEnd();









    glLineWidth(15.5);
    glBegin(GL_LINES);// bridge upper part
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=22.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-15+x,-30+y );
    }



    glEnd();



    glLineWidth(15.5);
    glBegin(GL_LINES);// bridge upper part
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(19+x,-30+y );
    }



    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);              //railing
    glColor3ub(192,192,192);

    glVertex2f(-60.0f, -18.0f);    // x, y
    glVertex2f(29.0f, -18.0f);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);              //railing
    glColor3ub(192,192,192);

    glVertex2f(-60.0f, -8.0f);    // x, y
    glVertex2f(29.0f, -8.0f);

    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);              //railing
    glColor3ub(192,192,192);

    glVertex2f(-62.0f, -19.0f);    // x, y
    glVertex2f(30.0f, -19.0f);

    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);              //railing
    glColor3ub(192,192,192);

    glVertex2f(-62.0f, -9.0f);    // x, y
    glVertex2f(30.0f, -9.0f);




    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);              //railing
    glColor3ub(178,34,34);


    glVertex2f(-46.0f, -20.0f);    // x, y
    glVertex2f(-46.0f, -14.0f);

    glVertex2f(-46.0f, -10.0f);    // x, y
    glVertex2f(-46.0f, -4.0f);

    glVertex2f(-46.50f, -20.0f);    // x, y
    glVertex2f(-46.50f, -14.0f);

    glVertex2f(-46.50f, -10.0f);    // x, y
    glVertex2f(-46.50f, -4.0f);

    glVertex2f(-50.0f, -20.0f);    // x, y
    glVertex2f(-50.0f, -14.0f);

    glVertex2f(-50.0f, -10.0f);    // x, y
    glVertex2f(-50.0f, -4.0f);

    glVertex2f(-50.50f, -20.0f);    // x, y
    glVertex2f(-50.50f, -14.0f);

    glVertex2f(-50.50f, -10.0f);    // x, y
    glVertex2f(-50.50f, -4.0f);

    glVertex2f(-54.0f, -20.0f);    // x, y
    glVertex2f(-54.0f, -14.0f);

    glVertex2f(-54.0f, -10.0f);    // x, y
    glVertex2f(-54.0f, -4.0f);

    glVertex2f(-54.50f, -20.0f);    // x, y
    glVertex2f(-54.50f, -14.0f);

    glVertex2f(-54.50f, -10.0f);    // x, y
    glVertex2f(-54.50f, -4.0f);

    //
    glVertex2f(-30.0f, -20.0f);    // x, y
    glVertex2f(-30.0f, -14.0f);

    glVertex2f(-30.0f, -10.0f);    // x, y
    glVertex2f(-30.0f, -4.0f);

    glVertex2f(-30.50f, -20.0f);    // x, y
    glVertex2f(-30.50f, -14.0f);

    glVertex2f(-30.50f, -10.0f);    // x, y
    glVertex2f(-30.50f, -4.0f);

    glVertex2f(-27.0f, -20.0f);    // x, y
    glVertex2f(-27.0f, -14.0f);

    glVertex2f(-27.0f, -10.0f);    // x, y
    glVertex2f(-27.0f, -4.0f);

    glVertex2f(-27.50f, -20.0f);    // x, y
    glVertex2f(-27.50f, -14.0f);

    glVertex2f(-27.50f, -10.0f);    // x, y
    glVertex2f(-27.50f, -4.0f);

    glVertex2f(-24.0f, -20.0f);    // x, y
    glVertex2f(-24.0f, -12.0f);

    glVertex2f(-24.0f, -10.0f);    // x, y
    glVertex2f(-24.0f, -2.0f);

    glVertex2f(-24.50f, -20.0f);    // x, y
    glVertex2f(-24.50f, -12.0f);

    glVertex2f(-24.50f, -10.0f);    // x, y
    glVertex2f(-24.50f, -2.0f);

    glVertex2f(-21.0f, -20.0f);    // x, y
    glVertex2f(-21.0f, -10.0f);

    glVertex2f(-21.0f, -10.0f);    // x, y
    glVertex2f(-21.0f, -0.0f);

    glVertex2f(-21.50f, -20.0f);    // x, y
    glVertex2f(-21.50f, -10.0f);

    glVertex2f(-21.50f, -10.0f);    // x, y
    glVertex2f(-21.50f, -0.0f);


    glVertex2f(-18.0f, -20.0f);    // x, y
    glVertex2f(-18.0f, -10.0f);

    glVertex2f(-18.0f, -10.0f);    // x, y
    glVertex2f(-18.0f, -0.0f);

    glVertex2f(-18.50f, -20.0f);    // x, y
    glVertex2f(-18.50f, -10.0f);

    glVertex2f(-18.50f, -10.0f);    // x, y
    glVertex2f(-18.50f, -0.0f);

    glVertex2f(-15.0f, -20.0f);    // x, y
    glVertex2f(-15.0f, -10.0f);

    glVertex2f(-15.0f, -10.0f);    // x, y
    glVertex2f(-15.0f, -0.0f);

    glVertex2f(-15.50f, -20.0f);    // x, y
    glVertex2f(-15.50f, -10.0f);

    glVertex2f(-15.50f, -10.0f);    // x, y
    glVertex2f(-15.50f, -0.0f);

    glVertex2f(-12.0f, -20.0f);    // x, y
    glVertex2f(-12.0f, -10.0f);

    glVertex2f(-12.0f, -10.0f);    // x, y
    glVertex2f(-12.0f, -0.0f);

    glVertex2f(-12.50f, -20.0f);    // x, y
    glVertex2f(-12.50f, -10.0f);

    glVertex2f(-12.50f, -10.0f);    // x, y
    glVertex2f(-12.50f, -0.0f);

    glVertex2f(-9.0f, -20.0f);    // x, y
    glVertex2f(-9.0f, -10.0f);

    glVertex2f(-9.0f, -10.0f);    // x, y
    glVertex2f(-9.0f, -0.0f);

    glVertex2f(-9.50f, -20.0f);    // x, y
    glVertex2f(-9.50f, -10.0f);

    glVertex2f(-9.50f, -10.0f);    // x, y
    glVertex2f(-9.50f, -0.0f);

    glVertex2f(-6.0f, -20.0f);    // x, y
    glVertex2f(-6.0f, -10.0f);

    glVertex2f(-6.0f, -10.0f);    // x, y
    glVertex2f(-6.0f, -0.0f);

    glVertex2f(-6.50f, -20.0f);    // x, y
    glVertex2f(-6.50f, -10.0f);

    glVertex2f(-6.50f, -10.0f);    // x, y
    glVertex2f(-6.50f, -0.0f);


    glVertex2f(-3.0f, -20.0f);    // x, y
    glVertex2f(-3.0f, -12.0f);

    glVertex2f(-3.0f, -10.0f);    // x, y
    glVertex2f(-3.0f, -2.0f);

    glVertex2f(-3.50f, -20.0f);    // x, y
    glVertex2f(-3.50f, -12.0f);

    glVertex2f(-3.50f, -10.0f);    // x, y
    glVertex2f(-3.50f, -2.0f);

    glVertex2f(-0.0f, -20.0f);    // x, y
    glVertex2f(-0.0f, -14.0f);

    glVertex2f(-0.0f, -10.0f);    // x, y
    glVertex2f(-0.0f, -4.0f);

    glVertex2f(-0.50f, -20.0f);    // x, y
    glVertex2f(-0.50f, -14.0f);

    glVertex2f(-0.50f, -10.0f);    // x, y
    glVertex2f(-0.50f, -4.0f);

    glVertex2f(13.0f, -20.0f);    // x, y
    glVertex2f(13.0f, -14.0f);

    glVertex2f(13.0f, -10.0f);    // x, y
    glVertex2f(13.0f, -4.0f);

    glVertex2f(13.50f, -20.0f);    // x, y
    glVertex2f(13.50f, -14.0f);

    glVertex2f(13.50f, -10.0f);    // x, y
    glVertex2f(13.50f, -4.0f);

    glVertex2f(16.0f, -20.0f);    // x, y
    glVertex2f(16.0f, -14.0f);

    glVertex2f(16.0f, -10.0f);    // x, y
    glVertex2f(16.0f, -4.0f);

    glVertex2f(16.50f, -20.0f);    // x, y
    glVertex2f(16.50f, -14.0f);

    glVertex2f(16.50f, -10.0f);    // x, y
    glVertex2f(16.50f, -4.0f);

    glVertex2f(19.0f, -20.0f);    // x, y
    glVertex2f(19.0f, -14.0f);

    glVertex2f(19.0f, -10.0f);    // x, y
    glVertex2f(19.0f, -4.0f);

    glVertex2f(19.50f, -20.0f);    // x, y
    glVertex2f(19.50f, -14.0f);

    glVertex2f(19.50f, -10.0f);    // x, y
    glVertex2f(19.50f, -4.0f);

    glVertex2f(22.0f, -20.0f);    // x, y
    glVertex2f(22.0f, -14.0f);

    glVertex2f(22.0f, -10.0f);    // x, y
    glVertex2f(22.0f, -4.0f);

    glVertex2f(22.50f, -20.0f);    // x, y
    glVertex2f(22.50f, -14.0f);

    glVertex2f(22.50f, -10.0f);    // x, y
    glVertex2f(22.50f, -4.0f);


    glEnd();

}




float _move1 = 0.0f;
float _move2 = 0.0f;

static void water()
{
    glBegin(GL_POLYGON);              //water
    glColor3ub(24, 116, 205);



    glVertex2f(-70.0f, -100.0f);
    glVertex2f(40.0f, -100.0f);
    glColor3ub(191, 239, 255);
    glVertex2f(31.0f, 15.0f);
    glColor3ub(180, 240, 255);
    glVertex2f(-65.0f, 15.0f);

    glEnd();


    glBegin(GL_QUADS);              //water
    glColor3ub(238, 207, 161);



    glVertex2f(-71.0f, -100.0f);
    glVertex2f(-70.0f, -100.0f);
    glColor3ub(139, 121, 94);
    glVertex2f(-65.0f, 15.0f);
    glVertex2f(-70.0f, 15.0f);

    glEnd();


    glBegin(GL_QUADS);              //water
    glColor3ub(238, 207, 161);



    glVertex2f(40.0f, -100.0f);
    glVertex2f(42.0f, -100.0f);
     glColor3ub(139, 121, 94);
    glVertex2f(35.0f, 15.0f);
    glVertex2f(31.0f, 15.0f);

    glEnd();



    glPushMatrix();
    glTranslatef(_move1,0.0,0.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);              //moving water
    glColor3ub(255,255,255);


    glVertex2f(-65.0f, -80.0f);    // x, y
    glVertex2f(-61.0f, -80.0f);

    glVertex2f(-50.0f, -80.0f);    // x, y
    glVertex2f(-56.0f, -80.0f);

    glVertex2f(-48.0f, -81.0f);    // x, y
    glVertex2f(-58.0f, -81.0f);

    glVertex2f(-30.0f, -81.0f);    // x, y
    glVertex2f(-38.0f, -81.0f);

    glVertex2f(-32.0f, -75.0f);    // x, y
    glVertex2f(-39.0f, -75.0f);

    glVertex2f(-29.0f, -71.0f);    // x, y
    glVertex2f(-39.0f, -71.0f);

    glVertex2f(-10.0f, -60.0f);    // x, y
    glVertex2f(-4.0f, -60.0f);

    glVertex2f(-55.0f, -50.0f);    // x, y
    glVertex2f(-44.0f, -50.0f);

    glVertex2f(-8.0f, -65.0f);    // x, y
    glVertex2f(-16.0f, -65.0f);

    glVertex2f(-50.0f, -65.0f);    // x, y
    glVertex2f(-39.0f, -65.0f);





    glVertex2f(-15.0f, 10.0f);    // x, y
    glVertex2f(-26.0f, 10.0f);

    glVertex2f(-14.0f, 9.0f);    // x, y
    glVertex2f(-28.0f, 9.0f);

    glVertex2f(-10.0f, -19.0f);    // x, y
    glVertex2f(-18.0f, -19.0f);

    glVertex2f(-20.0f, -19.0f);    // x, y
    glVertex2f(-18.0f, -19.0f);

    glVertex2f(-50.0f, 14.0f);    // x, y
    glVertex2f(-58.0f, 14.0f);

    glVertex2f(-60.0f, 11.0f);    // x, y
    glVertex2f(-66.0f, 11.0f);

    glVertex2f(-40.0f, 6.0f);    // x, y
    glVertex2f(-49.0f, 6.0f);

    glVertex2f(-60.0f, -31.0f);    // x, y
    glVertex2f(-66.0f, -31.0f);

    glVertex2f(-40.0f, -32.0f);    // x, y
    glVertex2f(-46.0f, -32.0f);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(_move2,0.0,0.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);              //moving water
    glColor3ub(255,255,255);






    glVertex2f(29.0f, -71.0f);    // x, y
    glVertex2f(39.0f, -71.0f);

    glVertex2f(15.0f, 9.0f);    // x, y
    glVertex2f(22.0f, 9.0f);

    glVertex2f(10.0f, -19.0f);    // x, y
    glVertex2f(18.0f, -19.0f);

    glVertex2f(20.0f, -21.0f);    // x, y
    glVertex2f(18.0f, -21.0f);

    glVertex2f(20.0f, -29.0f);    // x, y
    glVertex2f(28.0f, -29.0f);

    glVertex2f(0.0f, -35.0f);    // x, y
    glVertex2f(-9.0f, -35.0f);

    glEnd();
    glPopMatrix();


}


static void update1(int value)//for water
{
    _move1 += 2.2;
    if(_move1 > 40)

    {
        _move1 = -2;
    }

    glutPostRedisplay();
    glutTimerFunc(200, update1, 0);
}

static void update2(int value)//for water
{
    _move2 -= 2.2;
    if(_move2 < -60)

    {
        _move2 = 3;
    }

    glutPostRedisplay();
    glutTimerFunc(200, update2, 0);
}


float moveship=0.0f;

static void ship()
{
    glPushMatrix();
    glTranslatef(moveship,0.0,0.0);
    glTranslatef(-12.0,-60.0,0.0);
    glBegin(GL_POLYGON);              // body
	glColor3ub(25,25,112);

    glVertex2f(11.0f, 1.0f);
    glVertex2f(6.0f, -1.0f);
    glColor3ub(178 ,34, 34);
	glVertex2f(4.0f, -2.0f);
	glVertex2f(-14.0f, -2.0f);
	glVertex2f(-15.0f, -1.0f);

	glVertex2f( -18.0f, -1.0f);
	glVertex2f( -18.0f, -3.0f);
	glVertex2f( -16.0f , -3.5f);
	glColor3ub(25,25,112);
	glVertex2f( -16.0f, -5.0f);
	glVertex2f( 5.0f, -5.0f);



    glEnd();

        glLineWidth(1.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(128,128,128);


        glVertex2f(10.75f, 1.00f);    // x, y
        glVertex2f(11.50f, 2.00f);

        glVertex2f(9.75f, 0.90f);    // x, y
        glVertex2f(10.50f, 1.90f);

        glVertex2f(8.75f, 0.80f);    // x, y
        glVertex2f(9.50f, 1.80f);

        glVertex2f(7.75f, 0.70f);    // x, y
        glVertex2f(8.50f, 1.70f);

        glVertex2f(6.75f, 0.60f);    // x, y
        glVertex2f(7.50f, 1.60f);


        glVertex2f(11.50f, 2.00f);
        glVertex2f(6.5f, 1.5f);

        glVertex2f(5.75f, 0.5f);    // x, y
        glVertex2f(6.50f, 1.50f);



        glEnd();


    glBegin(GL_POLYGON);              // building
	glColor3ub(176, 196, 222);


    glVertex2f(-14.0f, -0.70f);

	glVertex2f(2.50f, 0.40f);
	glVertex2f(2.0f, 1.0f);
	glVertex2f( -2.0f, 1.0f);
	glVertex2f( -2.50f, 2.0f);
	glVertex2f( -4.0f , 2.0f);
	glVertex2f( -4.50f, 3.0f);
	glVertex2f( -6.0f, 3.0f);

	glVertex2f( -6.50f, 4.0f);
	glVertex2f( -5.50f, 4.50f);
	glVertex2f( -15.0f, 3.20f);
	glVertex2f( -14.0f, 3.0f);

    glEnd();

    glBegin(GL_POLYGON);              // 1st floor glass


    glColor3ub(255, 255, 255);

	glVertex2f(2.50f, 0.40f);
	glVertex2f(2.10f, 0.90f);
	glColor3ub(105, 105, 105);

	glVertex2f( 1.0f, 0.90f);
	glVertex2f( 1.0f, 0.40f);

    glEnd();


    glBegin(GL_POLYGON);              // 1st floor glass


    glColor3ub(255, 255, 255);

	glVertex2f(0.70f, 0.40f);
	glVertex2f(0.70f, 0.90f);
	glColor3ub(105, 105, 105);

	glVertex2f( -1.0f, 0.90f);
	glVertex2f( -1.0f, 0.30f);

    glEnd();


    glBegin(GL_POLYGON);              // 3rd floor glass


    glColor3ub(255, 255, 255);

	glVertex2f(-4.0f, 2.10f);
	glVertex2f(-4.50f, 2.90f);
	glColor3ub(105, 105, 105);

	glVertex2f( -5.50f, 2.80f);
	glVertex2f( -5.50f, 2.10f);

    glEnd();

    glBegin(GL_POLYGON);              // 3rd floor glass
    glColor3ub(255, 255, 255);

	glVertex2f(-5.95f, 2.10f);
	glVertex2f(-5.95f, 2.70f);
	glColor3ub(105, 105, 105);

	glVertex2f( -7.0f, 2.80f);
	glVertex2f( -7.0f, 2.0f);

    glEnd();

    glBegin(GL_POLYGON);              // 2nd floor glass
    glColor3ub(255, 255, 255);

    glVertex2f(-2.10f, 1.20f);
	glVertex2f(-2.5f, 1.80f);
	glColor3ub(105, 105, 105);

	glVertex2f( -4.0f, 1.80f);
	//glColor3ub(255, 255, 255);
	glVertex2f( -4.0f, 1.2f);

    glEnd();

    glBegin(GL_POLYGON);              // 4th floor glass
    glColor3ub(255, 255, 255);

    glVertex2f(-6.10f, 3.20f);
	glVertex2f(-6.5f, 4.0f);
	glColor3ub(105, 105, 105);

	glVertex2f( -7.50f, 3.80f);
	//glColor3ub(255, 255, 255);
	glVertex2f( -7.50f, 3.2f);

    glEnd();

    glLineWidth(1.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(128,128,128);


        glVertex2f( -2.0f, 1.0f);
        glVertex2f( -14.40f, 0.25f);

        glVertex2f( -4.0f , 2.0f);
        glVertex2f( -14.50f, 1.25f);

        glVertex2f( -6.0f, 3.0f);
        glVertex2f( -14.60f, 2.25f);

    glEnd();

    glBegin(GL_POLYGON);// 1-1 window of ship
	for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-4+x,0.35+y );
        }
        glEnd();

        glBegin(GL_LINES);// 1-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-4+x,0.35+y );
        }
        glEnd();

        glBegin(GL_POLYGON);// 1-2 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8+x,0.20+y );
        }
        glEnd();

        glBegin(GL_LINES);// 1-2 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8+x,0.20+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// 1-3 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-12+x,0.0+y );
        }
        glEnd();

        glBegin(GL_LINES);// 1-3 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-12+x,0.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// 2-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6+x,1.35+y );
        }
        glEnd();

        glBegin(GL_LINES);// 2-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6+x,1.35+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// 2-2 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-10+x,1.0+y );
        }
        glEnd();

        glBegin(GL_LINES);// 2-2 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-10+x,1.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);// 3-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8+x,2.35+y );
        }
        glEnd();

        glBegin(GL_LINES);// 3-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8+x,2.35+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// 3-2 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-12+x,2.0+y );
        }
        glEnd();

        glBegin(GL_LINES);// 3-2 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-12+x,2.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);// 4-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-12+x,3.0+y );
        }
        glEnd();

        glBegin(GL_LINES);// 4-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(47 ,79, 79);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-12+x,3.0+y );
        }
        glEnd();


         glBegin(GL_POLYGON);// 4-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(20, 20, 20);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(8+x,-1.0+y );
        }
        glEnd();

        glBegin(GL_LINES);// 4-1 window of ship
        for(int i=0;i<200;i++)
        {
            glColor3ub(20 ,20, 20);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.50;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(8+x,-1.0+y );
        }
        glEnd();


        glLineWidth(2.0);
        glBegin(GL_LINES);              // flag pole
        glColor3ub(128,128,128);


        glVertex2f( -14.80f, 5.0f);
        glVertex2f( -14.80f, 3.20f);



    glEnd();


    glBegin(GL_POLYGON);              // flag
    glColor3ub(0,128,0);

    glVertex2f(-14.80f, 7.0f);
	glVertex2f(-17.50f, 7.0f);


	glVertex2f( -17.50f, 4.60f);

	glVertex2f( -14.80f, 4.60f);

    glEnd();

    glBegin(GL_POLYGON);// round of flag
        for(int i=0;i<200;i++)
        {
            glColor3ub(255,0,0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-16.15+x,5.80+y );
        }
        glEnd();

    glPopMatrix();


}

static void update3(int value)//for ship
{
    moveship += 0.2;
    if(moveship > 40)

    {
        moveship = 3;
    }

    glutPostRedisplay();
    glutTimerFunc(200, update3, 0);
}

static void sky()                       // sky body
{
    glBegin(GL_POLYGON);
	glColor3ub(135, 206, 255);


    glVertex2f(-100.0f, 45.0f);

	glVertex2f(100.0f, 45.0f);
    glVertex2f( 100.0f, 100.0f);
    glColor3ub(224 ,255, 255);
    glVertex2f( -100.0f, 100.0f);



    glEnd();
}

float moveCar=0.0f;
float _anglecar1 = 0.0f;
float _anglecar2 = 0.0f;


                            //blue car
static void blueCar()
{
    glPushMatrix();
    glTranslatef(moveCar,0.0,0.0);
    glScalef(0.75,1,0);
    glTranslatef(95.0,23.0,0.0);
    glBegin(GL_POLYGON);              // car
	glColor3ub(25,25,112);


    glVertex2f(1.0f, 1.5f);
	glVertex2f(0.5f, 1.0f);
	glVertex2f(20.5f, 1.0f);
	glVertex2f(21.0f, 1.5f);
	glVertex2f(21.0f, 4.25f);
	glVertex2f(20.0f, 4.0f);
	glVertex2f(17.0f, 4.0f);
	glVertex2f(15.0f, 5.75f);
	glVertex2f(15.5f, 6.0f);
	glVertex2f(9.0f, 6.0f);
	glVertex2f(6.0f, 4.0f);
	glVertex2f(1.0f, 3.0f);


    glEnd();




    glBegin(GL_POLYGON);              // head light
	glColor3ub(255,255,255);


    glVertex2f(1.0f, 2.5f);
	glVertex2f(1.65f, 2.5f);
	glVertex2f(2.5f, 2.8f);
	glVertex2f(1.0f, 2.8f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // back light
	glColor3ub(255,0,0);


    glVertex2f(20.50f, 3.0f);
	glVertex2f(20.50f, 2.0f);
	glVertex2f(21.0f, 2.0f);
	glVertex2f(21.0f, 3.5f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // 1st door glasss of car
	glColor3ub(255,255,255);


    glVertex2f(6.15f, 4.0f);
	glVertex2f(11.55f, 4.0f);
	glVertex2f(11.55f, 5.70f);
	glVertex2f(9.0f, 5.70f);




    glEnd();

    glBegin(GL_POLYGON);              // 2nd door glasss of car
	glColor3ub(245, 245, 245);


    glVertex2f(12.15f, 4.0f);
	glVertex2f(16.65f, 4.0f);
	glVertex2f(14.65f, 5.70f);
	glVertex2f(12.15f, 5.70f);




    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(12.0f, 1.25f);    // x, y
	glVertex2f(12.0f, 5.75f);    // x, y

	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(6.0f, 2.25f);    // x, y
	glVertex2f(6.0f, 3.75f);    // x, y

	glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(17.0f, 2.25f);    // x, y
	glVertex2f(17.0f, 3.75f);

	glVertex2f(1.0f, 2.0f);
	glVertex2f(2.0f, 2.0f);

	glVertex2f(1.0f, 1.75f);
	glVertex2f(1.80f, 1.75f);

	glVertex2f(1.0f, 1.55f);
	glVertex2f(1.65f, 1.55f);





	    // x, y

	glEnd();

	glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// back tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// FRONT tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);              // looking glass
	glColor3ub(25,25,112);


    glVertex2f(6.0f, 4.0f);
	glVertex2f(7.0f, 4.0f);
	glVertex2f(7.5f, 4.4f);
	glVertex2f(7.0f, 4.4f);

    glEnd();



                    //ROTATING TIRE
        glPushMatrix();
        glTranslatef(6.0,1.5,0.0);
        glRotatef(_anglecar1, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3ub(128,128,128);

         // Red
        glVertex2f(0.0f, 1.0f);    // x, y
        glVertex2f(0.0f, -1.0f);

        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);


        glEnd();
        glPopMatrix();



        glPushMatrix();
        glTranslatef(17.0,1.5,0.0);
        glRotatef(_anglecar2, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3ub(128,128,128);

         // Red
        glVertex2f(0.0f, 1.00f);    // x, y
        glVertex2f(0.0f, -1.00f);

        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);


        glEnd();

        glPopMatrix();

        glPopMatrix();

}




static void updateCar3(int value)//for ship
{
    moveCar -= 0.2;
    if(moveCar < -180)

    {
        moveCar = 20;
    }

    glutPostRedisplay();
    glutTimerFunc(50, updateCar3, 0);
}



float movecloud12=0.0f;
float movecloud3=0.0f;
static void Cloud()
{
    glPushMatrix();
    glTranslatef(movecloud12,0.0,0.0);
    glBegin(GL_POLYGON);// 1st cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(+x,80+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2+x,78+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2+x,76+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(4+x,78+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// 2nd cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-80+x,70+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-78+x,68+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-76+x,72+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-74+x,74+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-72+x,70+y );
        }



	glEnd();

	glPopMatrix();



    glPushMatrix();
    glTranslatef(movecloud3,0.0,0.0);
	glBegin(GL_POLYGON);// 3rd cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(80+x,90+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(78+x,88+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(81+x,86+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(83+x,89+y );
        }



	glEnd();
	glPopMatrix();

}

static void updatecloud12(int value)//for ship
{
    movecloud12 += 1.2;
    if(movecloud12 > 100)

    {
        movecloud12 = -100;
    }

    glutPostRedisplay();
    glutTimerFunc(300, updatecloud12, 0);
}

static void updatecloud3(int value)//for ship
{
    movecloud3 -= 1.2;
    if(movecloud3 < -100)

    {
        movecloud3 = 100;
    }

    glutPostRedisplay();
    glutTimerFunc(300, updatecloud3, 0);
}


static void sun()
{
    glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {

            glColor3ub(255, 215, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(90+x,95+y );
        }



	glEnd();
}


static void down_upperroad()
{
    glBegin(GL_POLYGON);              // down-upper road
	glColor3ub(56, 56, 56);


    glVertex2f(-100.0f, 20.0f);
	glVertex2f(100.0f, 20.0f);
	glVertex2f(100.0f, 30.0f);
	glVertex2f(-100.0f, 30.0f);

    glEnd();

    glBegin(GL_POLYGON);              // down-upper road side slope
	glColor3ub(238,232,170);


    glVertex2f(-98.0f, 15.0f);
	glVertex2f(100.0f, 15.0f);
	glVertex2f(100.0f, 20.0f);
	glVertex2f(-100.0f, 20.0f);

    glEnd();

    glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3ub(22, 82, 22);             // down-upper road side

    // Green
    glVertex2f(100.0f, 31.0f);    // x, y
    glVertex2f(-100.0f, 31.00f);

    glEnd();


    // Down Road side Line
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(100.0f, 20.0f);    // x, y
    glVertex2f(-100.0f, 20.00f);

    glEnd();


    // Down Road side Line
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(100.0f, 30.0f);    // x, y
    glVertex2f(-100.0f, 30.00f);

    glEnd();

    //Road Lines Down

    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();
    glPopMatrix();

}

static void up_upperroad()
{

    glBegin(GL_POLYGON);              // up-upper road
	glColor3ub(56, 56, 56);


    glVertex2f(-100.0f, 42.0f);
	glVertex2f(45.0f, 42.0f);
	glVertex2f(45.0f, 32.0f);
	glVertex2f(-100.0f, 32.0f);

    glEnd();

    // Up Road side Line
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(45.0f, 32.0f);    // x, y
    glVertex2f(-100.0f, 32.00f);

    glEnd();


     glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(45.0f, 42.0f);    // x, y
    glVertex2f(-100.0f, 42.00f);

    glEnd();


     //Road Lines Up

    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();
    glPopMatrix();



    glPushMatrix();              // U_turn
    glRotatef(-90, 0.0f,0.0f ,1.0f);
    glScalef(-3.0,1.0, 0.0);
    glTranslatef(19.0,35.0,0.0);
    glLineWidth(65.5);
    glBegin(GL_LINES);
        for(int i=0;i<200;i++)
        {
            glColor3ub(56, 56, 56);

            float pi=3.1416;
            float A=(i*0.85*pi)/200;
            float r=10.15;
            float x = r * cos(A);
            float y = r * sin(A);



            glVertex2f(-15.1+x,9.80+y );
            glVertex2f(-15.1+x,4.80+y );


        }
        glEnd();
         glPopMatrix();


 // Right Side Road

    glBegin(GL_POLYGON);
	glColor3ub(56, 56, 56);


    glVertex2f(43.0f, -100.0f);
	glVertex2f(50.0f,-100.0f);
	glVertex2f(50.0f, -9.0f);
	glVertex2f(43.0f, -9.0f);

    glEnd();


     glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(43.0f, -20.0f);    // x, y
    glVertex2f(43.0f, -100.00f);

    glEnd();


    glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(50.0f, -20.0f);    // x, y
    glVertex2f(50.0f, -100.00f);

    glEnd();


    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();

     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();



    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();

     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();
    glPopMatrix();

}

//sony

static void Road()
{

    //ROAD
	glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);


	glVertex2f(-80.0f, -20.0f);
	glVertex2f(-80.0f, -100.0f);
	glVertex2f(-72.0f, -100.0f);
    glVertex2f(-72.0f, -20.0f);

	glEnd();

	//Road (2)
    glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);


	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-90.0f, -100.0f);
	glVertex2f(-82.0f, -100.0f);
    glVertex2f(-82.0f, -20.0f);

	glEnd();


    //Left Road angle
	glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);

    glVertex2f(-100.0f, 4.0f);
	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-100.0f, 20.0f);


	glEnd();


	//Road Divider Line

	glBegin(GL_QUADS);
	glColor3ub(22, 82, 22);


	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-82.0f, -100.0f);
	glVertex2f(-80.0f, -100.0f);
    glVertex2f(-80.0f, -20.0f);

	glEnd();


	//Road Side Line Right

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-71.50f, -20.0f);
	glVertex2f(-71.50f, -100.0f);
	glVertex2f(-72.0f, -100.0f);
    glVertex2f(-72.0f, -20.0f);

	glEnd();

	//Road Side Line

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-80.50f, -20.0f);
	glVertex2f(-80.50f, -100.0f);
	glVertex2f(-80.0f, -100.0f);
    glVertex2f(-80.0f, -20.0f);

	glEnd();


	//Road Side Line Left Road L

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-90.50f, -20.0f);
	glVertex2f(-90.50f, -100.0f);
	glVertex2f(-90.0f, -100.0f);
    glVertex2f(-90.0f, -20.0f);

	glEnd();


//Road Side Line Left Road R

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-81.50f, -20.0f);
	glVertex2f(-81.50f, -100.0f);
	glVertex2f(-82.0f, -100.0f);
    glVertex2f(-82.0f, -20.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,224);

    glVertex2f(-100.0f, 4.0f);
	glVertex2f(-90.5f, -20.0f);
	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-100.0f, 5.0f);


	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,224);

    glVertex2f(-100.0f, 19.0f);
	glVertex2f(-82.5f, -20.0f);
	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-100.0f, 20.0f);


	glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);




    glPushMatrix();
    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();
    glPopMatrix();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glPopMatrix();




    //Road Middle Lines R


    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines L
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();
    glPopMatrix();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();
    glPopMatrix();



    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines L
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -20.0f);    // x, y
	glVertex2f(-100.0f, 12.0f);

    glEnd();


}


static void Building()
{

    //Building Body
    glBegin(GL_POLYGON);
	glColor3ub(238, 233, 233);


	glVertex2f(50.0f, -30.0f);
	glVertex2f(75.0f, -30.0f);
	glVertex2f(75.0f, 14.0f);
	glVertex2f(74.0f, 14.0f);
	glVertex2f(74.0f, 15.0f);
	glVertex2f(51.0f, 15.0f);
	glVertex2f(51.0f, 14.0f);
	glVertex2f(50.0f, 14.0f);


   glEnd();


//Building Rooftop design


    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(56.0f, 15.0f);
    glVertex2f(69.0f, 15.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(56.0f, 18.0f);

	glEnd();




    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(59.0f, 18.0f);
    glVertex2f(66.0f, 18.0f);
    glVertex2f(66.0f, 20.0f);
    glVertex2f(59.0f, 20.0f);

	glEnd();


	//Block Gates Design Left
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(55.0f, -29.0f);
    glVertex2f(62.0f, -29.0f);
    glVertex2f(62.0f, 13.0f);
    glVertex2f(55.0f, 13.0f);

	glEnd();



//Block Gates Design Right
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(63.0f, -29.0f);
    glVertex2f(70.0f, -29.0f);
    glVertex2f(70.0f, 13.0f);
    glVertex2f(63.0f, 13.0f);

	glEnd();


	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(50.0f, 14.0f);    // x, y
	glVertex2f(75.0f, 14.0f);

    glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(51.0f, 15.0f);    // x, y
	glVertex2f(74.0f, 15.0f);

    glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(56.0f, 18.0f);    // x, y
	glVertex2f(69.0f, 18.0f);

    glEnd();


    glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(65, 65, 65);

	glVertex2f(50.0f, -30.50f);    // x, y
	glVertex2f(75.0f, -30.50f);

    glEnd();



    //Building Window L

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

	glVertex2f(50.5f, -21.0f);
    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -18.0f);
    glVertex2f(50.5f, -13.0f);
    glVertex2f(52.5f, -13.0f);
    glVertex2f(52.5f, -18.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -5.0f);
    glVertex2f(50.5f, -10.0f);
    glVertex2f(52.5f, -10.0f);
    glVertex2f(52.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, 3.0f);
    glVertex2f(50.5f, -2.0f);
    glVertex2f(52.5f, -2.0f);
    glVertex2f(52.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, 11.0f);
    glVertex2f(50.5f, 6.0f);
    glVertex2f(52.5f, 6.0f);
    glVertex2f(52.5f, 11.0f);

    glEnd();


    //Window Divider

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -18.0f);    // x, y
	glVertex2f(51.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -5.0f);    // x, y
	glVertex2f(51.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 3.0f);    // x, y
	glVertex2f(51.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 11.0f);    // x, y
	glVertex2f(51.5f, 6.0f);

    glEnd();


    //Building Small Window L

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -15.0f);
    glVertex2f(54.5f, -15.0f);
    glVertex2f(54.5f, -12.0f);
    glVertex2f(53.0f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -7.0f);
    glVertex2f(54.5f, -7.0f);
    glVertex2f(54.5f, -4.0f);
    glVertex2f(53.0f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, 1.0f);
    glVertex2f(54.5f, 1.0f);
    glVertex2f(54.5f, 4.0f);
    glVertex2f(53.0f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, 9.0f);
    glVertex2f(54.5f, 9.0f);
    glVertex2f(54.5f, 12.0f);
    glVertex2f(53.0f, 12.0f);

    glEnd();



    //Building Window Right

 glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -18.0f);
    glVertex2f(74.5f, -18.0f);
    glVertex2f(74.5f, -13.0f);
    glVertex2f(72.5f, -13.0f);

    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -5.0f);
    glVertex2f(72.5f, -10.0f);
    glVertex2f(74.5f, -10.0f);
    glVertex2f(74.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, 3.0f);
    glVertex2f(72.5f, -2.0f);
    glVertex2f(74.5f, -2.0f);
    glVertex2f(74.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, 11.0f);
    glVertex2f(72.5f, 6.0f);
    glVertex2f(74.5f, 6.0f);
    glVertex2f(74.5f, 11.0f);

    glEnd();




     //Window Divider R

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -18.0f);    // x, y
	glVertex2f(73.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -5.0f);    // x, y
	glVertex2f(73.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 3.0f);    // x, y
	glVertex2f(73.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 11.0f);    // x, y
	glVertex2f(73.5f, 6.0f);

    glEnd();





    //Building small windows Right


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -15.0f);
    glVertex2f(72.0f, -15.0f);
    glVertex2f(72.0f, -12.0f);
    glVertex2f(70.5f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -7.0f);
    glVertex2f(72.0f, -7.0f);
    glVertex2f(72.0f, -4.0f);
    glVertex2f(70.5f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, 1.0f);
    glVertex2f(72.0f, 1.0f);
    glVertex2f(72.0f, 4.0f);
    glVertex2f(70.5f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, 9.0f);
    glVertex2f(72.0f, 9.0f);
    glVertex2f(72.0f, 12.0f);
    glVertex2f(70.5f, 12.0f);

    glEnd();



     //Building Door Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -29.0f);
    glVertex2f(61.3f, -29.0f);
    glVertex2f(61.3f, -22.0f);
    glVertex2f(55.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(57.55f, -29.0f);
    glVertex2f(57.55f, -22.2f);

     glEnd();

     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.4f, -29.0f);
    glVertex2f(59.4f, -22.2f);

     glEnd();

     //Building Door Right

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -29.0f);
    glVertex2f(69.3f, -29.0f);
    glVertex2f(69.3f, -22.0f);
    glVertex2f(63.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.55f, -29.0f);
    glVertex2f(65.55f, -22.2f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.4f, -29.0f);
    glVertex2f(67.4f, -22.2f);

     glEnd();




   //Building Middle small Window Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -12.0f);
    glVertex2f(57.7f, -12.0f);
    glVertex2f(57.7f, -6.0f);
    glVertex2f(55.7f, -6.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -4.0f);
    glVertex2f(57.7f, -4.0f);
    glVertex2f(57.7f, 2.0f);
    glVertex2f(55.7f, 2.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, 4.0f);
    glVertex2f(57.7f, 4.0f);
    glVertex2f(57.7f, 10.0f);
    glVertex2f(55.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -20.0f);
    glVertex2f(56.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -12.0f);
    glVertex2f(56.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -4.0f);
    glVertex2f(56.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, 4.0f);
    glVertex2f(56.7f, 10.0f);

     glEnd();



     //Building Middle Big Window

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

      glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -12.0f);
    glVertex2f(61.3f, -12.0f);
    glVertex2f(61.3f, -6.0f);
    glVertex2f(58.3f, -6.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -4.0f);
    glVertex2f(61.3f, -4.0f);
    glVertex2f(61.3f, 2.0f);
    glVertex2f(58.3f, 2.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, 4.0f);
    glVertex2f(61.3f, 4.0f);
    glVertex2f(61.3f, 10.0f);
    glVertex2f(58.3f, 10.0f);

      glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -20.0f);
    glVertex2f(59.3f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -20.0f);
    glVertex2f(60.3f, -14.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -12.0f);
    glVertex2f(59.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -12.0f);
    glVertex2f(60.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -4.0f);
    glVertex2f(59.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -4.0f);
    glVertex2f(60.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, 4.0f);
    glVertex2f(59.3f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, 4.0f);
    glVertex2f(60.3f, 10.0f);

     glEnd();




    //Building Middle Big Window R

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -12.0f);
    glVertex2f(66.7f, -12.0f);
    glVertex2f(66.7f, -6.0f);
    glVertex2f(63.7f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -4.0f);
    glVertex2f(66.7f, -4.0f);
    glVertex2f(66.7f, 2.0f);
    glVertex2f(63.7f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, 4.0f);
    glVertex2f(66.7f, 4.0f);
    glVertex2f(66.7f, 10.0f);
    glVertex2f(63.7f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -20.0f);
    glVertex2f(64.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -20.0f);
    glVertex2f(65.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -12.0f);
    glVertex2f(64.7f, -6.0f);

     glEnd();


      glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -12.0f);
    glVertex2f(65.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -4.0f);
    glVertex2f(64.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -4.0f);
    glVertex2f(65.7f, 2.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, 4.0f);
    glVertex2f(64.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, 4.0f);
    glVertex2f(65.7f, 10.0f);

     glEnd();



    //Building Middle small Window R

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -12.0f);
    glVertex2f(68.9f, -12.0f);
    glVertex2f(68.9f, -6.0f);
    glVertex2f(66.9f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -4.0f);
    glVertex2f(68.9f, -4.0f);
    glVertex2f(68.9f, 2.0f);
    glVertex2f(66.9f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, 4.0f);
    glVertex2f(68.9f, 4.0f);
    glVertex2f(68.9f,10.0f);
    glVertex2f(66.9f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -20.0f);
    glVertex2f(67.9f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -12.0f);
    glVertex2f(67.9f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -4.0f);
    glVertex2f(67.9f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, 4.0f);
    glVertex2f(67.9f, 10.0f);

     glEnd();
    glPopMatrix();


}


static void Park()
{

   // Park Body


   glBegin(GL_QUADS);
	glColor3ub(34, 139, 34);

    glVertex2f(50.20f, -35.0f);
    glVertex2f(50.20f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -35.0f);

    glEnd();


   //Park Upper Road

	glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -46.0f);
    glVertex2f(100.0f, -46.0f);
    glVertex2f(100.0f, -40.0f);
    glVertex2f(51.0f, -40.0f);

    glEnd();

    //Park Down Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(51.0f, -94.0f);

    glEnd();


    //Park Middle 1st Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(58.0f, -46.0f);
    glVertex2f(58.0f, -94.0f);
    glVertex2f(62.0f, -94.0f);
    glVertex2f(62.0f, -46.0f);

    glEnd();

    //Park Middle 2nd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(74.0f, -46.0f);
    glVertex2f(74.0f, -94.0f);
    glVertex2f(78.0f, -94.0f);
    glVertex2f(78.0f, -46.0f);

    glEnd();

    //Park Middle 3rd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(96.0f, -46.0f);
    glVertex2f(96.0f, -94.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(100.0f, -46.0f);

    glEnd();





      //Park Chair

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(65.0f, -41.0f);
    glVertex2f(65.0f, -43.0f);
    glVertex2f(70.0f, -43.0f);
    glVertex2f(70.0f, -41.0f);

    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(65.0f, -44.0f);
    glVertex2f(65.0f, -46.0f);
    glVertex2f(70.0f, -46.0f);
    glVertex2f(70.0f, -44.0f);

    glEnd();


    glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.0f, -41.0f);
    glVertex2f(65.0f, -46.50f);

     glEnd();



     glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.0f, -41.0f);
    glVertex2f(70.0f, -46.50f);

     glEnd();


     glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(67.50f, -41.0f);
    glVertex2f(67.50f, -46.50f);

     glEnd();






    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.75f, -46.50f);
	glVertex2f(64.50f, -48.0f);
	glVertex2f(70.50f, -48.0f);
	glVertex2f(70.25f, -46.50f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.50f, -48.0f);
	glVertex2f(64.0f, -49.50f);
	glVertex2f(71.0f, -49.50f);
	glVertex2f(70.50f, -48.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.0f, -49.50f);
	glVertex2f(64.0f, -50.50f);
	glVertex2f(71.0f, -50.50f);
	glVertex2f(71.0f, -49.50f);

    glEnd();


    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(64.50f, -50.50f);
    glVertex2f(64.50f, -54.0f);

     glEnd();


// Chair Stand

    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.50f, -50.50f);
    glVertex2f(70.50f, -54.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.25f, -50.50f);
    glVertex2f(65.25f, -53.00f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(69.75f, -50.50f);
    glVertex2f(69.75f, -53.00f);

     glEnd();

    //Chair Handle

     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.0f, -43.0f);
    glVertex2f(64.0f, -48.50f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(64.0f, -48.5f);
    glVertex2f(64.0f, -50.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.0f, -43.0f);
    glVertex2f(71.0f, -48.50f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(71.0f, -48.5f);
    glVertex2f(71.0f, -50.0f);

     glEnd();




     //Dolna


    glLineWidth(6.0);
	glBegin(GL_LINES);
	glColor3ub(139, 54, 38);

    glVertex2f(84.0f, -42.0f);
    glVertex2f(90.0f, -42.0f);

     glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(139, 54, 38);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(82.0f, -56.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 54, 38);

    glVertex2f(81.0f, -56.0f);
    glVertex2f(83.0f, -56.0f);

     glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(139, 54, 38);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(92.0f, -56.0f);

     glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 54, 38);

    glVertex2f(91.0f, -56.0f);
    glVertex2f(93.0f, -56.0f);

     glEnd();


     //Dolna Middle Shape


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(86.0f, -52.0f);

     glEnd();



     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(88.0f, -52.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(85.5f, -53.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(88.5f, -53.0f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(85.5f, -51.5f);
	glVertex2f(85.0f, -53.0f);
	glVertex2f(89.0f, -53.0f);
	glVertex2f(88.5f, -51.5f);

    glEnd();




      //Park Lamp post 1

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

     glEnd();



     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();


     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

     glEnd();








     //Park Lamp post 2

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(93.5f, -35.0f);
    glVertex2f(93.5f, -49.0f);
    glVertex2f(94.2f, -49.0f);
    glVertex2f(94.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(93.3f, -49.50f);
    glVertex2f(94.5f, -49.50f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(93.60f, -38.0f);
    glVertex2f(93.60f, -34.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(94.10f, -38.0f);
    glVertex2f(94.10f, -34.0f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(93.60f, -34.50f);
    glVertex2f(91.50f, -34.50f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(93.90f, -34.50f);
    glVertex2f(96.0f, -34.50f);

     glEnd();



     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(92.50f, -34.50f);
    glVertex2f(91.50f, -34.50f);

     glEnd();


     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(95.0f, -34.50f);
    glVertex2f(96.0f, -34.50f);

     glEnd();





     //Park Down Lamp post 3

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(62.5f, -80.0f);
    glVertex2f(62.5f, -91.0f);
    glVertex2f(63.2f, -91.0f);
    glVertex2f(63.2f, -80.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(62.3f, -91.0f);
    glVertex2f(63.5f, -91.0f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(62.60f, -79.0f);
    glVertex2f(62.60f, -83.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(63.10f, -79.0f);
    glVertex2f(63.10f, -83.0f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(62.60f, -79.50f);
    glVertex2f(60.50f, -79.50f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(62.90f, -79.50f);
    glVertex2f(65.0f, -79.50f);

     glEnd();



     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(61.50f, -79.50f);
    glVertex2f(60.50f, -79.50f);

     glEnd();


     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.0f, -79.50f);
    glVertex2f(65.0f, -79.50f);

     glEnd();




}


static void NewBuilding1()
{
    glPushMatrix();
    glScalef(0.75,.9,0);
    glTranslatef(55.0f,10.0f,0.0f);
    Building();

    glPopMatrix();


}

static void NewBuilding2()
{
    glPushMatrix();
    glScalef(0.75,.9,0);
    glTranslatef(25.0f,10.0f,0.0f);
    Building();

    glPopMatrix();


}

void tree1()
{


    glPushMatrix();

    glScalef(1.0,0.70,0);
    glTranslatef(60.0,62.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(4.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}
                                //tree2

void tree2()
{


    glPushMatrix();

    glScalef(1.50,1.0,0);
    glTranslatef(52.0,-5.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(4.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree3()
{


    glPushMatrix();

    glScalef(1.50,1.0,0);
    glTranslatef(-55.0,6.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(4.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree4()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(107.0,-79.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree5()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(103.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree6()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(185.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void PassengerCamp()
{
    glPushMatrix();

    glScalef(1.0,1.0,0);
    glTranslatef(65.0,-22.0,0.0);


        glBegin(GL_POLYGON);
    glColor3ub(178, 34, 34);

	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f( 10.0f, 12.0f);
	glVertex2f( -10.0f, 12.0f);

    glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(34 ,139 ,34);



        glVertex2f(-5.80f, 7.0f);
        glVertex2f(-5.80f,-1.0f);

        glVertex2f(13.50f, 7.0f);
        glVertex2f(13.50f,-1.0f);



        glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);

	glVertex2f(-6.0f, 7.0f);
	glVertex2f(14.0f, 7.0f);
	glVertex2f( 10.0f, 10.0f);
	glVertex2f( -10.0f, 10.0f);

    glEnd();


    glPopMatrix();
}
                            //boat1

void boat1()
{


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(25.0f,0.0f, 0.0f);
    glScalef(0.05,0.05,1);
    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0.0f,0.0f);
    glVertex2f(150.0f,0.0f);
    glVertex2f(200.0f,50.0f);
    glVertex2f(-50.0f,50.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,25,51);
    glVertex2f(0.0f,50.0f);
    glVertex2f(150.0f,50.0f);
    glVertex2f(150.0f,75.0f);
    glVertex2f(0.0f,75.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(50.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(100.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPopMatrix();


}

float moveBoat2=0.0f;                                               //boat2
void boat2()
{


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(moveBoat2,0.0, 0.0f);
    glTranslatef(25.0f,-50.0f, 0.0f);
    glScalef(0.07,0.05,1);
    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0.0f,0.0f);
    glVertex2f(150.0f,0.0f);
    glVertex2f(200.0f,50.0f);
    glVertex2f(-50.0f,50.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(0.0f,50.0f);
    glVertex2f(150.0f,50.0f);
    glVertex2f(150.0f,75.0f);
    glVertex2f(0.0f,75.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(50.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(100.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPopMatrix();


}


static void updateBoat1(int value)
{
    moveBoat2 -= 0.2;
    if(moveBoat2 <-90)

    {
       moveBoat2 = 2;
    }

    glutPostRedisplay();
    glutTimerFunc(100, updateBoat1, 0);
}

void trafficLight()
{
    glPushMatrix();

    glScalef(.65,1.0,0);
    glTranslatef(0.0,20.0,0.0);


    glBegin(GL_POLYGON);              // light stand
	glColor3ub(47 ,79, 79);

	    // x, y



	glVertex2f(-0.50f, 20.0f);
	glVertex2f(-0.50f, 10.0f);
	glVertex2f(0.50f, 10.0f);
	glVertex2f(0.50f, 20.0f);
	glVertex2f(1.50f, 20.0f);
	glVertex2f(1.50f, 27.0f);
	glVertex2f(-1.50f, 27.0f);
	glVertex2f(-1.50f, 20.0f);

	    // x, y

    glEnd();

    glBegin(GL_POLYGON);// red light on
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 0, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,26+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// yellow light off
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,24+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// green light off
	for(int i=0;i<200;i++)
        {
            glColor3ub(0, 255, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,22+y );
        }



	glEnd();
	glPopMatrix();
}



static void display(void)
{
   /* glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);*/
    glClearColor(0.7, 0.6, 0.4, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);




    water();

    bridgeRoad();

   // reflectionBridge();

    ship();
    sky()  ;


    sun();
    Cloud();
    down_upperroad();

    blueCar();
    up_upperroad();


    Road();
    NewBuilding1();
    NewBuilding2();
    Park();

    tree1();
    tree2();
    tree3();
    tree4();
    tree5();
    tree6();
    PassengerCamp();
    boat1();
    boat2();
    trafficLight();







    glutSwapBuffers();
    glFlush();


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1500, 720);
    glutCreateWindow("project");
    gluOrtho2D(-100.0,100.0,-100.0,100.0);
    glutDisplayFunc(display);

    glutIdleFunc(Idle);

    // Register display callback handler for window re-paint
    glutTimerFunc(200, update1, 0);
    glutTimerFunc(200, update2, 0);
    glutTimerFunc(200, update3, 0);

    glutTimerFunc(100, updatecloud12, 0);
    glutTimerFunc(100, updatecloud3, 0);
    glutTimerFunc(200, updateCar3, 0);
    glutTimerFunc(200, updateBoat1, 0);

    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
