#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>
#include <Windows.h>
#include <GL/glu.h>
#include <stdio.h>
#include <math.h>

typedef enum {
   MODE_BITMAP
} mode_type;

static mode_type mode;
static int font_index;

void print_bitmap_string(void* font, char* s)
{
   if (s && strlen(s)) {
      while (*s) {
         glutBitmapCharacter(font, *s);
         s++;
      }
   }
}

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
   mode = MODE_BITMAP;
   font_index = 0;
}

void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _color1 = 0.0f;
float _color2 = 0.0f;
float _color3 = 0.0f;
float _cameraAngle = 0.0f;


void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity();
    glOrtho (0, 550.0, 298.0, 00.0, -100.0,100.0);

   char string[8][256];
   unsigned int i, j;
   unsigned int count;
   void* bitmap_fonts[7] = {
      GLUT_BITMAP_9_BY_15,
      GLUT_BITMAP_8_BY_13,
      GLUT_BITMAP_TIMES_ROMAN_10,
      GLUT_BITMAP_TIMES_ROMAN_24,
      GLUT_BITMAP_HELVETICA_10,
      GLUT_BITMAP_HELVETICA_12,
      GLUT_BITMAP_HELVETICA_18     
   };

   char* bitmap_font_names[7] = {
      "UNIVERSITY",
      "PIREAUS",
      "INFORMATICS",
      "DEPARTMENT",
      "COMPUTER",
      "GRAPHICS",
      "GREECE"     
   };

	glColor3f(_color1,_color2,_color3);
	for (i=0;i<7;i++)
	{
	    glRasterPos2f(30+20*i, 30+20*i);
    	print_bitmap_string(bitmap_fonts[i], bitmap_font_names[i]); 
	}
	
	glutSwapBuffers();
}

void update(int value) {
	_color1 += 0.005f;
	_color2 += 0.006f;
	_color3 += 0.007f;
	if (_color1 > 1) {
		_color1 = 0;
	}
	if (_color2 > 1) {
		_color2 = 0;
	}
	if (_color3 > 1) {
		_color3 = 0;
	}
	
	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Αρχικοποίηση GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(550, 298);
	
	glutCreateWindow("12_Κείμενο");
	initRendering();
	
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutTimerFunc(25, update, 0); //Προσθήκη χρονομέτρου
	
	glutMainLoop();
	return 0;
}







