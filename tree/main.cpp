#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;

void tree()
{

    glLineWidth(20.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

glLineWidth(10.5);
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
            glColor3ub(50 ,205, 50);

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
            glColor3ub(50 ,205, 50);

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
            glColor3ub(50 ,205, 50);

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
            glColor3ub(50 ,205, 50);

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
            glColor3ub(50 ,205, 50);

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





}


void PassengerCamp()
{

}








static void display(void)
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    tree();



    glFlush();


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1500, 720);                 // Initialize GLUT
	glutCreateWindow("tree");
    gluOrtho2D(-20.0,20.0,-20.0,20.0);
	glutDisplayFunc(display);

	 // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
