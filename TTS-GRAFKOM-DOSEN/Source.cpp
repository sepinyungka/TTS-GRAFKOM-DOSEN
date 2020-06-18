#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);//pola besar 1 PINK
	glColor3ub(199, 21, 133);
	glVertex2f(-100, 0);
	glVertex2f(0, 145);
	glVertex2f(100, 0);
	glVertex2f(0, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 2 BIRU
	glColor3ub(0, 255, 255);
	glVertex2f(0, 150);
	glVertex2f(-100, 295);
	glVertex2f(0, 440);
	glVertex2f(100, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 3 KUNING
	glColor3ub(255, 255, 0);
	glVertex2f(0, -150);
	glVertex2f(-100, -295);
	glVertex2f(0, -440);
	glVertex2f(100, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kiri HIJAU
	glColor3ub(0, 255, 0);
	glVertex2f(120, -290);
	glVertex2f(220, -145);
	glVertex2f(120, 0);
	glVertex2f(20, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kiri KUNING
	glColor3ub(255, 255, 0);
	glVertex2f(120, 5);
	glVertex2f(220, 150);
	glVertex2f(120, 295);
	glVertex2f(20, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kiri BIRU
	glColor3ub(199, 21, 133);
	glVertex2f(120, 300);
	glVertex2f(220, 445);
	glVertex2f(120, 590);
	glVertex2f(20, 445);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kiri MERAH
	glColor3ub(205, 92, 92);
	glVertex2f(120, -295);
	glVertex2f(20, -440);
	glVertex2f(120, -585);
	glVertex2f(220, -440);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(205, 255, 255);
	glVertex2f(-120, -290);
	glVertex2f(-220, -145);
	glVertex2f(-120, 0);
	glVertex2f(-20, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(205, 92, 92);
	glVertex2f(-120, 5);
	glVertex2f(-220, 150);
	glVertex2f(-120, 295);
	glVertex2f(-20, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan MERAH
	glColor3ub(255, 255, 255);
	glVertex2f(-120, -295);
	glVertex2f(-220, -440);
	glVertex2f(-120, -585);
	glVertex2f(-20, -440);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(255, 255, 255);
	glVertex2f(-120, 300);
	glVertex2f(-220, 445);
	glVertex2f(-120, 590);
	glVertex2f(-20, 445);
	glEnd();

 	glBegin(GL_POLYGON);//pola besar 2 PINK
	glColor3ub(199, 21, 133);
	glVertex2f(140, 0);
	glVertex2f(240, 145);
	glVertex2f(340, 0);
	glVertex2f(240, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 2 BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(140, 295);
	glVertex2f(240, 440);
	glVertex2f(340, 295);
	glVertex2f(240, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 2 KUNING
	glColor3ub(255, 255, 0);
	glVertex2f(240, -150);
	glVertex2f(340, -295);
	glVertex2f(240, -440);
	glVertex2f(140, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 3 PINK
	glColor3ub(199, 21, 133);
	glVertex2f(-140, 0);
	glVertex2f(-240, 145);
	glVertex2f(-340, 0);
	glVertex2f(-240, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 3 BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(-140, 295);
	glVertex2f(-240, 440);
	glVertex2f(-340, 295);
	glVertex2f(-240, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 3 KUNING
	glColor3ub(255, 255, 0);
	glVertex2f(-240, -150);
	glVertex2f(-340, -295);
	glVertex2f(-240, -440);
	glVertex2f(-140, -295);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kanan 
	glColor3ub(255, 255, 0);
	glVertex2f(420, 500);
	glVertex2f(420, -500);
	glVertex2f(440, -500);
	glVertex2f(440, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kanan 
	glColor3ub(0, 255, 0);
	glVertex2f(445, 500);
	glVertex2f(445, -500);
	glVertex2f(450, -500);
	glVertex2f(450 , 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kanan 
	glColor3ub(255, 255, 255);
	glVertex2f(460, 500);
	glVertex2f(460, -500);
	glVertex2f(470, -500);
	glVertex2f(470, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kanan 
	glColor3ub(255, 255, 0);
	glVertex2f(475, 500);
	glVertex2f(475, -500);
	glVertex2f(480, -500);
	glVertex2f(480, 500);
	glEnd();

	glFlush();
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
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