#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>

using namespace std;

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
		case 27: //Escape key
			exit(0);
	}
}

void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING); //Ενεργοποίηση φωτισμού
	glEnable(GL_LIGHT0); //Ενεργοποίηση φωτισμού #0
	glEnable(GL_LIGHT1); //Ενεργοποίηση φωτισμού #1
	glEnable(GL_NORMALIZE); //Αυτόματη κανονικοποίηση φωτισμού
	glShadeModel(GL_SMOOTH); //Ενεργοποίηση μαλακού φωτισμού
}

void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = -70.0f;

void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslatef(0.0f, 0.0f, -8.0f);
	
	//Προσθήκη φωτισμού περιβάλλοντος
	GLfloat ambientColor[] = {0.2f, 0.2f, 0.2f, 1.0f}; //Χρώμα (0.2, 0.2, 0.2)
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);
	
	//Προσθήκη σημειακού φωτισμού
	GLfloat lightColor0[] = {0.5f, 0.5f, 0.5f, 1.0f}; //Χρώμα (0.5, 0.5, 0.5)
	GLfloat lightPos0[] = {4.0f, 0.0f, 8.0f, 1.0f}; //Τοποθέτηση στο (4, 0, 8)
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
	
	//Προσθήκη κατευθυνόμενου φωτισμού
	GLfloat lightColor1[] = {0.5f, 0.2f, 0.2f, 1.0f}; //Color (0.5, 0.2, 0.2)
	//Λήψη από τη διεύθυνση (-1, 0.5, 0.5)
	GLfloat lightPos1[] = {-1.0f, 0.5f, 0.5f, 0.0f};
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);
	
	glRotatef(_angle, 0.0f, 1.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	
	//Μπροστά
	//glNormal3f(0.0f, 0.0f, 1.0f);
	glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, -1.0f, 1.5f);
	glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, -1.0f, 1.5f);
	glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, 1.0f, 1.5f);
	glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, 1.0f, 1.5f);
	
	//Δεξιά
	//glNormal3f(1.0f, 0.0f, 0.0f);
	glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, -1.0f, -1.5f);
	glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, 1.0f, -1.5f);
	glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, 1.0f, 1.5f);
	glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, -1.0f, 1.5f);
	
	//Πίσω
	//glNormal3f(0.0f, 0.0f, -1.0f);
	glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, -1.0f, -1.5f);
	glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, 1.0f, -1.5f);
	glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, 1.0f, -1.5f);
	glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, -1.0f, -1.5f);
	
	//Αριστερά
	//glNormal3f(-1.0f, 0.0f, 0.0f);
	glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, -1.0f, -1.5f);
	glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, -1.0f, 1.5f);
	glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, 1.0f, 1.5f);
	glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, 1.0f, -1.5f);
	
	glEnd();
	
	glutSwapBuffers();
}

void update(int value) {
	_angle += 1.5f;
	if (_angle > 360) {
		_angle -= 360;
	}
	
	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Εκκίνηση GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	
	//Δημιουργία παραθύρου
	glutCreateWindow("7 / Κεφάλαιο 7ο - Φωτισμός");
	initRendering();
	
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutTimerFunc(25, update, 0); 
	
	glutMainLoop();
	return 0;
}

/* Το πρόγραμμα βασίζεται στο αρχείο "Color" lesson που παρουσιάζεται στο
 * www.videotutorialsrock.com
 */








