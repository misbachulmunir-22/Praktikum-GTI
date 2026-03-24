#include <GL/glut.h>

static int shoulder = 0, elbow = 0;
static int wrist = 0;
static int fingerBase = 0, fingerMid = 0, fingerTip = 0;
static int thumb = 0;

void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}

void display(void) {
	
	glClear (GL_COLOR_BUFFER_BIT);
	
	glPushMatrix();
	
	// ===== SHOULDER =====
	glTranslatef (-1.0, 0.0, 0.0);
	glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
	glTranslatef (1.0, 0.0, 0.0); 
	
	// lengan atas
	glPushMatrix();
		glScalef (2.0, 0.4, 1.0);
		glutWireCube (1.0); 
	glPopMatrix();
	
	// ===== ELBOW =====
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
	glTranslatef (1.0, 0.0, 0.0);
	 
	// lengan bawah
	glPushMatrix();
		glScalef (2.0, 0.4, 1.0);
		glutWireCube (1.0);
	glPopMatrix(); 
	
	// ===== KE UJUNG =====
	glTranslatef (1.0, 0.0, 0.0);

	// ===== WRIST =====
	glRotatef ((GLfloat) wrist, 0.0, 0.0, 1.0);
	glTranslatef (0.5, 0.0, 0.0);

	// ===== TELAPAK =====
	glPushMatrix();
		glScalef (1.2, 0.6, 1.0);
		glutWireCube (1.0);
	glPopMatrix();

	// ===== 4 JARI =====
	for(int i = -2; i <= 1; i++) {
		glPushMatrix();

		glTranslatef (0.7, i * 0.2, 0.0);

		// ruas 1
		glRotatef (fingerBase, 0.0, 0.0, 1.0);
		glTranslatef (0.25, 0.0, 0.0);

		glPushMatrix();
			glScalef (0.5, 0.1, 0.1);
			glutWireCube (1.0);
		glPopMatrix();

		// ruas 2
		glTranslatef (0.25, 0.0, 0.0);
		glRotatef (fingerMid, 0.0, 0.0, 1.0);
		glTranslatef (0.2, 0.0, 0.0);

		glPushMatrix();
			glScalef (0.4, 0.08, 0.08);
			glutWireCube (1.0);
		glPopMatrix();

		// ruas 3
		glTranslatef (0.2, 0.0, 0.0);
		glRotatef (fingerTip, 0.0, 0.0, 1.0);
		glTranslatef (0.15, 0.0, 0.0);

		glPushMatrix();
			glScalef (0.3, 0.07, 0.07);
			glutWireCube (1.0);
		glPopMatrix();

		glPopMatrix();
	}

	// ===== IBU JARI =====
	glPushMatrix();

	glTranslatef (0.3, -0.4, 0.0);
	glRotatef (-40, 0.0, 0.0, 1.0);

	glRotatef (thumb, 0.0, 0.0, 1.0);
	glTranslatef (0.2, 0.0, 0.0);

	glPushMatrix();
		glScalef (0.4, 0.1, 0.1);
		glutWireCube (1.0);
	glPopMatrix();

	glTranslatef (0.2, 0.0, 0.0);
	glRotatef (thumb, 0.0, 0.0, 1.0);
	glTranslatef (0.15, 0.0, 0.0);

	glPushMatrix();
		glScalef (0.3, 0.08, 0.08);
		glutWireCube (1.0);
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	glutSwapBuffers();
}

void reshape (int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 's': 
		shoulder = (shoulder + 5) % 360;
		break;
	case 'S': 
		shoulder = (shoulder - 5) % 360;
		break;
	case 'e':
		elbow = (elbow + 5) % 360;
		break;
	case 'E':
		elbow = (elbow - 5) % 360;
		break;
	case 'w':
		wrist = (wrist + 5) % 360;
		break;
	case 'W':
		wrist = (wrist - 5) % 360;
		break;
	case '1':
		fingerBase = (fingerBase + 5) % 360;
		break;
	case '!':
		fingerBase = (fingerBase - 5) % 360;
		break;
	case '2':
		fingerMid = (fingerMid + 5) % 360;
		break;
	case '@':
		fingerMid = (fingerMid - 5) % 360;
		break;
	case '3':
		fingerTip = (fingerTip + 5) % 360;
		break;
	case '#':
		fingerTip = (fingerTip - 5) % 360;
		break;
	case 't':
		thumb = (thumb + 5) % 360;
		break;
	case 'T':
		thumb = (thumb - 5) % 360;
		break;
	case 27:
		exit(0);
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (700, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Gambar Tangan (Misbachul Munir)");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
