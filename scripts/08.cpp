#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>
#include <Windows.h>
#include <GL/glu.h>
#include <stdio.h>
#include <math.h>

using namespace std;

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
		case 27: //Escape key
			exit(0);
	}
}

//Αρχικοποίηση της 3D σύνθεσης της εικόνας
void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL); //Ενεργοποίηση χρώματος
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Αλλαγή του φόντου σε λευκό
}

void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0f;
float _cameraAngle = 0.0f;

	// Δημιουργία "Γεμιστού" Κύκλου
		void drawFilledSun(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    		glBegin(GL_TRIANGLE_FAN); // Η Αρχή της Δημιουργίας του Κύκλου
    			glVertex2f(x, y); // Κέντρο του Κύκλου
    			for (i = 0; i <= num_segments; i++)   {
        			glVertex3f (
            			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            		,1);
    			}
    		glEnd(); //Το Τέλος της Δημιουργίας του Κύκλου
		}

	// Δημιουργία Ακτίνων Κύκλου
		void Rays(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    			for (i = 0; i <= num_segments; i++)   {
		    		glBegin(GL_POLYGON); 
    					glVertex3f((x+ (radius * cos(i * twicePi / num_segments))) 
						         ,(y + (radius * sin(i * twicePi / num_segments)))
            		              ,2); 
    					glVertex3f((x+ (radius * cos(0.2618+(i * twicePi / num_segments)))) 
						         ,(y + (radius * sin(0.2618+(i * twicePi / num_segments))))
            		              ,2); 
    					glVertex3f((x+ ((radius+10) * cos(i * twicePi / num_segments))) 
						         ,(y + ((radius+10) * sin(i * twicePi / num_segments)))
            		              ,2); 
    					glVertex3f((x+ (radius * cos(-0.2618+(i * twicePi / num_segments)))) 
						         ,(y + (radius * sin(-0.2618+(i * twicePi / num_segments))))
            		              ,2); 
    			    glEnd();
    			}
		}


void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity();
    glOrtho (0, 600.0, 400.0, 00.0, -100.0,100.0);
	//glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f);
	//glTranslatef(0.0f, 0.0f, -5.0f);
	
	//glPushMatrix();
	//glTranslatef(0.0f, -1.0f, 0.0f);
	//glRotatef(_angle, 0.0f, 0.0f, 1.0f);
	
	
	//Μαύρο Περίγραμμα
	glBegin(GL_POLYGON);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(32.0f, 43.0f, -10.0f);
		glVertex3f(567.0f, 43.0f, -10.0f);
		glVertex3f(567.0f, 357.0f, -10.0f);
		glVertex3f(32.0f, 357.0f, -10.0f);
	glEnd();
	
	//Μπλε Τρίγωνο
	glBegin(GL_POLYGON);
		glColor3f(0.16f, 0.09f, 0.44f);
		glVertex3f(35.0f, 46.0f, 0.0f);
		glVertex3f(454.0f, 46.0f, 0.0f);
		glVertex3f(35.0f, 290.0f, 0.0f);
	glEnd();

	//Λευκή Γραμμή Α
	glBegin(GL_POLYGON);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(35.0f, 291.0f, 0.0f);
		glVertex3f(455.0f, 46.0f, 0.0f);
		glVertex3f(486.0f, 46.0f, 0.0f);
		glVertex3f(35.0f, 307.0f, 0.0f);
	glEnd();
	
	//Κόκκινο Παραλληλόγραμμο
	glBegin(GL_POLYGON);
		glColor3f(0.85f, 0.15f, 0.11f);
		glVertex3f(35.0f, 308.0f, 0.0f);
		glVertex3f(487.0f, 46.0f, 0.0f);
		glVertex3f(564.0f, 46.0f, 0.0f);
		glVertex3f(564.0f, 91.0f, 0.0f);
		glVertex3f(119.0f, 354.0f, 0.0f);
		glVertex3f(35.0f, 354.0f, 0.0f);
	glEnd();
	
	//Λευκή Γραμμή Β
	glBegin(GL_POLYGON);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(120.0f, 354.0f, 0.0f);
		glVertex3f(143.0f, 354.0f, 0.0f);
		glVertex3f(564.0f, 92.0f, 0.0f);
		glVertex3f(564.0f, 107.0f, 0.0f);
	glEnd();

	//Πράσινο Τρίγωνο
	glBegin(GL_POLYGON);
		glColor3f(0.0f, 0.68f, 0.25f);
		glVertex3f(144.0f, 354.0f, 0.0f);
		glVertex3f(564.0f, 108.0f, 0.0f);
		glVertex3f(564.0f, 354.0f, 0.0f);
	glEnd();

	//Κίτρινος Ήλιος
	glColor3f(1, 0.96, 0);
	drawFilledSun(140,129,29,1000);

	//Ακτίνες Ήλιου
	glColor3f(1, 0.96, 0);
	Rays(140,129,31,12);
	
	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	
	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Αρχικοποίηση GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 400);
	
	glutCreateWindow("Σημαία Ναμίμπιας");
	initRendering();
	
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	//glutTimerFunc(25, update, 0); //Προσθήκη χρονομέτρου
	
	glutMainLoop();
	return 0;
}







