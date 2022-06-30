#include <iostream>
#include <stdlib.h> // Απαιτείται για τη συνάρτηση "exit" 
#include <GL/glut.h> // Απαιτείται για να χρησιμοποιηθούν εντολές της OpenGL

using namespace std;

// Συνάρτηση που καλείται όταν πιέζεται ένα κουμπί
void handleKeypress(unsigned char key, //Το κουμπί που πιέζεται
					int x, int y) {    //Οι τρέχουσες συντεταγμένες του δρομέα
	switch (key) {
		case 27: //Κωδικός που αντιστοιχεί στο κουμπί esc
			exit(0); //Έξοδος από το πρόγραμμα
	}
}

//Συνάρτηση απεικόνισης 3D (3D rendering)
void initRendering() {
	//Διαχείριση του βάθους και των σημείων
	glEnable(GL_DEPTH_TEST);
}

//Συνάρτηση που καλείται όταν γίνει αλλαγή στις διαστάσεις 
//του παραθύρου απεικόνισης
void handleResize(int w, int h) {
	//Μετατροπή των συντεταγμένων σε τιμές pixel από την OpenGL
	glViewport(0, 0, w, h);
	
	glMatrixMode(GL_PROJECTION); //Κλίση για ρύθμιση της προοπτικής της κάμερας
	
	//Ρύθμισητης προοπτικής της κάμερας
	glLoadIdentity(); //Επανεκκίνηση της κάμερας
	gluPerspective(45.0,                  //Η γωνία της κάμερας
				   (double)w / (double)h, //Η αναλογία πλάτους προς ύψος
				   1.0,                   //Η κοντινότερη συντεταγμένη z
				   200.0);                //H πιο απομακρυσμένη συντεταγμένη z 
				   }

//Σχεδιασμός της τρισδιάστατης σκηνής
void drawScene() {
	//Διαγραφή πληροφορίας από την τελευταία σχεδίαση
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //Επιλογή προοπτικής σχεδίασης
	glLoadIdentity(); //Επανεκκίνηση προοπτικής σχεδίασης
	
	glBegin(GL_QUADS); 
		
	//Τραπέζιο
	glVertex3f(-0.7f, -1.5f, -5.0f);
	glVertex3f(0.7f, -1.5f, -5.0f);
	glVertex3f(0.4f, -0.5f, -5.0f);
	glVertex3f(-0.4f, -0.5f, -5.0f);
	
	glEnd(); 
	
	glBegin(GL_TRIANGLES); 
	
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(1.5f, 0.5f, -5.0f);
	glVertex3f(0.5f, 1.0f, -5.0f);
	
	glVertex3f(0.5f, 1.0f, -5.0f);
	glVertex3f(1.5f, 0.5f, -5.0f);
	glVertex3f(1.5f, 1.0f, -5.0f);
	
	glVertex3f(0.5f, 1.0f, -5.0f);
	glVertex3f(1.5f, 1.0f, -5.0f);
	glVertex3f(1.0f, 1.5f, -5.0f);
	
	//Τρίγωνο
	glVertex3f(-0.5f, 0.5f, -5.0f);
	glVertex3f(-1.0f, 1.5f, -5.0f);
	glVertex3f(-1.5f, 0.5f, -5.0f);
	
	glEnd(); //Τέλος συντεταγμένων τριγώνων
	
	glutSwapBuffers(); //Αποστολή της σκηνής 3D στην οθόνη
}

int main(int argc, char** argv) {
	//Εκκίνηση GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //Ρύθμιση μεγέθους παραθύρου
	
	//Δημιουργία παραθύρου
	glutCreateWindow("5α / Κεφάλαιο 5ο - Μετασχηματισμοί και Χρονόμετρα");
	initRendering(); //Εκκίνηση rendering
	
	//Εκκίνηση διαχειριστών συναρτήσεων (handler functions)
	// για σχεδίαση, πίεση κουμπιών και αλλαγή μεγέθους παραθύρων
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutMainLoop(); //Εκκίνηση της λούπας main. Δεν επιστρέφει κάτι
	return 0; //Η γραμμή αυτή δεν εκτελείται ποτέ
}

/* Το πρόγραμμα βασίζεται στο αρχείο "Basic Shapes" lesson που παρουσιάζεται στο
 * www.videotutorialsrock.com
 */








