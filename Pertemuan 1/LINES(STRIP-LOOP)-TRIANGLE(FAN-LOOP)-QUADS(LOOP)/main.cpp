#include <gl/glut.h>

void jawabansoal() {
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.9,0.6);
        glVertex2f(-0.7,0.8);
        glVertex2f(-0.5,0.6);
        glVertex2f(-0.3,0.8);
    glEnd();

    // GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(-0.2,0.6);
        glVertex2f(0.0,0.8);
        glVertex2f(0.2,0.6);
        glVertex2f(0.0,0.4);
    glEnd();

    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(-0.7,0.2); 
        glVertex2f(-0.9,0.0);
        glVertex2f(-0.7,-0.2);
        glVertex2f(-0.5,0.0);
        glVertex2f(-0.7,0.2);
    glEnd();

    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.3,0.2);
        glVertex2f(-0.3,-0.2);
        glVertex2f(-0.1,0.2);
        glVertex2f(-0.1,-0.2);
        glVertex2f(0.1,0.2);
        glVertex2f(0.1,-0.2);
    glEnd();

    // GL_QUADS
    glBegin(GL_QUADS);
        glColor3f(1.0,0.0,1.0);
        glVertex2f(0.3,0.2);
        glVertex2f(0.5,0.2);
        glVertex2f(0.5,-0.2);
        glVertex2f(0.3,-0.2);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.7,0.2);
        glVertex2f(0.7,-0.2);
        glVertex2f(0.9,0.2);
        glVertex2f(0.9,-0.2);
        glVertex2f(1.1,0.2);
        glVertex2f(1.1,-0.2);
    glEnd();

    glFlush();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800,600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("MisbachulMunir(Jawabansoallaprak)");

    glutDisplayFunc(jawabansoal);

    glClearColor(0.0,0.0,0.0,1.0);

    glutMainLoop();
    return 0;
}
