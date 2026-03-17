#include <GL/glut.h>
#include <math.h>

// fungsi roda (lingkaran)
void drawCircle(int circle_points) {
    float angle;
    glBegin(GL_POLYGON);
    for (int i = 0; i < circle_points; i++) {
        angle = 2 * 3.1416 * i / circle_points;
        glVertex2f(cos(angle), sin(angle));
    }
    glEnd();
}

// badan mobil (trapesium dasar di tengah)
void drawBody(){
    glBegin(GL_POLYGON);
        glVertex2f(-0.4,-0.1);
        glVertex2f(0.4,-0.1);
        glVertex2f(0.25,0.20);
        glVertex2f(-0.25,0.20);
    glEnd();
}

// kaca 1
void drawWindow1(){
    glBegin(GL_POLYGON);
        glVertex2f(-0.05,-0.05);
        glVertex2f(0.1,-0.05);
        glVertex2f(0.05,0.08);
        glVertex2f(-0.05,0.08);
    glEnd();
}

// kaca 2
void drawWindow2(){
    glBegin(GL_POLYGON);
        glVertex2f(-0.1,-0.05);
        glVertex2f(0.1,-0.05);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.05,0.08);
    glEnd();
}
void display(){

    glClear(GL_COLOR_BUFFER_BIT);

    // ===== BADAN MOBIL =====
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(0,0,0);
        drawBody();
    glPopMatrix();

    // ===== KACA DEPAN =====
    glPushMatrix();
        glColor3f(0.5,0.8,1);
        glTranslatef(0.15,0.1,0);
        drawWindow1();
    glPopMatrix();

    // ===== KACA BELAKANG =====
    glPushMatrix();
        glColor3f(0.5,0.8,1);
        glTranslatef(-0.15,0.1,0);
        drawWindow2();
    glPopMatrix();

    // ===== RODA BELAKANG =====
    glPushMatrix();
		glTranslatef(-0.25, -0.10, 0);
		glScalef(0.1, 0.1, 1);       
		drawCircle(100);
	glPopMatrix();

    // ===== RODA DEPAN =====
    glPushMatrix();
		glTranslatef(0.25, -0.10, 0);
		glScalef(0.1, 0.1, 1);
		drawCircle(100);
	glPopMatrix();

    glFlush();
}

void init(){
    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc, char** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("Mobil(Misbachul Munir)");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
}
