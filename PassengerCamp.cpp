#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;




void PassengerCamp()
{


        glBegin(GL_POLYGON);              // 1st floor glass
    glColor3ub(178, 34, 34);

	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f( 10.0f, 12.0f);
	glVertex2f( -10.0f, 12.0f);

    glEnd();

    glLineWidth(5.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(0,0,0);



        glVertex2f(-5.80f, 7.0f);
        glVertex2f(-5.80f,0.0f);

        glVertex2f(13.50f, 7.0f);
        glVertex2f(13.50f,0.0f);



        glEnd();

    glBegin(GL_POLYGON);              // 1st floor glass
    glColor3ub(0,0,0);

	glVertex2f(-6.0f, 7.0f);
	glVertex2f(14.0f, 7.0f);
	glVertex2f( 10.0f, 10.0f);
	glVertex2f( -10.0f, 10.0f);

    glEnd();





}








static void display(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    PassengerCamp();



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
