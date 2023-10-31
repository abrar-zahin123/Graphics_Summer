//Computer Graphics Project Group 1
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
#include <iostream>

using namespace std;
/* Initialize OpenGL Graphics */

int frameNumber = 0;
float _move = 0.0f;
float _move1 = 0.0f;
float _move2 = 280.0f;
float _move4 = 0.0f;
float _move5 = 280.0f;
float xr = 0, yr = 0;
float xr1 = 0, yr1 = 0;
GLfloat position = -190.0f; //current point for jet 1 from right to left updateJet1Left
GLfloat speed = 2.0f;
GLfloat position1 = 190.0f; //current point for jet 1 from left to right updateJet1Right
GLfloat speed1 = 2.0f;
void dis();
void display();
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.5f, 0.0f); // Blue and opaque
	glLoadIdentity(); //Reset the drawing perspective
	gluOrtho2D(-100,200,-280,200);
}
//Anika's Part
void Building1()//B1
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-2.5f, -100.0f);
	glVertex2f(-2.5f, -55.0f);
	glVertex2f(2.5f, -55.0f);
	glVertex2f(2.5f, -100.0f);
	glEnd();
}
void Building2()//B2 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-2.5f, -100.0f);
	glVertex2f(-2.5f, 1.0f);
	glVertex2f(-20.5f, 1.0f);
	glVertex2f(-20.5f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -15.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -45.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -75.0f, 0.0f);
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -90.0f, 0.0f);
    glPopMatrix();
	glutSwapBuffers();

}
void Building3()//B3
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-22.5f, -100.0f);
	glVertex2f(-22.5f, 50.0f);
	glVertex2f(-16.5f, 50.0f);
	glVertex2f(-16.5f, -100.0f);
	glEnd();
	//Gombug 1
	glBegin(GL_POLYGON);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-19.5f, 55.0f);
	glVertex2f(-16.5f, 50.0f);
	glVertex2f(-22.5f, 50.0f);
	glEnd();

}
void Building4()//B4
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-22.5f, -100.0f);
	glVertex2f(-22.5f, -40.0f);
	glVertex2f(-25.5f, -40.0f);
	glVertex2f(-25.5f, -100.0f);
	glEnd();
}
void Building5()//B5 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-40.0f, -100.0f);
	glVertex2f(-40.0f, -10.0f);
	glVertex2f(-25.5f, -10.0f);
	glVertex2f(-25.5f, -100.0f);
	glEnd();
	//window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -15.0f, 0.0f);
	//window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -45.0f, 0.0f);
	//window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -75.0f, 0.0f);
	//window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();

}
void Building6()//B6
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-40.0f, -100.0f);
	glVertex2f(-40.0f, -50.0f);
	glVertex2f(-44.0f, -50.0f);
	glVertex2f(-44.0f, -100.0f);
	glEnd();
}
void Building7()//B7 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, 30.0f);
	glVertex2f(-44.0f, 30.0f);
	glVertex2f(-44.0f, -100.0f);
	glEnd();
	//window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -15.0f, 0.0f);
	//window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -45.0f, 0.0f);
	//window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -75.0f, 0.0f);
	//window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -90.0f, 0.0f);
	//window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -105.0f, 0.0f);
	//window 15
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 16
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();

}
void Building8()//B8
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, -40.0f);
	glVertex2f(-60.0f, -40.0f);
	glVertex2f(-60.0f, -100.0f);
	glEnd();
}
void Building9()//B9 have window
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-16.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, 30.0f);
	glVertex2f(-44.0f, 30.0f);
	glVertex2f(-44.0f, -100.0f);
	glEnd();
	glPopMatrix();

	//Box 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-70.0f, 37.0f);
	glVertex2f(-70.0f, 30.0f);
	glVertex2f(-62.0f, 30.0f);
	glVertex2f(-62.0f, 37.0f);
	glEnd();
	//Box 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-69.0f, 42.0f);
	glVertex2f(-69.0f, 37.0f);
	glVertex2f(-63.0f, 37.0f);
	glVertex2f(-63.0f, 42.0f);
	glEnd();
	//Line 1
	glLineWidth(3.0);
    glBegin(GL_LINES);            // These vertices form a closed lines
    glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-66.0f, 42.0f);
	glVertex2f(-66.0f, 54.0f);
	glEnd();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-16.0f, 0.0f, 0.0f);
	//window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslatef(-16.0f, -15.0f, 0.0f);
	//window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
    glPushMatrix();
    glTranslatef(-16.0f, -30.0f, 0.0f);
	//window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslatef(-16.0f, -45.0f, 0.0f);
	//window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building10()//B10
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-16, 0.0f, 0.0f);
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, -40.0f);
	glVertex2f(-60.0f, -40.0f);
	glVertex2f(-60.0f, -100.0f);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}
