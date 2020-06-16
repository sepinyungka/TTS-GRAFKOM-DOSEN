#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_POLYGON);//pola besar
	glColor3ub(205, 92, 92);
	glVertex2f(-45, -10);
	glVertex2f(0, 35);
	glVertex2f(45, -10);
	glVertex2f(0, -55);
	glEnd();

	glBegin(GL_POLYGON);//pola itam kecil atas
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-10, 0);
	glVertex2f(0, 10);
	glVertex2f(10, 0);
	glVertex2f(0, -10);
	glEnd();

	glBegin(GL_POLYGON); // pola itam kecil kanan 
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(5, -10);
	glVertex2f(15, -20);
	glVertex2f(25, -10);
	glVertex2f(15, 0);
	glEnd();

	glBegin(GL_POLYGON); // pola itam kecil kiri 
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-5, -10);
	glVertex2f(-15, -20);
	glVertex2f(-25, -10);
	glVertex2f(-15, 0);
	glEnd();

	glBegin(GL_POLYGON); //pola itam kecil bawah 
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0, -12);
	glVertex2f(10, -22);
	glVertex2f(0, -32);
	glVertex2f(-10, -22);
	glEnd();
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-500, 500, -500, 500);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TTS GRAFKOM");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}