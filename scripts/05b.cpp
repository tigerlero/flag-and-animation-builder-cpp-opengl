#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>

using namespace std;

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
		case 27: // Κουμπί esc
			exit(0);
	}
}

void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0f;
float _cameraAngle = 0.0f;

// Σχεδίαση Τρισδιάστατης Σκηνής
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //Επιλογή προοπτικής σχεδίασης
	glLoadIdentity(); //Επανεκκίνηση προοπτικής σχεδίασης
	glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f); //Περιστροφή της κάμερας
	glTranslatef(0.0f, 0.0f, -5.0f); //Μετακίνηση εμπρός κατά 5 μονάδες
	
	glPushMatrix(); //Αποθήκευση των έως τώρα μετασχηματισμών
	glTranslatef(0.0f, -1.0f, 0.0f); //Μετακίνηση στο κέντρο του τραπεζίου
	glRotatef(_angle, 0.0f, 0.0f, 1.0f); //Περιστροφή γύρω από τον άξονα z
	
	glBegin(GL_QUADS);
	
	//Τραπέζιο
	glColor3f(1,0,0);
	glVertex3f(-0.7f, -0.5f, 0.0f);
	glVertex3f(0.7f, -0.5f, 0.0f);
	glVertex3f(0.4f, 0.5f, 0.0f);
	glVertex3f(-0.4f, 0.5f, 0.0f);
	
	glEnd();
	
	glPopMatrix(); //Ακύρωση μετακίνησης στο κέντρο του τραπεζίου
	glPushMatrix(); //Αποθήκευση του τρέχοντος μετασχηματισμού
	glTranslatef(1.0f, 1.0f, 0.0f); //Μετακίνηση στο κέντρο του πενταγώνου
	glRotatef(_angle, 0.0f, 1.0f, 0.0f); //Περιστροφή περί του άξονα y
	glScalef(0.7f, 0.7f, 0.7f); //Συμίκρυνση κατά 0.7 στους άξονες x, y και z
	
	glBegin(GL_TRIANGLES);
	
	//Πεντάγωνο
	glColor3f(0,1,0);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(-0.5f, 0.0f, 0.0f);
	
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	
	glEnd();
	
	glPopMatrix(); //Ακύρωση μετακίνησης στο κέντρο του πενταγώνου
	glPushMatrix(); //Αποθήκευση της τρέχουσας κατάστασης μετασχηματισμών
	glTranslatef(-1.0f, 1.0f, 0.0f); //Μετακίνηση στο κέντρο του τριγώνου
	glRotatef(_angle, 1.0f, 2.0f, 3.0f); //Περιστροφή περί του άξονα (1, 2, 3)
	
	glColor3f(0,0,1);
	glBegin(GL_TRIANGLES);
	
	//Τρίγωνο
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	
	glEnd();
	
	glPopMatrix(); //Ακύρωση μετακίνησης στο κέντρο του τριγώνου
	
	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	
	glutPostRedisplay(); //Αναφορά στο GLUT ότι η απεικόνιση έχει αλλάξει
	
	//Κλήση στο GLUT για ανανέωση μετά από 25msec
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Αρχικοποίηση GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	
	//Δημιουργία παραθύρου
	glutCreateWindow("5b / Κεφάλαιο 5ο - Μετασχηματισμοί και Χρονόμετρα");
	initRendering();
	
	//Ρύθμιση χειριστών συναρτήσεων
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutTimerFunc(25, update, 0); //Εισαγωγή χρονομέτρου
	
	glutMainLoop();
	return 0;
}


/* Το πρόγραμμα βασίζεται στο αρχείο "Basic Shapes" lesson που παρουσιάζεται στο
 * www.videotutorialsrock.com
 */








