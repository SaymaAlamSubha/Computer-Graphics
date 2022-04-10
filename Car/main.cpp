#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

GLfloat _move = 0.0f;

void update(int value)
{

    if(_move < -40.0f)
    {
        _move = 40.0f;
    }
    _move -= 2.0f;


    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}


void car()
{
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


	    // x, y

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
	glColor3ub(255,255,255);


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

	glBegin(GL_POLYGON);              // looking glass
	glColor3ub(25,25,112);


    glVertex2f(6.0f, 4.0f);
	glVertex2f(7.0f, 4.0f);
	glVertex2f(7.5f, 4.4f);
	glVertex2f(7.0f, 4.4f);

    glEnd();
}

float _angle1 = 0.0f;
//float _angle12= 0.0f;
void rotatingTire1()
	{
	    glPushMatrix();
        glTranslatef(6.0,1.5,0.0);
        glRotatef(_angle1, 0.0f, 0.0f,1.0f);

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
        glRotatef(_angle1, 0.0f, 0.0f,1.0f);

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




	}



void update1(int value)
{

    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1, update1, 0); //Notify GLUT to call update again in 25 milliseconds
}


void update2(int value)
{

    if(_move >40.0f)
    {
        _move = -40.0f;
    }
    _move += 2.0f;


    glutPostRedisplay();

    glutTimerFunc(100, update2, 0);
}

void rotate_car()
{
    glPushMatrix();
    glTranslatef(10.0,10,0.0);
    glScalef(-1.0, 1.0, 0.0);
    car();
    rotatingTire1();

    glPopMatrix();



}





static void display(void)
{
    glClearColor(0.9,0.9,0.9,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    /*glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);*/

    glPushMatrix();
    glTranslatef(_move,0,0);
    car();
    rotatingTire1();

    rotate_car();




    glPopMatrix();

    glutSwapBuffers();


    glFlush();


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);                 // Initialize GLUT
	glutCreateWindow("car");
    gluOrtho2D(-40.0,40.0,-40.0,40.0);
	glutDisplayFunc(display);
	glutIdleFunc(Idle);
	glutTimerFunc(1, update1, 0);
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update2, 0);
	 // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