void Building11()//B11
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-78.0f, -100.0f);
	glVertex2f(-78.0f, -60.0f);
	glVertex2f(-76.0f, -60.0f);
	glVertex2f(-76.0f, -100.0f);
	glEnd();
}
void Building12()//B12 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-78.0f, -100.0f);
	glVertex2f(-78.0f, -30.0f);
	glVertex2f(-85.0f, -30.0f);
	glVertex2f(-85.0f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -93.0f);
	glVertex2f(-79.0f, -87.0f);
	glVertex2f(-84.0f, -87.0f);
	glVertex2f(-84.0f, -93.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -83.0f);
	glVertex2f(-79.0f, -77.0f);
	glVertex2f(-84.0f, -77.0f);
	glVertex2f(-84.0f, -83.0f);
	glEnd();
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -73.0f);
	glVertex2f(-79.0f, -67.0f);
	glVertex2f(-84.0f, -67.0f);
	glVertex2f(-84.0f, -73.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -63.0f);
	glVertex2f(-79.0f, -57.0f);
	glVertex2f(-84.0f, -57.0f);
	glVertex2f(-84.0f, -63.0f);
	glEnd();
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -53.0f);
	glVertex2f(-79.0f, -47.0f);
	glVertex2f(-84.0f, -47.0f);
	glVertex2f(-84.0f, -53.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -43.0f);
	glVertex2f(-79.0f, -37.0f);
	glVertex2f(-84.0f, -37.0f);
	glVertex2f(-84.0f, -43.0f);
	glEnd();


}
void Building13()//B13
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-86.0f, -100.0f);
	glVertex2f(-86.0f, -60.0f);
	glVertex2f(-85.0f, -60.0f);
	glVertex2f(-85.0f, -100.0f);
	glEnd();
}
void Building14()//B14
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-86.0f, -100.0f);
	glVertex2f(-86.0f, -50.0f);
	glVertex2f(-88.5f, -50.0f);
	glVertex2f(-88.5f, -100.0f);
	glEnd();
}
void Building15()//B15
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-88.5f, -100.0f);
	glVertex2f(-88.5f, -40.0f);
	glVertex2f(-92.0f, -40.0f);
	glVertex2f(-92.0f, -100.0f);
	glEnd();
}
void Building16()//B16 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(-100.0f, -100.0f);
	glVertex2f(-100.0f, -10.0f);
	glVertex2f(-92.0f, -10.0f);
	glVertex2f(-92.0f, -100.0f);
	glEnd();

    //Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -97.0f);
	glVertex2f(-99.0f, -88.0f);
	glVertex2f(-97.0f, -88.0f);
	glVertex2f(-97.0f, -97.0f);
	glEnd();
    //Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -97.0f);
	glVertex2f(-93.0f, -88.0f);
	glVertex2f(-95.0f, -88.0f);
	glVertex2f(-95.0f, -97.0f);
	glEnd();
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -76.0f);
	glVertex2f(-99.0f, -85.0f);
	glVertex2f(-97.0f, -85.0f);
	glVertex2f(-97.0f, -76.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -76.0f);
	glVertex2f(-93.0f, -85.0f);
	glVertex2f(-95.0f, -85.0f);
	glVertex2f(-95.0f, -76.0f);
	glEnd();
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -64.0f);
	glVertex2f(-99.0f, -73.0f);
	glVertex2f(-97.0f, -73.0f);
	glVertex2f(-97.0f, -64.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -64.0f);
	glVertex2f(-93.0f, -73.0f);
	glVertex2f(-95.0f, -73.0f);
	glVertex2f(-95.0f, -64.0f);
	glEnd();
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -52.0f);
	glVertex2f(-99.0f, -61.0f);
	glVertex2f(-97.0f, -61.0f);
	glVertex2f(-97.0f, -52.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -52.0f);
	glVertex2f(-93.0f, -61.0f);
	glVertex2f(-95.0f, -61.0f);
	glVertex2f(-95.0f, -52.0f);
	glEnd();
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -40.0f);
	glVertex2f(-99.0f, -49.0f);
	glVertex2f(-97.0f, -49.0f);
	glVertex2f(-97.0f, -40.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -40.0f);
	glVertex2f(-93.0f, -49.0f);
	glVertex2f(-95.0f, -49.0f);
	glVertex2f(-95.0f, -40.0f);
	glEnd();
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -28.0f);
	glVertex2f(-99.0f, -37.0f);
	glVertex2f(-97.0f, -37.0f);
	glVertex2f(-97.0f, -28.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -28.0f);
	glVertex2f(-93.0f, -37.0f);
	glVertex2f(-95.0f, -37.0f);
	glVertex2f(-95.0f, -28.0f);
	glEnd();
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -16.0f);
	glVertex2f(-99.0f, -25.0f);
	glVertex2f(-97.0f, -25.0f);
	glVertex2f(-97.0f, -16.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -16.0f);
	glVertex2f(-93.0f, -25.0f);
	glVertex2f(-95.0f, -25.0f);
	glVertex2f(-95.0f, -16.0f);
	glEnd();

}
void Building17()//B17 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(8.0f, -100.0f);
	glVertex2f(8.0f, 18.0f);
	glVertex2f(2.5f, 18.0f);
	glVertex2f(2.5f, -100.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(21.3f, 16.0f, 0.0f);
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, 1.0f, 0.0f);
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -14.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -29.0f, 0.0f);
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -44.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -59.0f, 0.0f);
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -74.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -89.0f, 0.0f);
	glPopMatrix();
	glutSwapBuffers();
}
void Building18()//B18
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(8.0f, -100.0f);
	glVertex2f(8.0f, -30.0f);
	glVertex2f(12.0f, -30.0f);
	glVertex2f(12.0f, -100.0f);
	glEnd();
}
void Building19()//B19 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(24.0f, -100.0f);
	glVertex2f(24.0f, -20.0f);
	glVertex2f(12.0f, -20.0f);
	glVertex2f(12.0f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -13.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -25.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -37.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -49.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -61.0f, 0.0f);
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();

}
void Building20()//B20
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(24.0f, -20.0f);
	glVertex2f(24.0f, 25.0f);
	glVertex2f(19.0f, 25.0f);
	glVertex2f(19.0f, -20.0f);
	glEnd();
	//Gombuj 2
	glBegin(GL_POLYGON);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(24.0f, 25.0f);
	glVertex2f(21.5f, 30.0f);
	glVertex2f(19.0f, 25.0f);
	glEnd();
}
void Building21()//B21
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(24.0f, -100.0f);
	glVertex2f(24.0f, -22.0f);
	glVertex2f(28.0f, -22.0f);
	glVertex2f(28.0f, -100.0f);
	glEnd();
}
void Building22()//B22 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(45.0f, -100.0f);
	glVertex2f(45.0f, -24.0f);
	glVertex2f(28.0f, -24.0f);
	glVertex2f(28.0f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -16.0f, 0.0f);
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -44.0f, 0.0f);
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -58.0f, 0.0f);
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 15
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building23()//B24
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(45.0f, -100.0f);
	glVertex2f(45.0f, -30.0f);
	glVertex2f(48.0f, -30.0f);
	glVertex2f(48.0f, -100.0f);
	glEnd();
}
void Building24()//B24
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(52.0f, -100.0f);
	glVertex2f(52.0f, 15.0f);
	glVertex2f(48.0f, 15.0f);
	glVertex2f(48.0f, -100.0f);
	glEnd();
}
void Building25()//B25
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(52.0f, -100.0f);
	glVertex2f(52.0f, 0.0f);
	glVertex2f(57.0f, 0.0f);
	glVertex2f(57.0f, -100.0f);
	glEnd();
}
void Building26()//B26
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(59.0f, -100.0f);
	glVertex2f(59.0f, -30.0f);
	glVertex2f(57.0f, -30.0f);
	glVertex2f(57.0f, -100.0f);
	glEnd();
}
void Building27()//B27
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(59.0f, -100.0f);
	glVertex2f(59.0f, -15.0f);
	glVertex2f(62.0f, -15.0f);
	glVertex2f(62.0f, -100.0f);
	glEnd();
}
void Building28()//B28 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(70.0f, -100.0f);
	glVertex2f(70.0f, 18.0f);
	glVertex2f(62.0f, 18.0f);
	glVertex2f(62.0f, -100.0f);
	glEnd();
	//Box 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(69.0f, 20.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(63.0f, 18.0f);
	glVertex2f(63.0f, 20.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -32.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -46.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -74.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -88.0f, 0.0f);
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -102.0f, 0.0f);
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building29()//B29
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(70.0f, -100.0f);
	glVertex2f(70.0f, -12.0f);
	glVertex2f(75.0f, -12.0f);
	glVertex2f(75.0f, -100.0f);
	glEnd();
}
void Building30()//B30
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(75.0f, -100.0f);
	glVertex2f(75.0f, -15.0f);
	glVertex2f(80.0f, -15.0f);
	glVertex2f(80.0f, -100.0f);
	glEnd();
}
void Building31()//B31
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(80.0f, -100.0f);
	glVertex2f(80.0f, -18.0f);
	glVertex2f(85.0f, -18.0f);
	glVertex2f(85.0f, -100.0f);
	glEnd();
}
void Building32()//B32 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(95.0f, -100.0f);
	glVertex2f(95.0f, 10.0f);
	glVertex2f(85.0f, 10.0f);
	glVertex2f(85.0f, -100.0f);
	glEnd();
	//Windows 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	//Windows 2
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -13.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 3
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -27.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 4
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -40.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 5
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -53.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 6
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -66.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 7
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -79.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 8
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -92.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building33()//B33
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(95.0f, -100.0f);
	glVertex2f(95.0f, -16.0f);
	glVertex2f(97.0f, -16.0f);
	glVertex2f(97.0f, -100.0f);
	glEnd();
}
void Building34()//B34
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(105, 105, 105); // Black
	glVertex2f(97.0f, -100.0f);
	glVertex2f(97.0f, -7.0f);
	glVertex2f(100.0f, -7.0f);
	glVertex2f(100.0f, -100.0f);
	glEnd();
}
//Cloud 1
void Cloud1()//C1
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(_move,0.0f, 0.0f);
    //Circle 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(192,192,192);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+150.0f );
        }
	glEnd();
	//Circle 2
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+10,y+155.0f );
        }
	glEnd();
	//Circle 3
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(192,192,192);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+145.0f );
        }
	glEnd();
	glPopMatrix();

	glutSwapBuffers();

}
//Cloud 2
void Cloud2()//C2
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(_move,0.0f, 0.0f);
    //Circle 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-70,y+185.0f );
        }
	glEnd();
	//Circle 2
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(192,192,192);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-61,y+175.0f );
        }
	glEnd();
	//Circle 3
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(192,192,192);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-80,y+177.0f );
        }
	glEnd();
	glPopMatrix();

	glutSwapBuffers();

}
//Cloud 3
void Cloud3()//C3
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(_move,0.0f, 0.0f);
    //Circle 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-130,y+120.0f );
        }
	glEnd();
	//Circle 2
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-115,y+130.0f );
        }
	glEnd();
	//Circle 3
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-100,y+120.0f );
        }
	glEnd();

	//Circle 4
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=14.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-115,y+108.0f );
        }
	glEnd();
	glPopMatrix();

	glutSwapBuffers();

}
//Cloud 4
void Cloud4()//C4
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(_move,0.0f, 0.0f);
    //Circle 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-200,y+140.0f );
        }
	glEnd();
	//Circle 2
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-215,y+125.0f );
        }
	glEnd();
	//Circle 3
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-212,y+110.0f );
        }
	glEnd();

	//Circle 4
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=14.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-195,y+100.0f );
        }
	glEnd();
	//Circle 5
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=14.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-180,y+120.0f );
        }
	glEnd();
	//Circle 6
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(160,160,160);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-200,y+125.0f );
        }
	glEnd();
	glPopMatrix();

	glutSwapBuffers();

}
//Moon
/*void Moon()//M
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(1.0f,1.0f,1.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+160,y+140.0f );
        }
    glEnd();
}*/
//Bridge Line
void Bridge_Line()//BL
{
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
	glVertex2f(200.0f,-180.0f);
	glVertex2f(100.0f,-75.0f);
	glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(99.0f,-100.0f);
    glVertex2f(145.0f,-280.0f);
	glVertex2f(150.0f,-280.0f);
	glVertex2f(100.0f,-100.0f);
	glEnd();


}
//U1
void UpdateCloud(int value) {

    _move += 1.0;
    if(_move > 450.0)
    {
        _move = -120.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, UpdateCloud, 0); //Notify GLUT to call update again in 25 milliseconds
}

