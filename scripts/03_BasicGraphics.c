#include <GL/glut.h>


float angle=0.0f;

void DrawAxes()
{
  glColor3f(0.6, 0.6, 0.6);
  glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
	glVertex2f(100.0,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,100.0);
  glEnd();
}

void Render()
{    
  
  glClear(GL_COLOR_BUFFER_BIT );  // Clean up the colour of the window
								  // and the depth buffer

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  DrawAxes();


////(02a)
///  glTranslatef(40.0, 0.0, 0.0);
////(02b)
//  glRotatef(30.0, 0.0, 0.0, 1.0);
////(02c)
//  glScalef(2.0, 1.0, 1.0);

////(02d-i)
//  glTranslatef(30.0, 0.0, 0.0);
//  glRotatef(40.0, 0.0, 0.0, 1.0);
////VERSUS 
////(02d-ii)
//  glRotatef(40.0, 0.0, 0.0, 1.0);
//  glTranslatef(30.0, 0.0, 0.0);

////(02e-i)
//  glTranslatef(30.0, 0.0, 0.0);
//  glTranslatef(0.0, 20.0, 0.0);
////// VERSUS 
//////(02e-ii)
//  glTranslatef(30.0, 20.0, 0.0);

//// (03)
//  angle=105.0;
//  glRotatef(angle, 0.0, 0.0, 1.0);

//// (00)
/**/  
//  glColor3f(1.0, 0.9, 0.0);						   // Set drawing colour = yellow
//  glRectf(-10.0, -10.0, 15.0, 25.0);               // Draw a built-in primitive
/**/

//// (00a)
/*
  glColor3f(0.2, 0.9, 0.2);
  glBegin(GL_TRIANGLES);
	glVertex2f(20.0,30.0);
	glVertex2f(30.0,30.0);
	glVertex2f(25.0,40.0);
  glEnd();
*/
//// (00b)
  DrawAxes();

//// (01)
//// (01a)
    
    glColor3f(0.2, 0.9, 0.2);
    glPointSize(5);
//  glBegin(GL_POINTS);
//  glBegin(GL_LINES);
//  glBegin(GL_LINE_STRIP);
//  glBegin(GL_LINE_LOOP);
//  glBegin(GL_TRIANGLES);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(10.0,20.0);
	glVertex2f(-20.0,10.0);
	glVertex2f(-15.0,-20.0);
	glVertex2f(15.0,-30.0);
	glVertex2f(35.0,-15.0);
	glVertex2f(25.0,5.0);
	glEnd();

//// (01b)
//  glBegin(GL_TRIANGLES);
//  glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(10.0,20.0);
	glVertex2f(-20.0,10.0);
	glColor3f(0.9, 0.2, 0.2);
	glVertex2f(25.0,5.0);
	glColor3f(0.2, 0.9, 0.2);
	glVertex2f(-15.0,-20.0);
	glColor3f(0.2, 0.2, 0.9);
	glVertex2f(35.0,-15.0);
	glColor3f(0.9, 0.2, 0.9);
	glVertex2f(15.0,-30.0);
	
	glEnd();

//// (01c)
/*
    glPointSize(5);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2f(10.0,30.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-25.0,-30.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(40.0,-25.0);
	glEnd();
*/



  glutSwapBuffers();             // All drawing commands applied to the 
                                 // hidden buffer, so now, bring forward
                                 // the hidden buffer and hide the visible one           

}

//-----------------------------------------------------------


void Resize(int w, int h)
{ 
  // define the visible area of the window ( in pixels )
  if (h==0) h=1;
  glViewport(0,0,w,h); 

  // Setup viewing volume

  glMatrixMode(GL_PROJECTION); 
  glLoadIdentity();
 
  //         L	   R 	  B 	T	 N	   F
  glOrtho (-100.0, 100.0, -100.0, 100.0, 100.0,-100.0);
	
}

void Idle()
{
	angle+=1.0f;
	glutPostRedisplay();

}

//-----------------------------------------------------------

void Setup()  // DON'T TOUCH IT 
{ 
	//Parameter handling
	//glShadeModel (GL_SMOOTH);
	glShadeModel (GL_FLAT);

 
	// polygon rendering mode
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial( GL_FRONT, GL_AMBIENT_AND_DIFFUSE );
  
	//Set up light source
	GLfloat light_position[] = { -50.0, 20.0, 150.0, 1.0 };
	GLfloat ambientLight[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat diffuseLight[] = { 0.8, 0.8, 0.8, 1.0 };
	   
	glLightfv( GL_LIGHT0, GL_AMBIENT, ambientLight );
	glLightfv( GL_LIGHT0, GL_DIFFUSE, diffuseLight );
	glLightfv( GL_LIGHT0, GL_POSITION, light_position);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glEnable(GL_POINT_SMOOTH);

	// Black background
	glClearColor(0.0f,0.0f,0.0f,1.0f);

}


////////////////// State Variables ////////////////////////


/////////////// Main Program ///////////////////////////

int main(int argc, char* argv[])
{ 
  // initialize GLUT library state
  glutInit(&argc, argv);
	
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
 
  
  // Define the main window size and initial position 
  // ( upper left corner, boundaries included )
  glutInitWindowSize(480,480);
  glutInitWindowPosition(50,50);
  
  // Create and label the main window
  glutCreateWindow("�������� 3�");
  
  
  // Callbacks for the GL and GLUT events:

  // The rendering function 
  glutDisplayFunc(Render);
  glutReshapeFunc(Resize);
  
  //(03)
  //glutIdleFunc(Idle);
 
  //Enter main event handling loop
  glutMainLoop();
  return 0;
}  

