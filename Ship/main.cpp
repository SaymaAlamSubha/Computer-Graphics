#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;

void ship()
{

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
    glColor3ub(0, 255, 0);

    glVertex2f(-14.80f, 5.0f);
	glVertex2f(-15.50f, 5.0f);


	glVertex2f( -15.50f, 4.60f);

	glVertex2f( -14.80f, 4.60f);

    glEnd();

    glBegin(GL_POLYGON);// roung of flag
        for(int i=0;i<200;i++)
        {
            glColor3ub(255,0,0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-15.1+x,4.80+y );
        }
        glEnd();




}








static void display(void)
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    ship();



    glFlush();


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1500, 720);                 // Initialize GLUT
	glutCreateWindow("Ship");
    gluOrtho2D(-20.0,20.0,-20.0,20.0);
	glutDisplayFunc(display);

	 // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