//Asif's Part
void Stars()//Stars SR
{
    glPointSize(3.0);
    glBegin(GL_POINTS); //S1
    glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-90.0f, 60.0f);
	glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS); //S2
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-95.0f, 85.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S3
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-80.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S4
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-65.0f, 65.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S5
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 85.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S6
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-45.0f, 90.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S7
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 60.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S8
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-40.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S9
	glColor3ub(255,231,3); //Color_yellow

	glVertex2f(-30.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S10
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-25.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S11
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-28.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S12
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-35.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S13
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-15.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S14
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-20.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
	glBegin(GL_POINTS); //S15
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-13.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
	glBegin(GL_POINTS); //S16
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-3.0f, 35.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S17
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-5.0f, 70.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S18
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-0.0f, 85.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S19
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(9.0f, 65.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S20
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(20.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S21
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(25.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S22
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(35.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);   //S23
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(38.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S24
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(43.0f, 5.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S25
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(45.0f, 87.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S26
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(53.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S27
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(57.0f, 25.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S28
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(63.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S29
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(70.0f, 45.0f);    // x, y
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S30
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(75.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S31
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 45.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S32
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S33
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(95.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S34
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(93.0f, 25.0f);
	glEnd();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-20.0f, 160.0f, 0.0f);

    glPointSize(3.0);
    glBegin(GL_POINTS); //S1
    glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-90.0f, 60.0f);
	glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS); //S2
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-95.0f, 85.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S3
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-80.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S4
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-65.0f, 65.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S5
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 85.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S6
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-45.0f, 90.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S7
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 60.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S8
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-40.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S9
	glColor3ub(255,231,3); //Color_yellow

	glVertex2f(-30.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S10
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-25.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S11
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-28.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S12
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-35.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S13
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-15.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S14
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-20.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
	glBegin(GL_POINTS); //S15
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-13.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
	glBegin(GL_POINTS); //S16
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-3.0f, 35.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S17
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-5.0f, 70.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S18
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-0.0f, 85.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S19
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(9.0f, 65.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S20
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(20.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S21
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(25.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S22
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(35.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);   //S23
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(38.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S24
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(43.0f, 5.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S25
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(45.0f, 87.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S26
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(53.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S27
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(57.0f, 25.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S28
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(63.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S29
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(70.0f, 45.0f);    // x, y
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S30
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(75.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S31
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 45.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S32
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S33
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(95.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S34
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(93.0f, 25.0f);
	glEnd();

    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(120.0f, -80.0f, 0.0f);

    glPointSize(3.0);
    glBegin(GL_POINTS); //S1
    glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-90.0f, 60.0f);
	glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS); //S2
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-95.0f, 85.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S3
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-80.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S4
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-65.0f, 65.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S5
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 85.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S6
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-45.0f, 90.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S7
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 60.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S8
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-40.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S9
	glColor3ub(255,231,3); //Color_yellow

	glVertex2f(-30.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S10
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-25.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S11
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-28.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S12
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-35.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S13
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-15.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S14
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-20.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
	glBegin(GL_POINTS); //S15
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-13.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
	glBegin(GL_POINTS); //S16
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-3.0f, 35.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S17
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-5.0f, 70.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S18
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-0.0f, 85.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S19
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(9.0f, 65.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S20
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(20.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S21
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(25.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S22
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(35.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);   //S23
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(38.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S24
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(43.0f, 5.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S25
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(45.0f, 87.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S26
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(53.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S27
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(57.0f, 25.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S28
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(63.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S29
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(70.0f, 45.0f);    // x, y
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S30
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(75.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S31
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 45.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S32
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S33
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(95.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S34
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(93.0f, 25.0f);
	glEnd();

    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(130.0f, 40.0f, 0.0f);

    glPointSize(3.0);
    glBegin(GL_POINTS); //S1
    glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-90.0f, 60.0f);
	glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS); //S2
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-95.0f, 85.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S3
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-80.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S4
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-65.0f, 65.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S5
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 85.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S6
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-45.0f, 90.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S7
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 60.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S8
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-40.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S9
	glColor3ub(255,231,3); //Color_yellow

	glVertex2f(-30.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S10
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-25.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S11
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-28.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S12
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-35.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S13
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-15.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S14
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-20.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
	glBegin(GL_POINTS); //S15
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-13.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
	glBegin(GL_POINTS); //S16
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-3.0f, 35.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S17
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-5.0f, 70.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S18
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-0.0f, 85.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S19
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(9.0f, 65.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S20
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(20.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S21
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(25.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S22
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(35.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);   //S23
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(38.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S24
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(43.0f, 5.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S25
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(45.0f, 87.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S26
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(53.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S27
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(57.0f, 25.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S28
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(63.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S29
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(70.0f, 45.0f);    // x, y
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S30
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(75.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S31
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 45.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S32
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S33
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(95.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S34
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(93.0f, 25.0f);
	glEnd();

    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-100.0f, 100.0f, 0.0f);

    glPointSize(3.0);
    glBegin(GL_POINTS); //S1
    glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-90.0f, 60.0f);
	glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS); //S2
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-95.0f, 85.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S3
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-80.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S4
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-65.0f, 65.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S5
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 85.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S6
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-45.0f, 90.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S7
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 60.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S8
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-40.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S9
	glColor3ub(255,231,3); //Color_yellow

	glVertex2f(-30.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S10
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-25.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S11
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-28.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S12
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-35.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S13
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-15.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S14
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-20.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
	glBegin(GL_POINTS); //S15
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-13.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
	glBegin(GL_POINTS); //S16
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-3.0f, 35.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S17
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-5.0f, 70.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S18
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-0.0f, 85.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S19
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(9.0f, 65.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S20
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(20.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S21
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(25.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S22
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(35.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);   //S23
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(38.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S24
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(43.0f, 5.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S25
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(45.0f, 87.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S26
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(53.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S27
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(57.0f, 25.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S28
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(63.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S29
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(70.0f, 45.0f);    // x, y
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S30
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(75.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S31
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 45.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S32
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S33
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(95.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S34
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(93.0f, 25.0f);
	glEnd();

    glPopMatrix();

}
//Moving Star
void MovingStar()//MS
{
    glBegin(GL_POLYGON); //MS1
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(-60.0f, -10.0f, 0.0f);
    glBegin(GL_POLYGON);//MS2
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-100.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON); //MS3
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(50.0f, -30.0f, 0.0f);
    glBegin(GL_POLYGON); //MS4
    glColor3ub(255,231,3);//color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(100.0f, 50.0f, 0.0f);

    glPushMatrix();
    glTranslatef(-60.0f, -10.0f, 0.0f);
    glBegin(GL_POLYGON);//MS5
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(50.0f, -30.0f, 0.0f);
    glBegin(GL_POLYGON); //MS6
    glColor3ub(255,231,3);//color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPopMatrix();

}
//Ship 1
void Ship1()//SP1
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move1,-10.0f, 0.0f);
    glBegin(GL_POLYGON);//layer_1
    glColor3ub(0,51,102);//color_
    glVertex2f(-58.0f, -230.0f);
    glVertex2f(-23.0f, -230.0f);
    glVertex2f(-30.0f, -240.0f);
    glVertex2f(-55.0f, -240.0f);
    glEnd();

    glBegin(GL_POLYGON);//layer_3
    glColor3ub(0,25,51);//color_
    glVertex2f(-52.0f, -215.0f);
    glVertex2f(-35.0f, -215.0f);
    glVertex2f(-35.0f, -230.0f);
    glVertex2f(-52.0f, -230.0f);
    glEnd();
    glBegin(GL_POLYGON);//layer_2
    glColor3ub(192,192,192);//color_
    glVertex2f(-41.0f, -228.0f);
    glVertex2f(-21.0f, -228.0f);
    glVertex2f(-23.0f, -230.0f);
    glVertex2f(-42.5f, -230.0f);
    glEnd();
    glBegin(GL_POLYGON);//Layer_4
    glColor3ub(192,192,192);//color_
    glVertex2f(-50.0f, -205.0f);
    glVertex2f(-37.0f, -205.0f);
    glVertex2f(-37.0f, -215.0f);
    glVertex2f(-50.0f, -215.0f);
    glEnd();
    glBegin(GL_POLYGON);//layer_5
    glColor3ub(0,25,51);//color_
    glVertex2f(-38.0f, -195.0f);
    glVertex2f(-42.0f, -195.0f);
    glVertex2f(-42.0f, -205.0f);
    glVertex2f(-38.0f, -205.0f);
    glEnd();
    glBegin(GL_POLYGON);//layer_3_window
    glColor3ub(0,102,204);//color_
    glVertex2f(-50.0f, -220.0f);
    glVertex2f(-40.0f, -220.0f);
    glVertex2f(-40.0f, -226.0f);
    glVertex2f(-50.0f, -226.0f);
    glEnd();
    glBegin(GL_POLYGON);//Layer_4_window_1
    glColor3ub(0,51,102);//color_
    glVertex2f(-48.0f, -208.0f);
    glVertex2f(-44.0f, -208.0f);
    glVertex2f(-44.0f, -212.0f);
    glVertex2f(-48.0f, -212.0f);
    glEnd();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(6.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);//Layer_4_window_2
    glColor3ub(0,51,102);//color_
    glVertex2f(-48.0f, -208.0f);
    glVertex2f(-44.0f, -208.0f);
    glVertex2f(-44.0f, -212.0f);
    glVertex2f(-48.0f, -212.0f);
    glEnd();
    glPopMatrix();

    glPopMatrix();

}
//Ship 2
void Ship2()//SP2
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move2,0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(-50.0f,70.0f, 0.0f);
    glBegin(GL_POLYGON);//layer_1
    glColor3ub(153,0,0);//color_
    glVertex2f(-58.0f, -230.0f);
    glVertex2f(-23.0f, -230.0f);
    glVertex2f(-30.0f, -240.0f);
    glVertex2f(-55.0f, -240.0f);
    glEnd();

    glBegin(GL_POLYGON);//layer_3
    glColor3ub(0,25,51);//color_
    glVertex2f(-52.0f, -215.0f);
    glVertex2f(-35.0f, -215.0f);
    glVertex2f(-35.0f, -230.0f);
    glVertex2f(-52.0f, -230.0f);
    glEnd();

    glBegin(GL_POLYGON);//Layer_4
    glColor3ub(192,192,192);//color_
    glVertex2f(-50.0f, -205.0f);
    glVertex2f(-37.0f, -205.0f);
    glVertex2f(-37.0f, -215.0f);
    glVertex2f(-50.0f, -215.0f);
    glEnd();
    glBegin(GL_POLYGON);//layer_5
    glColor3ub(0,25,51);//color_
    glVertex2f(-38.0f, -195.0f);
    glVertex2f(-42.0f, -195.0f);
    glVertex2f(-42.0f, -205.0f);
    glVertex2f(-38.0f, -205.0f);
    glEnd();
    glBegin(GL_POLYGON);//layer_3_window
    glColor3ub(0,205,205);//color_
    glVertex2f(-50.0f, -220.0f);
    glVertex2f(-40.0f, -220.0f);
    glVertex2f(-40.0f, -226.0f);
    glVertex2f(-50.0f, -226.0f);
    glEnd();
    glBegin(GL_POLYGON);//Layer_4_window_1
    glColor3ub(153,0,0);//color_
    glVertex2f(-48.0f, -208.0f);
    glVertex2f(-44.0f, -208.0f);
    glVertex2f(-44.0f, -212.0f);
    glVertex2f(-48.0f, -212.0f);
    glEnd();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(6.0f, 0.0f, 0.0f);
     glBegin(GL_POLYGON);//Layer_4_window_2
    glColor3ub(153,0,0);//color_
    glVertex2f(-48.0f, -208.0f);
    glVertex2f(-44.0f, -208.0f);
    glVertex2f(-44.0f, -212.0f);
    glVertex2f(-48.0f, -212.0f);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
}
//Speed Boat
void SpeedBoat()//SB
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move4,-10.0f, 0.0f);
    glBegin(GL_TRIANGLES);//window
    glColor3ub(0,255,255);//color_
    glVertex2f(-51.0f, -125.0f);
    glVertex2f(-45.0f, -117.0f);
    glVertex2f(-42.0f, -124.0f);
    glEnd();

    glBegin(GL_LINES);//window_stripe
    glColor3ub(0,0,0);//color_
    glVertex2f(-47.0f, -120.0f);
    glVertex2f(-46.0f, -125.0f);
    glEnd();

    glBegin(GL_POLYGON);//layer_1
    glColor3ub(220,220,220);//color_
    glVertex2f(-55.0f, -126.0f);

    glVertex2f(-40.0f, -120.0f);
    glVertex2f(-43.0f, -130.0f);
    glVertex2f(-55.0f, -130.0f);
    glEnd();

    glBegin(GL_LINES);//boat_stripe
    glColor3ub(153,0,0);//color_
    glVertex2f(-55.0f, -128.0f);
    glVertex2f(-42.0f, -128.0f);
    glEnd();

    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-56.0f, -128.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-57.0f, -127.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-58.0f, -126.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-59.0f, -127.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-60.0f, -128.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(-1.0f,-2.0f, 0.0f);
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-56.0f, -128.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-57.0f, -127.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-58.0f, -126.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-59.0f, -127.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-60.0f, -128.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0f,-3.0f, 0.0f);
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-56.0f, -128.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-57.0f, -127.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-58.0f, -126.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-59.0f, -127.0f);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(51,255,255);
    glVertex2f(-60.0f, -128.0f);
    glEnd();
    glPopMatrix();

    glPopMatrix();

}
//Wave
void Wave()//WV
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move5,0.0f, 0.0f);
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-90.0f, -120.0f);
    glVertex2f(-75.0f, -120.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-85.0f, -125.0f);
    glVertex2f(-70.0f, -125.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-93.0f, -130.0f);
    glVertex2f(-82.0f, -130.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(50.0f,-80.0f, 0.0f);

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-90.0f, -120.0f);
    glVertex2f(-75.0f, -120.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-85.0f, -125.0f);
    glVertex2f(-70.0f, -125.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-93.0f, -130.0f);
    glVertex2f(-82.0f, -130.0f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(150.0f,-20.0f, 0.0f);

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-90.0f, -120.0f);
    glVertex2f(-75.0f, -120.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-85.0f, -125.0f);
    glVertex2f(-70.0f, -125.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-93.0f, -130.0f);
    glVertex2f(-82.0f, -130.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(180.0f,-120.0f, 0.0f);

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-90.0f, -120.0f);
    glVertex2f(-75.0f, -120.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-85.0f, -125.0f);
    glVertex2f(-70.0f, -125.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-93.0f, -130.0f);
    glVertex2f(-82.0f, -130.0f);
    glEnd();
    glPopMatrix();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(20.0f, -160.0f);
    glVertex2f(15.0f, -160.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(25.0f, -165.0f);
    glVertex2f(17.0f, -165.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(15.0f, -168.0f);
    glVertex2f(10.0f, -168.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(-110.0f,-100.0f, 0.0f);
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(20.0f, -160.0f);
    glVertex2f(15.0f, -160.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(25.0f, -165.0f);
    glVertex2f(17.0f, -165.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(15.0f, -168.0f);
    glVertex2f(10.0f, -168.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40.0f,20.0f, 0.0f);

    glPushMatrix();
    glTranslatef(-110.0f,-100.0f, 0.0f);
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(20.0f, -160.0f);
    glVertex2f(15.0f, -160.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(25.0f, -165.0f);
    glVertex2f(17.0f, -165.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(15.0f, -168.0f);
    glVertex2f(10.0f, -168.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(150.0f,-20.0f, 0.0f);

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-90.0f, -120.0f);
    glVertex2f(-75.0f, -120.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-85.0f, -125.0f);
    glVertex2f(-70.0f, -125.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-93.0f, -130.0f);
    glVertex2f(-82.0f, -130.0f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(180.0f,-120.0f, 0.0f);

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-90.0f, -120.0f);
    glVertex2f(-75.0f, -120.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-85.0f, -125.0f);
    glVertex2f(-70.0f, -125.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(64,64,64);
    glVertex2f(-93.0f, -130.0f);
    glVertex2f(-82.0f, -130.0f);
    glEnd();
    glPopMatrix();
    glPopMatrix();


    glPopMatrix();
}
//U2
void update1(int value) {

    _move1 += 1.0;
    if(_move1 > 200.0)
    {
        _move1 = -100.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(50, update1, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update2(int value) {

    _move2 -= 1.0;
    if(_move2 < -20.0)
    {
        _move2 += 250.0;
    }

    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(50, update2, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update4(int value) {

    _move4 += 2.0;
    if(_move4 > 250.0)
    {
        _move4 = -100.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(50, update4, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update5(int value) {

    _move5 -= 1.0;
    if(_move5 < -200.0)
    {
        _move5 += 250.0;
    }

    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(60, update5, 0); //Notify GLUT to call update again in 25 milliseconds
}

//Sarafat's Part
void Footpath()//Footpath F
{
    glColor3ub(153,76,0);
    glBegin(GL_POLYGON);
    glVertex2f(-100.0f,-110.0f);
	glVertex2f(110.0f,-110.0f);
	glVertex2f(110.0f,-100.0f);
	glVertex2f(-100.0f,-100.0f);
	glEnd();
}

void Water()//Water W
{
    glColor3ub(0,102,204);
    glBegin(GL_POLYGON);
    glVertex2f(-100.0f,-280.0f);
	glVertex2f(200.0f,-280.0f);
	glVertex2f(200.0f,-100.0f);
	glVertex2f(-100.0f,-100.0f);
	glEnd();
}

void Background()//Background B
{
    glColor3ub(135,206,235);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,200.0f);
	glVertex2f(-100.0f,200.0f);
	glColor3ub(128,128,128);
    glVertex2f(-100.0f,-100.0f);
	glVertex2f(200.0f,-100.0f);


	glEnd();
}

void Background1()//Background B
{
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,200.0f);
	glVertex2f(-100.0f,200.0f);
	glColor3ub(128,128,128);
    glVertex2f(-100.0f,-100.0f);
	glVertex2f(200.0f,-100.0f);


	glEnd();
}

void Bridge()//Bridge B
{
    glLineWidth(5.0);

    //main bridge
    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
    glVertex2f(100.0f,-75.0f);
    glVertex2f(120.0f,-100.0f);
	glVertex2f(200.0f,-180.0f);
	glVertex2f(200.0f,-280.0f);
	glVertex2f(150.0f,-280.0f);
	glVertex2f(100.0f,-100.0f);
	glEnd();

	//road mid cross
    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(190.0f,-255.0f);
    glVertex2f(175.0f,-225.0f);
    glEnd();


    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(170.0f,-215.0f);
    glVertex2f(155.0f,-185.0f);
    glEnd();

    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(150.0f,-175.0f);
    glVertex2f(135.0f,-145.0f);
    glEnd();

    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(130.0f,-135.0f);
    glVertex2f(115.0f,-105.0f);
    glEnd();

    glLineWidth(3.5);
    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(100.0f,-80.0f);
    glVertex2f(113.0f,-100.0f);
    glEnd();

}

void Bridge1()//Bridge1 B1
{

    //left pillar
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-180.0f);
    glVertex2f(120.0f,-80.0f);
    glVertex2f(125.0f,-90.0f);
    glVertex2f(125.0f,-200.0f);
	glEnd();

    //top pillar
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-80.0f);
    glVertex2f(160.0f,-80.0f);
    glVertex2f(160.0f,-100.0f);
    glVertex2f(120.0f,-100.0f);
	glEnd();

    //right pillar
	glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(155.0f,-135.0f);
    glVertex2f(155.0f,-80.0f);
    glVertex2f(160.0f,-90.0f);
    glVertex2f(160.0f,-140.0f);
	glEnd();

    //wire
    //rightside
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(130.0f,-100.0f);
    glVertex2f(200.0f,-280.0f);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(130.0f,-100.0f);
    glVertex2f(140.0f,-245.0f);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(160.0f,-85.0f);
    glVertex2f(200.0f,-150.0f);
    glEnd();

    //leftside
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(100.0f,-100.0f);
    glVertex2f(120.0f,-85.0f);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(110.0f,-135.0f);
    glVertex2f(120.0f,-85.0f);
    glEnd();

}

void Mountain()//Mountain M
{

    //left black mountain
    glPushMatrix();
    glTranslatef(-30.0f, -50.0f, 0.0f);
    glScaled(1,0.5,1);
    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-100.0f);
    glVertex2f(140.0f,0.0f);
    glVertex2f(141.0f,1.0f);
    glVertex2f(142.0f,2.0f);
    glVertex2f(150.0f,4.0f);
    glVertex2f(160.0f,-10.0f);
    glVertex2f(163.0f,-10.0f);
    glVertex2f(164.0f,-9.0f);
    glVertex2f(165.0f,-9.0f);
    glVertex2f(200.0f,-10.0f);
    glVertex2f(200.0f,-100.0f);
	glEnd();
	glPopMatrix();

    //middle to left silver mountain covering mid part
    glColor3ub(0,128,0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-100.0f);
    glVertex2f(140.0f,0.0f);
    glVertex2f(141.0f,1.0f);
    glVertex2f(142.0f,2.0f);
    glVertex2f(150.0f,4.0f);
    glVertex2f(160.0f,-10.0f);
    glVertex2f(163.0f,-10.0f);
    glVertex2f(164.0f,-9.0f);
    glVertex2f(165.0f,-9.0f);
    glVertex2f(200.0f,-10.0f);
    glVertex2f(200.0f,-100.0f);
	glEnd();

    //middle to left ash mountain
	glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-100.0f);
    glVertex2f(140.0f,-20.0f);
    glVertex2f(141.0f,-19.0f);
    glVertex2f(142.0f,-18.0f);
    glVertex2f(150.0f,-17.0f);
    glVertex2f(160.0f,-40.0f);
    glVertex2f(163.0f,-40.0f);
    glVertex2f(164.0f,-39.0f);
    glVertex2f(165.0f,-39.0f);
    glVertex2f(180.0f,10.0f);
    glVertex2f(190.0f,10.0f);
    glVertex2f(191.0f,9.0f);
    glVertex2f(192.0f,8.0f);
    glVertex2f(193.0f,7.0f);
    glVertex2f(194.0f,5.0f);
    glVertex2f(200.0f,5.0f);
    glVertex2f(200.0f,-100.0f);
	glEnd();
}

void Car()//Car C
{

    glLineWidth(3.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    //main body
    glTranslatef(xr1, yr1, 0.0f);
    glColor3ub(0, 51, 102);
    glBegin(GL_POLYGON);
    glVertex2f(140.0f,-210.0f);
    glVertex2f(140.0f,-200.0f);
    glVertex2f(150.0f,-200.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(170.0f,-250.0f);
    glVertex2f(155.0f,-250.0f);
	glEnd();

    //roof
	glColor3ub(0, 51, 102);
    glBegin(GL_POLYGON);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(160.0f,-205.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(155.0f,-225.0f);
	glEnd();

    //rear glass
	glColor3ub(52, 152, 219);
    glBegin(GL_POLYGON);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(155.0f,-240.0f);
	glEnd();

	//side glass 1
	glColor3ub(52, 152, 219);
    glBegin(GL_POLYGON);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(151.0f,-216.0f);
    glVertex2f(149.0f,-225.0f);
    glVertex2f(155.0f,-240.0f);
	glEnd();
    //side glass 2
	glColor3ub(52, 152, 219);
    glBegin(GL_POLYGON);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(151.0f,-216.0f);
    glVertex2f(149.0f,-225.0f);
    glVertex2f(144.0f,-210.0f);
	glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(144.0f,-210.0f);
    glVertex2f(140.0f,-200.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(155.0f,-250.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(170.0f,-250.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(148.0f,-230.0f);
    glVertex2f(151.0f,-216.0f);
	glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(160.0f,-205.0f);
    glVertex2f(160.0f,-205.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(147.0f,-205.0f);
    glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+142,y-215 );
        }
    glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+151,y-240 );
        }
    glEnd();
    glPopMatrix();
	glutSwapBuffers();
}

void updateKeyboard(int value) //updateKeyboard upkey

{
    if(xr1 <-30.0f)
        xr1 = 20.0f;

    if(xr1 >20.0f)
        xr1 = -30.0f;

    if(yr1 >100.0f)
        yr1 = -100.0f;

    if(yr1 <-100.0)
        yr1 = 100.0f;

    glutPostRedisplay();

    glutTimerFunc(10,updateKeyboard,0);
}

//Ahnaf's Part
void drawWindmill() //Draw Windmill wMain
 {
	int i;
	glColor3f(0.8f, 0.8f, 0.9f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.05f, 3.0f);
	glVertex2f(-0.05f, 3.0f);
	glEnd();
	glTranslatef(0, 3, 0);
	glRotated(frameNumber * (180.0/46), 0, 0, 1);
	glColor3f(0.4f, 0.4f, 0.8f);
	for (i = 0; i < 3; i++)
    {
		glRotated(120, 0, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0.5f, 0.1f);
		glVertex2f(1.5f,0);
		glVertex2f(0.5f, -0.1f);
		glEnd();
	}
}

void updatewm(int v) //upW1
{
    frameNumber--;
    glutPostRedisplay();
    glutTimerFunc(20, updatewm, 0);
}

void updateJet1Left (int value) //upJ1L
{
    if(position <-120.0) //ending point from right to left
        position = 190.0f; //in loop starts from right starting point and goes to left

    position -= speed;

    glutPostRedisplay();

    glutTimerFunc(20,updateJet1Left,0);
}



void updateJet1Right (int value) //upJ1R
{
    if(position1 >190.0) //ending point from left to right
        position1 = -120.0f; //in loop starts from left starting point and goes to right

    position1 += speed1;

    glutPostRedisplay();

    glutTimerFunc(20,updateJet1Right,0);

}


void updateJet2Keyboard(int value) //upJ2K

{
    if(xr >310.0) //ending point from left to right
        xr = 0.0f; //in loop starts from left starting point and goes to right

    if(xr <0.0) //ending point from right to left
        xr = 310.0f;  //in loop starts from right starting point and goes to left

    if(yr >80.0) //ending point from down to upwards
        yr = -25.0f; //in loop starts from down starting point and goes to upwards

    if(yr <-25.0) //ending point from upwards to downwards
        yr = 80.0f; //in loop starts from up starting point and goes to downwards

    glutPostRedisplay();

    glutTimerFunc(10,updateJet2Keyboard,0);
}


/*void Jet1() //Jet 1 J1
{
	//left tail wing
    glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(-10.0f, 25.0f, 0.0f);
	glColor3f(1.0,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5,47.0);
	glVertex2f(8.5,47.0);
	glVertex2f(5.5,48.0);
	glVertex2f(4.5,48.0);
	glEnd();


	//left front wing

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(13.0,47.0);
	glVertex2f(20.0,47.0);
	glVertex2f(13.0,50.0);
	glVertex2f(11.0,50.0);
	glEnd();

	//tail
	glColor3f(0.05,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(4.7,45.0);
	glVertex2f(5.5,51.0);
	glVertex2f(7.0,51.0);
	glVertex2f(9.0,45.0);
	glEnd();


	//body
	glColor3f(0.0,0.85,0.85);
	glBegin(GL_POLYGON);
	glVertex2f(5.0,48.0);
	glVertex2f(11.0,48.0);
	glVertex2f(22.0,46.5);
	glVertex2f(22.0,45.0);
	glVertex2f(5.0,45.0);
	glEnd();


	//right front wing
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0,46.0);
	glVertex2f(18.0,46.0);
	glVertex2f(13.0,41.0);
	glVertex2f(11.0,41.0);
	glEnd();


	//dome
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0,47.0);
	glVertex2f(15.0,48.5);
	glVertex2f(17.0,49.0);
	glVertex2f(19.0,48.0);
	glVertex2f(21.0,46.0);
	glVertex2f(17.0,46.0);
	glVertex2f(15.0,47.5);
	glVertex2f(13.0,47.0);
	glEnd();


	//right tail wing
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5,47.0);
	glVertex2f(8.5,47.0);
	glVertex2f(5.5,43.0);
	glVertex2f(4.5,43.0);
	glEnd();


	// front tip
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(22.0,45.0);
	glVertex2f(22.3,45.375);
	glVertex2f(22.6,45.75);
	glVertex2f(22.3,46.125);
	glVertex2f(22.0,46.5);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}

//Jet 1
void Jet2() //J2
{
	//left tail wing
    glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(-10.0f, 25.0f, 0.0f);
	glColor3f(1.0,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5+xr,47.0+yr);
	glVertex2f(8.5+xr,47.0+yr);
	glVertex2f(5.5+xr,48.0+yr);
	glVertex2f(4.5+xr,48.0+yr);
	glEnd();


	//left front wing

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(13.0+xr,47.0+yr);
	glVertex2f(20.0+xr,47.0+yr);
	glVertex2f(13.0+xr,50.0+yr);
	glVertex2f(11.0+xr,50.0+yr);
	glEnd();

	//tail
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(4.7+xr,45.0+yr);
	glVertex2f(5.5+xr,51.0+yr);
	glVertex2f(7.0+xr,51.0+yr);
	glVertex2f(9.0+xr,45.0+yr);
	glEnd();


	//body
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(5.0+xr,48.0+yr);
	glVertex2f(11.0+xr,48.0+yr);
	glVertex2f(22.0+xr,46.5+yr);
	glVertex2f(22.0+xr,45.0+yr);
	glVertex2f(5.0+xr,45.0+yr);
	glEnd();


	//right front wing
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0+xr,46.0+yr);
	glVertex2f(18.0+xr,46.0+yr);
	glVertex2f(13.0+xr,41.0+yr);
	glVertex2f(11.0+xr,41.0+yr);
	glEnd();


	//dome
	glColor3f(0.05,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0+xr,47.0+yr);
	glVertex2f(15.0+xr,48.5+yr);
	glVertex2f(17.0+xr,49.0+yr);
	glVertex2f(19.0+xr,48.0+yr);
	glVertex2f(21.0+xr,46.0+yr);
	glVertex2f(17.0+xr,46.0+yr);
	glVertex2f(15.0+xr,47.5+yr);
	glVertex2f(13.0+xr,47.0+yr);
	glEnd();


	//right tail wing
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5+xr,47.0+yr);
	glVertex2f(8.5+xr,47.0+yr);
	glVertex2f(5.5+xr,43.0+yr);
	glVertex2f(4.5+xr,43.0+yr);
	glEnd();


	// front tip
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(22.0+xr,45.0+yr);
	glVertex2f(22.3+xr,45.375+yr);
	glVertex2f(22.6+xr,45.75+yr);
	glVertex2f(22.3+xr,46.125+yr);
	glVertex2f(22.0+xr,46.5+yr);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
*/
/*void displayLeft()
{
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Moon();
    Stars();
    MovingStar();
    Cloud1();
    Cloud2();
    Cloud3();
    Cloud4();
    Water();
    SpeedBoat();
    Ship1();
    Ship2();

    glPushMatrix();
    glTranslatef(position, 100.0f, 0.0f); //jet1 left click
    Jet1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-130.0f, 85.0f, 0.0f); //jet2 left click
    Jet2();
    glPopMatrix();

    Mountain();

   //left side windmill
    glPushMatrix();
	glTranslated(120.0,-50.0,0.0);
	glScaled(5,7.5,5);
	drawWindmill();
	glPopMatrix();

	//middle windmill
    glPushMatrix();
	glTranslated(150.0,0.0,0.0);
	glScaled(6.5,10,6.5);
	drawWindmill();
	glPopMatrix();

	//right side windmill
	glPushMatrix();
	glTranslated(180.0,8.0,0.0);
	glScaled(8,12,8);
	drawWindmill();
	glPopMatrix();

    Building1();
    Building3();
    Building2();
    Building4();
    Building5();
    Building6();
    Building7();
    Building8();
    Building9();
    Building10();
    Building11();
    Building12();
    Building13();
    Building14();
    Building15();
    Building16();
    Building17();
    Building18();
    Building19();
    Building20();
    Building21();
    Building22();
    Building23();
    Building24();
    Building25();
    Building26();
    Building27();
    Building28();
    Building29();
    Building30();
    Building31();
    Building32();
    Building33();
    Building34();
    Footpath();
    Bridge();
    Bridge_Line();
    Car();
    Bridge1();
    glPushMatrix();
	glTranslated(120.0,-50.0,0.0);
	glScaled(5,7.5,5);
	drawWindmill();
	glPopMatrix();
    glPushMatrix();
	glTranslated(150.0,0.0,0.0);
	glScaled(6.5,10,6.5);
	drawWindmill();
	glPopMatrix();
	glPushMatrix();
	glTranslated(180.0,8.0,0.0);
	glScaled(8,12,8);
	drawWindmill();
	glPopMatrix();
	glFlush();  // Render now
	glutSwapBuffers();

}*/

void displayRight()
{
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Background1();

    Stars();
    MovingStar();
    Cloud1();
    Cloud2();
    Cloud3();
    Cloud4();
    Water();
    Wave();
    SpeedBoat();
    Ship1();
    Ship2();

    glPushMatrix();
    glTranslatef(position1, 100.0f, 0.0f); //jet1 right click
    //Jet1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-130.0f, 85.0f, 0.0f); //jet2 right click
    //Jet2();
    glPopMatrix();

    Mountain();

    //left side windmill
    glPushMatrix();
	glTranslated(120.0,-50.0,0.0);
	glScaled(5,7.5,5);
	drawWindmill();
	glPopMatrix();

	//middle windmill
    glPushMatrix();
	glTranslated(150.0,0.0,0.0);
	glScaled(6.5,10,6.5);
	drawWindmill();
	glPopMatrix();

	//right side windmill
	glPushMatrix();
	glTranslated(180.0,8.0,0.0);
	glScaled(8,12,8);
	drawWindmill();
	glPopMatrix();

    Building1();
    Building3();
    Building2();
    Building4();
    Building5();
    Building6();
    Building7();
    Building8();
    Building9();
    Building10();
    Building11();
    Building12();
    Building13();
    Building14();
    Building15();
    Building16();
    Building17();
    Building18();
    Building19();
    Building20();
    Building21();
    Building22();
    Building23();
    Building24();
    Building25();
    Building26();
    Building27();
    Building28();
    Building29();
    Building30();
    Building31();
    Building32();
    Building33();
    Building34();
    Footpath();
    Bridge();
    Bridge_Line();
    Car();
    Bridge1();
    glPushMatrix();
	glTranslated(120.0,-50.0,0.0);
	glScaled(5,7.5,5);
	drawWindmill();
	glPopMatrix();
    glPushMatrix();
	glTranslated(150.0,0.0,0.0);
	glScaled(6.5,10,6.5);
	drawWindmill();
	glPopMatrix();
	glPushMatrix();
	glTranslated(180.0,8.0,0.0);
	glScaled(8,12,8);
	drawWindmill();
	glPopMatrix();
	glFlush();  // Render now
	glutSwapBuffers();

}

void handleMouse(int button, int state, int x, int y) //hM
{
    /*if (button == GLUT_LEFT_BUTTON)
    {
        glutDisplayFunc(displayLeft);
    }*/
    if (button == GLUT_RIGHT_BUTTON)
    {
        glutDisplayFunc(displayRight);
    }
    glutPostRedisplay();
}


void handlekey(int key, int x, int y) //hk
{
    switch(key){
    case GLUT_KEY_UP:
        yr=yr+5;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        yr=yr-5;
        glutPostRedisplay();
        break;
    /*case GLUT_KEY_LEFT:
        xr=xr-5;
        glutPostRedisplay();
        break;*/
    case GLUT_KEY_RIGHT:
        xr=xr+5;
        glutPostRedisplay();
        break;
    }
    glutPostRedisplay();
}

void display1() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Background1();

    Stars();
    MovingStar();
    Cloud1();
    Cloud2();
    Cloud3();
    Cloud4();
    Water();
    Wave();
    SpeedBoat();
    Ship1();
    Ship2();
    Mountain();

    glPushMatrix();
    glTranslatef(-130.0f, 100.0f, 0.0f); //main display jet1
    //Jet1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-130.0f, 85.0f, 0.0f); //main display jet2
    //Jet2();

    glPopMatrix();
    Building1();
    Building3();
    Building2();
    Building4();
    Building5();
    Building6();
    Building7();
    Building8();
    Building9();
    Building10();
    Building11();
    Building12();
    Building13();
    Building14();
    Building15();
    Building16();
    Building17();
    Building18();
    Building19();
    Building20();
    Building21();
    Building22();
    Building23();
    Building24();
    Building25();
    Building26();
    Building27();
    Building28();
    Building29();
    Building30();
    Building31();
    Building32();
    Building33();
    Building34();
    Footpath();
    Bridge();
    Bridge_Line();
    Car();
    Bridge1();

    //left side windmill
    glPushMatrix();
	glTranslated(120.0,-50.0,0.0);
	glScaled(5,7.5,5);
	drawWindmill();
	glPopMatrix();

	//middle windmill
    glPushMatrix();
	glTranslated(150.0,0.0,0.0);
	glScaled(6.5,10,6.5);
	drawWindmill();
	glPopMatrix();

	//right side windmill
	glPushMatrix();
	glTranslated(180.0,8.0,0.0);
	glScaled(8,12,8);
	drawWindmill();
	glPopMatrix();


	glFlush();  // Render now
	glutSwapBuffers();
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Background();

    Stars();
    MovingStar();
    Cloud1();
    Cloud2();
    Cloud3();
    Cloud4();
    Water();
    Wave();
    SpeedBoat();
    Ship1();
    Ship2();
    Mountain();

    glPushMatrix();
    glTranslatef(-130.0f, 100.0f, 0.0f); //main display jet1
    //Jet1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-130.0f, 85.0f, 0.0f); //main display jet2
    //Jet2();

    glPopMatrix();
    Building1();
    Building3();
    Building2();
    Building4();
    Building5();
    Building6();
    Building7();
    Building8();
    Building9();
    Building10();
    Building11();
    Building12();
    Building13();
    Building14();
    Building15();
    Building16();
    Building17();
    Building18();
    Building19();
    Building20();
    Building21();
    Building22();
    Building23();
    Building24();
    Building25();
    Building26();
    Building27();
    Building28();
    Building29();
    Building30();
    Building31();
    Building32();
    Building33();
    Building34();
    Footpath();
    Bridge();
    Bridge_Line();
    Car();
    Bridge1();

    //left side windmill
    glPushMatrix();
	glTranslated(120.0,-50.0,0.0);
	glScaled(5,7.5,5);
	drawWindmill();
	glPopMatrix();

	//middle windmill
    glPushMatrix();
	glTranslated(150.0,0.0,0.0);
	glScaled(6.5,10,6.5);
	drawWindmill();
	glPopMatrix();

	//right side windmill
	glPushMatrix();
	glTranslated(180.0,8.0,0.0);
	glScaled(8,12,8);
	drawWindmill();
	glPopMatrix();


	glFlush();  // Render now
	glutSwapBuffers();
}

//Sarafat's part
void handleKeypress(unsigned char key, int x, int y) //handleKeypress hkey
{

	switch (key) {

        case 'm':
        xr1=xr1-0.5;
        yr1=yr1+2;
        glutPostRedisplay();
        break;
        case 'n':
        xr1=xr1+0.5;
        yr1=yr1-2;
        glutPostRedisplay();
        break;
        case 's':
        glutDisplayFunc(display1);
        glutPostRedisplay();
        break;
        case 'd':
        glutDisplayFunc(display);
        glutPostRedisplay();
        break;
	}
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    cout <<"                                                      Project"<< endl << endl;
     cout <<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
     cout <<"\n                                                  Night City"<< endl << endl;


    cout <<"\n>>Keyboard Interaction<<"<< endl;

    cout <<"\n\nFor Scenario Change:"<< endl;

    cout << "Press s              : Light Night Mode" << endl;
    cout << "Press d              : Dark Night Mode" << endl << endl;

    cout << "For Jet to move:"<< endl;

    cout << "Press Right Arrow    : For Jet to move Forward" << endl;
    cout << "Press Upside Arrow   : For Jet to move in the upper direction" << endl;
    cout << "Press Downside Arrow : For Jet to move in the lower direction\n" << endl;

    cout << "For Car to move:"<< endl;

    cout << "Press m              : For Car to move towards the Mountain" << endl;
    cout << "Press n              : For Car to go backwards" << endl;

    cout <<"\n>>Mouse Interaction<<\n"<< endl;

    cout << "Click Right Button of the Mouse : For Jet to move Forward" << endl;
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1300, 670);   // Set the window's initial width & height
	glutCreateWindow("Night City Project");  // Create window with the given title
	//glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	initGL();                       // Our own OpenGL initialization
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	glutMouseFunc(handleMouse);
	glutSpecialFunc(handlekey);
	glutKeyboardFunc(handleKeypress);  //Move Car   //Change the Scene
    glutTimerFunc(20,updateJet1Left , 0);
    glutTimerFunc(20,updateJet1Right , 0);
    glutTimerFunc(10,updateJet2Keyboard,0);
    glutTimerFunc(20,UpdateCloud, 0);
    glutTimerFunc(50,update1, 0);
    glutTimerFunc(50,update2, 0);
    glutTimerFunc(50,update4, 0);
    glutTimerFunc(60,update5, 0);
    glutTimerFunc(10,updateKeyboard,0);
    glutTimerFunc(20, updatewm, 0);
	glutMainLoop();                 // Enter the event-processing loop

	return 0;
}
