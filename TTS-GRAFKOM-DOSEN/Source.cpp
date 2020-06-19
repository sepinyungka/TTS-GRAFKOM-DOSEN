#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	//TENGAH

	glBegin(GL_POLYGON);//pola besar tengah KUNING
	glColor3ub(245, 247, 96);
	glVertex2f(0, -150);
	glVertex2f(-100, -295);
	glVertex2f(0, -440);
	glVertex2f(100, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(5, -295);
	glVertex2f(45, -235);
	glVertex2f(85, -295);
	glVertex2f(45, -355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-5, -295);
	glVertex2f(-45, -235);
	glVertex2f(-85, -295);
	glVertex2f(-45, -355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(40, -235);
	glVertex2f(0, -175);
	glVertex2f(-40, -235);
	glVertex2f(0, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(40, -355);
	glVertex2f(0, -295);
	glVertex2f(-40, -355);
	glVertex2f(0, -415);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(230, 40, 165);
	glVertex2f(20, -295);
	glVertex2f(45, -255);
	glVertex2f(70, -295);
	glVertex2f(45, -335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(230, 40, 165);
	glVertex2f(-20, -295);
	glVertex2f(-45, -255);
	glVertex2f(-70, -295);
	glVertex2f(-45, -335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(230, 40, 165);
	glVertex2f(25, -235);
	glVertex2f(0, -195);
	glVertex2f(-25, -235);
	glVertex2f(0, -275);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(230, 40, 165);
	glVertex2f(25, -355);
	glVertex2f(0, -395);
	glVertex2f(-25, -355);
	glVertex2f(0, -315);
	glEnd();

	glBegin(GL_POLYGON);//pola besar tengah PINK
	glColor3ub(230, 40, 165);
	glVertex2f(-100, 0);
	glVertex2f(0, 145);
	glVertex2f(100, 0);
	glVertex2f(0, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(5, 0);
	glVertex2f(45, 60);
	glVertex2f(85, 0);
	glVertex2f(45, -60);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(245, 247, 96);
	glVertex2f(20, 0);
	glVertex2f(45, 40);
	glVertex2f(70, 0);
	glVertex2f(45, -40);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-5, 0);
	glVertex2f(-45, 60);
	glVertex2f(-85, 0);
	glVertex2f(-45, -60);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(245, 247, 96);
	glVertex2f(-20, 0);
	glVertex2f(-45, 40);
	glVertex2f(-70, 0);
	glVertex2f(-45, -40);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(40, 60);
	glVertex2f(0, 120);
	glVertex2f(-40, 60);
	glVertex2f(0, 0);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(245, 247, 96);
	glVertex2f(25, 60);
	glVertex2f(0, 100);
	glVertex2f(-25, 60);
	glVertex2f(0, 20);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(40, -60);
	glVertex2f(0, -120);
	glVertex2f(-40, -60);
	glVertex2f(0, 0);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(245, 247, 96);
	glVertex2f(25, -60);
	glVertex2f(0, -100);
	glVertex2f(-25, -60);
	glVertex2f(0, -20);
	glEnd();

	glBegin(GL_POLYGON);//pola besar tengah BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(0, 150);
	glVertex2f(-100, 295);
	glVertex2f(0, 440);
	glVertex2f(100, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(5, 295);
	glVertex2f(45, 235);
	glVertex2f(85, 295);
	glVertex2f(45, 355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-5, 295);
	glVertex2f(-45, 235);
	glVertex2f(-85, 295);
	glVertex2f(-45, 355);
	glEnd();


	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(40, 235);
	glVertex2f(0, 175);
	glVertex2f(-40, 235);
	glVertex2f(0, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(40, 355);
	glVertex2f(0, 295);
	glVertex2f(-40, 355);
	glVertex2f(0, 415);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(205, 92, 92);
	glVertex2f(20, 295);
	glVertex2f(45, 255);
	glVertex2f(70, 295);
	glVertex2f(45, 335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(205, 92, 92);
	glVertex2f(-20, 295);
	glVertex2f(-45, 255);
	glVertex2f(-70, 295);
	glVertex2f(-45, 335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(205, 92, 92);
	glVertex2f(25, 235);
	glVertex2f(0, 195);
	glVertex2f(-25, 235);
	glVertex2f(0, 275);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(205, 92, 92);
	glVertex2f(25, 355);
	glVertex2f(0, 395);
	glVertex2f(-25, 355);
	glVertex2f(0, 315);
	glEnd();

	//KANAN 1

	glBegin(GL_POLYGON);//pola besar KANAN PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(120, -290);
	glVertex2f(220, -145);
	glVertex2f(120, 0);
	glVertex2f(20, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(115, -145);
	glVertex2f(75, -85);
	glVertex2f(35, -145);
	glVertex2f(75, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(125, -145);
	glVertex2f(165, -85);
	glVertex2f(205, -145);
	glVertex2f(165, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, -145);
	glVertex2f(80, -85);
	glVertex2f(120, -25);
	glVertex2f(160, -85);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, -145);
	glVertex2f(80, -205);
	glVertex2f(120, -265);
	glVertex2f(160, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(0, 255, 0);
	glVertex2f(100, -145);
	glVertex2f(75, -105);
	glVertex2f(50, -145);
	glVertex2f(75, -185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(0, 255, 0);
	glVertex2f(140, -145);
	glVertex2f(165, -105);
	glVertex2f(190, -145);
	glVertex2f(165, -185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(0, 255, 0);
	glVertex2f(120, -125);
	glVertex2f(95, -85);
	glVertex2f(120, -45);
	glVertex2f(145, -85);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(0, 255, 0);
	glVertex2f(120, -165);
	glVertex2f(95, -205);
	glVertex2f(120, -245);
	glVertex2f(145, -205);
	glEnd();


	glBegin(GL_POLYGON);//pola besar KANAN HIJAU
	glColor3ub(0, 255, 0);
	glVertex2f(120, 5);
	glVertex2f(220, 150);
	glVertex2f(120, 295);
	glVertex2f(20, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(115, 145);
	glVertex2f(75, 85);
	glVertex2f(35, 145);
	glVertex2f(75, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(125, 145);
	glVertex2f(165, 85);
	glVertex2f(205, 145);
	glVertex2f(165, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, 145);
	glVertex2f(80, 85);
	glVertex2f(120, 25);
	glVertex2f(160, 85);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, 145);
	glVertex2f(80, 205);
	glVertex2f(120, 265);
	glVertex2f(160, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(255, 255, 255);
	glVertex2f(100, 145);
	glVertex2f(75, 105);
	glVertex2f(50, 145);
	glVertex2f(75, 185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(255, 255, 255);
	glVertex2f(140, 145);
	glVertex2f(165, 105);
	glVertex2f(190, 145);
	glVertex2f(165, 185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(255, 255, 255);
	glVertex2f(120, 125);
	glVertex2f(95, 85);
	glVertex2f(120, 45);
	glVertex2f(145, 85);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(255, 255, 255);
	glVertex2f(120, 165);
	glVertex2f(95, 205);
	glVertex2f(120, 245);
	glVertex2f(145, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola besar KANAN MERAH
	glColor3ub(205, 92, 92);
	glVertex2f(120, 300);
	glVertex2f(220, 445);
	glVertex2f(120, 590);
	glVertex2f(20, 445);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(115, 445);
	glVertex2f(75, 505);
	glVertex2f(35, 445);
	glVertex2f(75, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(125, 445);
	glVertex2f(165, 505);
	glVertex2f(205, 445);
	glVertex2f(165, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, 445);
	glVertex2f(80, 385);
	glVertex2f(120, 325);
	glVertex2f(160, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, 445);
	glVertex2f(80, 505);
	glVertex2f(120, 565);
	glVertex2f(160, 505);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(140, 255, 255);
	glVertex2f(100, 445);
	glVertex2f(75, 485);
	glVertex2f(50, 445);
	glVertex2f(75, 405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(140, 255, 255);
	glVertex2f(140, 445);
	glVertex2f(165, 485);
	glVertex2f(190, 445);
	glVertex2f(165, 405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(140, 255, 255);
	glVertex2f(120, 425);
	glVertex2f(95, 385);
	glVertex2f(120, 345);
	glVertex2f(145, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(140, 255, 255);
	glVertex2f(120, 465);
	glVertex2f(95, 505);
	glVertex2f(120, 545);
	glVertex2f(145, 505);
	glEnd();

	glBegin(GL_POLYGON);//pola besar KANAN BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(120, -295);
	glVertex2f(20, -440);
	glVertex2f(120, -585);
	glVertex2f(220, -440);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(115, -445);
	glVertex2f(75, -505);
	glVertex2f(35, -445);
	glVertex2f(75, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(125, -445);
	glVertex2f(165, -505);
	glVertex2f(205, -445);
	glVertex2f(165, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, -445);
	glVertex2f(80, -385);
	glVertex2f(120, -325);
	glVertex2f(160, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(120, -445);
	glVertex2f(80, -505);
	glVertex2f(120, -565);
	glVertex2f(160, -505);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(199, 21, 133);
	glVertex2f(100, -445);
	glVertex2f(75, -485);
	glVertex2f(50, -445);
	glVertex2f(75, -405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(199, 21, 133);
	glVertex2f(140, -445);
	glVertex2f(165, -485);
	glVertex2f(190, -445);
	glVertex2f(165, -405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(199, 21, 133);
	glVertex2f(120, -425);
	glVertex2f(95, -385);
	glVertex2f(120, -345);
	glVertex2f(145, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(199, 21, 133);
	glVertex2f(120, -465);
	glVertex2f(95, -505);
	glVertex2f(120, -545);
	glVertex2f(145, -505);
	glEnd();

	//KIRI 1

	glBegin(GL_POLYGON);//pola besar MERAH
	glColor3ub(205, 92, 92);
	glVertex2f(-120, -290);
	glVertex2f(-220, -145);
	glVertex2f(-120, 0);
	glVertex2f(-20, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-115, -145);
	glVertex2f(-75, -85);
	glVertex2f(-35, -145);
	glVertex2f(-75, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-125, -145);
	glVertex2f(-165, -85);
	glVertex2f(-205, -145);
	glVertex2f(-165, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, -145);
	glVertex2f(-80, -85);
	glVertex2f(-120, -25);
	glVertex2f(-160, -85);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, -145);
	glVertex2f(-80, -205);
	glVertex2f(-120, -265);
	glVertex2f(-160, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(245, 247, 96);
	glVertex2f(-100, -145);
	glVertex2f(-75, -105);
	glVertex2f(-50, -145);
	glVertex2f(-75, -185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(245, 247, 96);
	glVertex2f(-140, -145);
	glVertex2f(-165, -105);
	glVertex2f(-190, -145);
	glVertex2f(-165, -185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(245, 247, 96);
	glVertex2f(-120, -125);
	glVertex2f(-95, -85);
	glVertex2f(-120, -45);
	glVertex2f(-145, -85);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(245, 247, 96);
	glVertex2f(-120, -165);
	glVertex2f(-95, -205);
	glVertex2f(-120, -245);
	glVertex2f(-145, -205);
	glEnd();

	glBegin(GL_POLYGON);//pola besar PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(-120, 5);
	glVertex2f(-220, 150);
	glVertex2f(-120, 295);
	glVertex2f(-20, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-115, 145);
	glVertex2f(-75, 85);
	glVertex2f(-35, 145);
	glVertex2f(-75, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-125, 145);
	glVertex2f(-165, 85);
	glVertex2f(-205, 145);
	glVertex2f(-165, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, 145);
	glVertex2f(-80, 85);
	glVertex2f(-120, 25);
	glVertex2f(-160, 85);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, 145);
	glVertex2f(-80, 205);
	glVertex2f(-120, 265);
	glVertex2f(-160, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(0, 255, 0);
	glVertex2f(-100, 145);
	glVertex2f(-75, 105);
	glVertex2f(-50, 145);
	glVertex2f(-75, 185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(0, 255, 0);
	glVertex2f(-140, 145);
	glVertex2f(-165, 105);
	glVertex2f(-190, 145);
	glVertex2f(-165, 185);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(0, 255, 0);
	glVertex2f(-120, 125);
	glVertex2f(-95, 85);
	glVertex2f(-120, 45);
	glVertex2f(-145, 85);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(0, 255, 0);
	glVertex2f(-120, 165);
	glVertex2f(-95, 205);
	glVertex2f(-120, 245);
	glVertex2f(-145, 205);
	glEnd();

	glBegin(GL_POLYGON);//pola besar  PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(-120, -295);
	glVertex2f(-220, -440);
	glVertex2f(-120, -585);
	glVertex2f(-20, -440);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-115, -445);
	glVertex2f(-75, -505);
	glVertex2f(-35, -445);
	glVertex2f(-75, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-125, -445);
	glVertex2f(-165, -505);
	glVertex2f(-205, -445);
	glVertex2f(-165, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, -445);
	glVertex2f(-80, -385);
	glVertex2f(-120, -325);
	glVertex2f(-160, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, -445);
	glVertex2f(-80, -505);
	glVertex2f(-120, -565);
	glVertex2f(-160, -505);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(0, 255, 0);
	glVertex2f(-100, -445);
	glVertex2f(-75, -485);
	glVertex2f(-50, -445);
	glVertex2f(-75, -405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(0, 255, 0);
	glVertex2f(-140, -445);
	glVertex2f(-165, -485);
	glVertex2f(-190, -445);
	glVertex2f(-165, -405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(0, 255, 0);
	glVertex2f(-120, -425);
	glVertex2f(-95, -385);
	glVertex2f(-120, -345);
	glVertex2f(-145, -385);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(0, 255, 0);
	glVertex2f(-120, -465);
	glVertex2f(-95, -505);
	glVertex2f(-120, -545);
	glVertex2f(-145, -505);
	glEnd();

	glBegin(GL_POLYGON);//pola besar MERAH
	glColor3ub(205, 92, 92);
	glVertex2f(-120, 300);
	glVertex2f(-220, 445);
	glVertex2f(-120, 590);
	glVertex2f(-20, 445);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-115, 445);
	glVertex2f(-75, 505);
	glVertex2f(-35, 445);
	glVertex2f(-75, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-125, 445);
	glVertex2f(-165, 505);
	glVertex2f(-205, 445);
	glVertex2f(-165, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, 445);
	glVertex2f(-80, 385);
	glVertex2f(-120, 325);
	glVertex2f(-160, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-120, 445);
	glVertex2f(-80, 505);
	glVertex2f(-120, 565);
	glVertex2f(-160, 505);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 1
	glColor3ub(245, 247, 96);
	glVertex2f(-100, 445);
	glVertex2f(-75, 485);
	glVertex2f(-50, 445);
	glVertex2f(-75, 405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 2
	glColor3ub(245, 247, 96);
	glVertex2f(-140, 445);
	glVertex2f(-165, 485);
	glVertex2f(-190, 445);
	glVertex2f(-165, 405);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 3
	glColor3ub(245, 247, 96);
	glVertex2f(-120, 425);
	glVertex2f(-95, 385);
	glVertex2f(-120, 345);
	glVertex2f(-145, 385);
	glEnd();

	glBegin(GL_POLYGON);//pola KECIL 4
	glColor3ub(245, 247, 96);
	glVertex2f(-120, 465);
	glVertex2f(-95, 505);
	glVertex2f(-120, 545);
	glVertex2f(-145, 505);
	glEnd();

	// KANAN 2

	glBegin(GL_POLYGON);//pola besar 2 BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(140, 0);
	glVertex2f(240, 145);
	glVertex2f(340, 0);
	glVertex2f(240, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(245, 0);
	glVertex2f(285, 60);
	glVertex2f(325, 0);
	glVertex2f(285, -60);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(235, 0);
	glVertex2f(195, 60);
	glVertex2f(155, 0);
	glVertex2f(195, -60);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(280, 60);
	glVertex2f(240, 120);
	glVertex2f(200, 60);
	glVertex2f(240, 0);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(280, -60);
	glVertex2f(240, -120);
	glVertex2f(200, -60);
	glVertex2f(240, 0);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(205, 92, 92);
	glVertex2f(260, 0);
	glVertex2f(285, 40);
	glVertex2f(310, 0);
	glVertex2f(285, -40);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(205, 92, 92);
	glVertex2f(220, 0);
	glVertex2f(195, 40);
	glVertex2f(170, 0);
	glVertex2f(195, -40);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(205, 92, 92);
	glVertex2f(265, 60);
	glVertex2f(240, 100);
	glVertex2f(215, 60);
	glVertex2f(240, 20);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(205, 92, 92);
	glVertex2f(265, -60);
	glVertex2f(240, -100);
	glVertex2f(215, -60);
	glVertex2f(240, -20);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 2 PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(140, 295);
	glVertex2f(240, 440);
	glVertex2f(340, 295);
	glVertex2f(240, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(245, 295);
	glVertex2f(285, 235);
	glVertex2f(325, 295);
	glVertex2f(285, 355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(235, 295);
	glVertex2f(195, 235);
	glVertex2f(155, 295);
	glVertex2f(195, 355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(280, 235);
	glVertex2f(240, 175);
	glVertex2f(200, 235);
	glVertex2f(240, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(280, 355);
	glVertex2f(240, 415);
	glVertex2f(200, 355);
	glVertex2f(240, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(0, 255, 0);
	glVertex2f(260, 295);
	glVertex2f(285, 255);
	glVertex2f(310, 295);
	glVertex2f(285, 335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(0, 255, 0);
	glVertex2f(220, 295);
	glVertex2f(195, 255);
	glVertex2f(170, 295);
	glVertex2f(195, 335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(0, 255, 0);
	glVertex2f(265, 235);
	glVertex2f(240, 195);
	glVertex2f(215, 235);
	glVertex2f(240, 275);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(0, 255, 0);
	glVertex2f(265, 355);
	glVertex2f(240, 395);
	glVertex2f(215, 355);
	glVertex2f(240, 315);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 2 PINK
	glColor3ub(199, 21, 133);
	glVertex2f(240, -150);
	glVertex2f(340, -295);
	glVertex2f(240, -440);
	glVertex2f(140, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(245, -295);
	glVertex2f(285, -235);
	glVertex2f(325, -295);
	glVertex2f(285, -355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(235, -295);
	glVertex2f(195, -235);
	glVertex2f(155, -295);
	glVertex2f(195, -355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(280, -235);
	glVertex2f(240, -175);
	glVertex2f(200, -235);
	glVertex2f(240, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(280, -355);
	glVertex2f(240, -415);
	glVertex2f(200, -355);
	glVertex2f(240, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(245, 247, 96);
	glVertex2f(260, -295);
	glVertex2f(285, -255);
	glVertex2f(310, -295);
	glVertex2f(285, -335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(245, 247, 96);
	glVertex2f(220, -295);
	glVertex2f(195, -255);
	glVertex2f(170, -295);
	glVertex2f(195, -335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(245, 247, 96);
	glVertex2f(265, -235);
	glVertex2f(240, -195);
	glVertex2f(215, -235);
	glVertex2f(240, -275);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(245, 247, 96);
	glVertex2f(265, -355);
	glVertex2f(240, -395);
	glVertex2f(215, -355);
	glVertex2f(240, -315);
	glEnd();

	//KIRI 2

	glBegin(GL_POLYGON);//pola besar 3 HIJAU
	glColor3ub(0, 255, 0);
	glVertex2f(-140, 0);
	glVertex2f(-240, 145);
	glVertex2f(-340, 0);
	glVertex2f(-240, -145);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-245, 0);
	glVertex2f(-285, 60);
	glVertex2f(-325, 0);
	glVertex2f(-285, -60);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-235, 0);
	glVertex2f(-195, 60);
	glVertex2f(-155, 0);
	glVertex2f(-195, -60);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-280, 60);
	glVertex2f(-240, 120);
	glVertex2f(-200, 60);
	glVertex2f(-240, 0);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-280, -60);
	glVertex2f(-240, -120);
	glVertex2f(-200, -60);
	glVertex2f(-240, 0);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(255, 255, 255);
	glVertex2f(-260, 0);
	glVertex2f(-285, 40);
	glVertex2f(-310, 0);
	glVertex2f(-285, -40);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(255, 255, 255);
	glVertex2f(-220, 0);
	glVertex2f(-195, 40);
	glVertex2f(-170, 0);
	glVertex2f(-195, -40);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(255, 255, 255);
	glVertex2f(-265, 60);
	glVertex2f(-240, 100);
	glVertex2f(-215, 60);
	glVertex2f(-240, 20);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(255, 255, 255);
	glVertex2f(-265, -60);
	glVertex2f(-240, -100);
	glVertex2f(-215, -60);
	glVertex2f(-240, -20);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 3 KUNING
	glColor3ub(245, 247, 96);
	glVertex2f(-140, 295);
	glVertex2f(-240, 440);
	glVertex2f(-340, 295);
	glVertex2f(-240, 150);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-245, 295);
	glVertex2f(-285, 235);
	glVertex2f(-325, 295);
	glVertex2f(-285, 355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-235, 295);
	glVertex2f(-195, 235);
	glVertex2f(-155, 295);
	glVertex2f(-195, 355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-280, 235);
	glVertex2f(-240, 175);
	glVertex2f(-200, 235);
	glVertex2f(-240, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-280, 355);
	glVertex2f(-240, 415);
	glVertex2f(-200, 355);
	glVertex2f(-240, 295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(230, 40, 165);
	glVertex2f(-260, 295);
	glVertex2f(-285, 255);
	glVertex2f(-310, 295);
	glVertex2f(-285, 335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(230, 40, 165);
	glVertex2f(-220, 295);
	glVertex2f(-195, 255);
	glVertex2f(-170, 295);
	glVertex2f(-195, 335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(230, 40, 165);
	glVertex2f(-265, 235);
	glVertex2f(-240, 195);
	glVertex2f(-215, 235);
	glVertex2f(-240, 275);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(230, 40, 165);
	glVertex2f(-265, 355);
	glVertex2f(-240, 395);
	glVertex2f(-215, 355);
	glVertex2f(-240, 315);
	glEnd();

	glBegin(GL_POLYGON);//pola besar 3 BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(-240, -150);
	glVertex2f(-340, -295);
	glVertex2f(-240, -440);
	glVertex2f(-140, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-245, -295);
	glVertex2f(-285, -235);
	glVertex2f(-325, -295);
	glVertex2f(-285, -355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-235, -295);
	glVertex2f(-195, -235);
	glVertex2f(-155, -295);
	glVertex2f(-195, -355);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-280, -235);
	glVertex2f(-240, -175);
	glVertex2f(-200, -235);
	glVertex2f(-240, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4 hitam
	glColor3ub(0, 0, 0);
	glVertex2f(-280, -355);
	glVertex2f(-240, -415);
	glVertex2f(-200, -355);
	glVertex2f(-240, -295);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 1
	glColor3ub(205, 92, 92);
	glVertex2f(-260, -295);
	glVertex2f(-285, -255);
	glVertex2f(-310, -295);
	glVertex2f(-285, -335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 2
	glColor3ub(205, 92, 92);
	glVertex2f(-220, -295);
	glVertex2f(-195, -255);
	glVertex2f(-170, -295);
	glVertex2f(-195, -335);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 3
	glColor3ub(205, 92, 92);
	glVertex2f(-265, -235);
	glVertex2f(-240, -195);
	glVertex2f(-215, -235);
	glVertex2f(-240, -275);
	glEnd();

	glBegin(GL_POLYGON);//pola kecil 4
	glColor3ub(205, 92, 92);
	glVertex2f(-265, -355);
	glVertex2f(-240, -395);
	glVertex2f(-215, -355);
	glVertex2f(-240, -315);
	glEnd();

	//garis lurus kanan

	glBegin(GL_POLYGON);//galis lurus kanan PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(380, 500);
	glVertex2f(380, -500);
	glVertex2f(375, -500);
	glVertex2f(375, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus KANAN PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(390, 500);
	glVertex2f(390, -500);
	glVertex2f(385, -500);
	glVertex2f(385, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus KANAN PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(435, 500);
	glVertex2f(435, -500);
	glVertex2f(430, -500);
	glVertex2f(430, 500);
	glEnd();

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kanan PUTIH
		glColor3ub(255, 0, 0);
		glVertex2f(400, -480 + i);
		glVertex2f(420, -460 + i);
		glVertex2f(420, -480 + i);
		glVertex2f(400, -460 + i);

		glVertex2f(400, -480 + i);
		glVertex2f(420, -460 + i);
		glVertex2f(420, -480 + i);
		glVertex2f(400, -460 + i);
		glEnd();
	}

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kanan PUTIH
		glColor3ub(100, 100, 255);
		glVertex2f(400, -180 + i);
		glVertex2f(420, -160 + i);
		glVertex2f(420, -180 + i);
		glVertex2f(400, -160 + i);

		glVertex2f(400, -180 + i);
		glVertex2f(420, -160 + i);
		glVertex2f(420, -180 + i);
		glVertex2f(400, -160 + i);
		glEnd();
	}

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kanan PUTIH
		glColor3ub(255, 0, 0);
		glVertex2f(400, 180 + i);
		glVertex2f(420, 160 + i);
		glVertex2f(420, 180 + i);
		glVertex2f(400, 160 + i);

		glVertex2f(400, 180 + i);
		glVertex2f(420, 160 + i);
		glVertex2f(420, 180 + i);
		glVertex2f(400, 160 + i);
		glEnd();
	}

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kanan PUTIH
		glColor3ub(100, 100, 255);
		glVertex2f(400, 480 + i);
		glVertex2f(420, 460 + i);
		glVertex2f(420, 480 + i);
		glVertex2f(400, 460 + i);

		glVertex2f(400, 480 + i);
		glVertex2f(420, 460 + i);
		glVertex2f(420, 480 + i);
		glVertex2f(400, 460 + i);
		glEnd();
	}

	glBegin(GL_POLYGON);//galis lurus kanan HIJAU
	glColor3ub(0, 255, 0);
	glVertex2f(445, 500);
	glVertex2f(445, -500);
	glVertex2f(450, -500);
	glVertex2f(450, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kanan PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(460, 500);
	glVertex2f(460, -500);
	glVertex2f(470, -500);
	glVertex2f(470, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kanan KUNING
	glColor3ub(255, 255, 0);
	glVertex2f(475, 500);
	glVertex2f(475, -500);
	glVertex2f(480, -500);
	glVertex2f(480, 500);
	glEnd();

	//garis lurus kiri

	glBegin(GL_POLYGON);//galis lurus KIRI PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(-380, 500);
	glVertex2f(-380, -500);
	glVertex2f(-375, -500);
	glVertex2f(-375, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus KIRI PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(-390, 500);
	glVertex2f(-390, -500);
	glVertex2f(-385, -500);
	glVertex2f(-385, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus KIRI PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(-435, 500);
	glVertex2f(-435, -500);
	glVertex2f(-430, -500);
	glVertex2f(-430, 500);
	glEnd();

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kiri PUTIH
		glColor3ub(255, 0, 0);
		glVertex2f(-400, -480 + i);
		glVertex2f(-420, -460 + i);
		glVertex2f(-420, -480 + i);
		glVertex2f(-400, -460 + i);

		glVertex2f(-400, -480 + i);
		glVertex2f(-420, -460 + i);
		glVertex2f(-420, -480 + i);
		glVertex2f(-400, -460 + i);
		glEnd();
	}

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kiri PUTIH
		glColor3ub(100, 100, 255);
		glVertex2f(-400, -180 + i);
		glVertex2f(-420, -160 + i);
		glVertex2f(-420, -180 + i);
		glVertex2f(-400, -160 + i);

		glVertex2f(-400, -180 + i);
		glVertex2f(-420, -160 + i);
		glVertex2f(-420, -180 + i);
		glVertex2f(-400, -160 + i);
		glEnd();
	}

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kiri PUTIH
		glColor3ub(255, 0, 0);
		glVertex2f(-400, 180 + i);
		glVertex2f(-420, 160 + i);
		glVertex2f(-420, 180 + i);
		glVertex2f(-400, 160 + i);

		glVertex2f(-400, 180 + i);
		glVertex2f(-420, 160 + i);
		glVertex2f(-420, 180 + i);
		glVertex2f(-400, 160 + i);
		glEnd();
	}

	for (int i = 0; i <= 80; i += 20) {
		glBegin(GL_LINES);//galis X kiri PUTIH
		glColor3ub(100, 100, 255);
		glVertex2f(-400, 480 + i);
		glVertex2f(-420, 460 + i);
		glVertex2f(-420, 480 + i);
		glVertex2f(-400, 460 + i);

		glVertex2f(-400, 480 + i);
		glVertex2f(-420, 460 + i);
		glVertex2f(-420, 480 + i);
		glVertex2f(-400, 460 + i);
		glEnd();
	}

	glBegin(GL_POLYGON);//galis lurus kiri 
	glColor3ub(0, 255, 0);
	glVertex2f(-445, 500);
	glVertex2f(-445, -500);
	glVertex2f(-450, -500);
	glVertex2f(-450, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kiri 
	glColor3ub(255, 255, 255);
	glVertex2f(-460, 500);
	glVertex2f(-460, -500);
	glVertex2f(-470, -500);
	glVertex2f(-470, 500);
	glEnd();

	glBegin(GL_POLYGON);//galis lurus kiri 
	glColor3ub(255, 255, 0);
	glVertex2f(-475, 500);
	glVertex2f(-475, -500);
	glVertex2f(-480, -500);
	glVertex2f(-480, 500);
	glEnd();

	//segitiga setengah kiri

	glBegin(GL_TRIANGLES);//pola besar kiri PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(-360, 10);
	glVertex2f(-360, -290);
	glVertex2f(-260, -145);
	glEnd();

	glBegin(GL_POLYGON);//anak 1
	glColor3ub(0, 0, 0);
	glVertex2f(-285, -145);
	glVertex2f(-315, -105);
	glVertex2f(-345, -145);
	glVertex2f(-315, -185);
	glEnd();

	glBegin(GL_POLYGON);//anak 1.1
	glColor3ub(0, 255, 0);
	glVertex2f(-295, -145);
	glVertex2f(-315, -120);
	glVertex2f(-335, -145);
	glVertex2f(-315, -170);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(-360, -15);
	glVertex2f(-360, -140);
	glVertex2f(-320, -80);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(-360, -150);
	glVertex2f(-360, -275);
	glVertex2f(-320, -215);
	glEnd();

	glBegin(GL_TRIANGLES);//pola besar kiri MERAH 
	glColor3ub(205, 92, 92);
	glVertex2f(-360, 5);
	glVertex2f(-360, 290);
	glVertex2f(-260, 145);
	glEnd();

	glBegin(GL_POLYGON);//anak 2
	glColor3ub(0, 0, 0);
	glVertex2f(-285, 145);
	glVertex2f(-315, 105);
	glVertex2f(-345, 145);
	glVertex2f(-315, 185);
	glEnd();

	glBegin(GL_POLYGON);//anak 2.1
	glColor3ub(255, 255, 255);
	glVertex2f(-295, 145);
	glVertex2f(-315, 120);
	glVertex2f(-335, 145);
	glVertex2f(-315, 170);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(-360, 20);
	glVertex2f(-360, 140);
	glVertex2f(-320, 80);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(-360, 150);
	glVertex2f(-360, 275);
	glVertex2f(-320, 215);
	glEnd();

	glBegin(GL_TRIANGLES);//pola besar kiri PINK
	glColor3ub(199, 21, 133);
	glVertex2f(-360, 295);
	glVertex2f(-360, 440 + 145);
	glVertex2f(-260, 440);
	glEnd();

	glBegin(GL_POLYGON);//anak 3
	glColor3ub(0, 0, 0);
	glVertex2f(-285, 435);
	glVertex2f(-315, 395);
	glVertex2f(-345, 435);
	glVertex2f(-315, 480);
	glEnd();

	glBegin(GL_POLYGON);//anak 3.1
	glColor3ub(140, 255, 255);
	glVertex2f(-295, 435);
	glVertex2f(-315, 410);
	glVertex2f(-335, 435);
	glVertex2f(-315, 465);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(-360, 310);
	glVertex2f(-360, 430);
	glVertex2f(-320, 370);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(-360, 440);
	glVertex2f(-360, 565);
	glVertex2f(-320, 505);
	glEnd();

	glBegin(GL_TRIANGLES);//pola besar kiri HIJAU
	glColor3ub(0, 255, 0);
	glVertex2f(-360, -295);
	glVertex2f(-360, -440 - 145);
	glVertex2f(-260, -440);
	glEnd();

	glBegin(GL_POLYGON);//anak 4
	glColor3ub(0, 0, 0);
	glVertex2f(-285, -435);
	glVertex2f(-315, -395);
	glVertex2f(-345, -435);
	glVertex2f(-315, -480);
	glEnd();

	glBegin(GL_POLYGON);//anak 4.1
	glColor3ub(255, 255, 255);
	glVertex2f(-295, -435);
	glVertex2f(-315, -410);
	glVertex2f(-335, -435);
	glVertex2f(-315, -465);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(-360, -310);
	glVertex2f(-360, -430);
	glVertex2f(-320, -370);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(-360, -440);
	glVertex2f(-360, -565);
	glVertex2f(-320, -505);
	glEnd();

	//segitiga setengah kanan

	glBegin(GL_TRIANGLES);//pola besar kanan PUTIH
	glColor3ub(255, 255, 255);
	glVertex2f(360, 0);
	glVertex2f(360, -290);
	glVertex2f(260, -145);
	glEnd();

	glBegin(GL_POLYGON);//anak 1
	glColor3ub(0, 0, 0);
	glVertex2f(285, -145);
	glVertex2f(315, -105);
	glVertex2f(345, -145);
	glVertex2f(315, -185);
	glEnd();

	glBegin(GL_POLYGON);//anak 1.1
	glColor3ub(0, 255, 0);
	glVertex2f(295, -145);
	glVertex2f(315, -120);
	glVertex2f(335, -145);
	glVertex2f(315, -170);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(360, -15);
	glVertex2f(360, -140);
	glVertex2f(320, -80);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(360, -150);
	glVertex2f(360, -275);
	glVertex2f(320, -215);
	glEnd();

	glBegin(GL_TRIANGLES);//pola besar kanan HIJAU
	glColor3ub(0, 255, 0);
	glVertex2f(360, 5);
	glVertex2f(360, 290);
	glVertex2f(260, 145);
	glEnd();

	glBegin(GL_POLYGON);//anak 2
	glColor3ub(0, 0, 0);
	glVertex2f(285, 145);
	glVertex2f(315, 105);
	glVertex2f(345, 145);
	glVertex2f(315, 185);
	glEnd();

	glBegin(GL_POLYGON);//anak 2.1
	glColor3ub(245, 247, 96);
	glVertex2f(295, 145);
	glVertex2f(315, 120);
	glVertex2f(335, 145);
	glVertex2f(315, 170);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(360, 20);
	glVertex2f(360, 140);
	glVertex2f(320, 80);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(360, 150);
	glVertex2f(360, 275);
	glVertex2f(320, 215);
	glEnd();

	glBegin(GL_TRIANGLES);//pola besar kanan PINK
	glColor3ub(230, 40, 165);
	glVertex2f(360, 295);
	glVertex2f(360, 440 + 145);
	glVertex2f(260, 440);
	glEnd();

	glBegin(GL_POLYGON);//anak 3
	glColor3ub(0, 0, 0);
	glVertex2f(285, 435);
	glVertex2f(315, 395);
	glVertex2f(345, 435);
	glVertex2f(315, 480);
	glEnd();

	glBegin(GL_POLYGON);//anak 3.1
	glColor3ub(255, 255, 255);
	glVertex2f(295, 435);
	glVertex2f(315, 410);
	glVertex2f(335, 435);
	glVertex2f(315, 465);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(360, 310);
	glVertex2f(360, 430);
	glVertex2f(320, 370);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(360, 440);
	glVertex2f(360, 565);
	glVertex2f(320, 505);
	glEnd();

	glBegin(GL_TRIANGLES);//pola besar kanan BIRU
	glColor3ub(140, 255, 255);
	glVertex2f(360, -295);
	glVertex2f(360, -440 - 145);
	glVertex2f(260, -440);
	glEnd();

	glBegin(GL_POLYGON);//anak 4
	glColor3ub(0, 0, 0);
	glVertex2f(285, -435);
	glVertex2f(315, -395);
	glVertex2f(345, -435);
	glVertex2f(315, -480);
	glEnd();

	glBegin(GL_POLYGON);//anak 4.1
	glColor3ub(255, 255, 255);
	glVertex2f(295, -435);
	glVertex2f(315, -410);
	glVertex2f(335, -435);
	glVertex2f(315, -465);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 1
	glColor3ub(0, 0, 0);
	glVertex2f(360, -310);
	glVertex2f(360, -430);
	glVertex2f(320, -370);
	glEnd();

	glBegin(GL_TRIANGLES);//SEGITIGA SISI 2
	glColor3ub(0, 0, 0);
	glVertex2f(360, -440);
	glVertex2f(360, -565);
	glVertex2f(320, -505);
	glEnd();

	//segitiga kecil

	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(0, -445);
	glVertex2f(-100, -445 - 145);
	glVertex2f(100, -445 - 145);
	glEnd();

	glBegin(GL_TRIANGLES);//pola kecil segitiga atas hijau
	glColor3ub(170, 241, 127);
	glVertex2f(0, 445);
	glVertex2f(-100, 445 + 145);
	glVertex2f(100, 445 + 145);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(205, 255, 255);
	glVertex2f(240, -445);
	glVertex2f(340, -145 - 445);
	glVertex2f(140, -145 - 445);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(205, 255, 255);
	glVertex2f(240, 445);
	glVertex2f(340, 145 + 445);
	glVertex2f(140, 145 + 445);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(205, 255, 255);
	glVertex2f(-240, 445);
	glVertex2f(-340, 145 + 445);
	glVertex2f(-140, 145 + 445);
	glEnd();

	glBegin(GL_POLYGON);//pola besar kanan
	glColor3ub(205, 255, 255);
	glVertex2f(-240, -445);
	glVertex2f(-340, -145 - 445);
	glVertex2f(-140, -145 - 445);
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