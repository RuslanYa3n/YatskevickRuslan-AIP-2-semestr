#include "Lib(pict).h"



void drawKosa(float x, float y, float a) {

    glPushMatrix();
    glScalef(0.15, 0.15, 1);
    glRotatef(0, 0, 0, 0);
    glTranslatef(x, y, 0);

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.9);
    glVertex2f(-0.70193, 0.11687);
    glVertex2f(-0.58869, 0.29566);
    glVertex2f(-0.12385, 0.46253);
    glVertex2f(-0.12385, 0.27182);

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.9);
    glVertex2f(-0.12385, 0.27182);
    glVertex2f(-0.23,0.24);
    glVertex2f(0.1806, -0.56319);
    glVertex2f(0.12271,-0.5246);
    glEnd();
    glPopMatrix();
}

void drawRat(float x,float y) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(0.2, 0.2, 1);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(-0.90826, 0.50036);
    glVertex2f(-0.90291, 0.31306);
    glVertex2f(-0.5069, 0.30236);
    glVertex2f(-0.5, 0.5);

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.5);
    glVertex2f(-0.90826, 0.50036);
    glVertex2f(-0.90291, 0.31306);
    glVertex2f(-1.08485, 0.31306);
    glVertex2f(-1.0795, 0.50571);

    glEnd();
    glPopMatrix();

}

void drawCSENA() {

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.5, 1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glEnd();
    glPopMatrix();
}



void drawExcit(float x, float y) {
    glPushMatrix();
    glScalef(0.35, 0.35, 1);
    glTranslatef(1.9, 0.1, 0);
    glColor3f(0, 0.9, 0);

    glBegin(GL_QUADS);
    glVertex2f(-0.8092, 1.01677);
    glVertex2f(-0.80324, 0.11091);
    glVertex2f(-0.40991, 0.11091);
    glVertex2f(-0.42183, 1.00485);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.48444,0.58755);
    glVertex2f(-0.80324, 0.11091);
    glVertex2f(-0.40991, 0.11091);
    glEnd();

    
    glPopMatrix();

}

void drawViktory() {
    glPushMatrix();
    glColor3f(0, 1, 0);
    glTranslatef(1.37, -0.9, 0);
    glScalef(2, 2, 1);

    glBegin(GL_QUADS); 
    glVertex2f(-0.90291, 0.71442);
    glVertex2f(-0.4962, 0.70907);
    glVertex2f(-0.49085, 0.31306);
    glVertex2f(-0.89755, 0.30771);

    glBegin(GL_QUADS);
    glColor3f(1.5, 2, 1);
    glVertex2f(-0.78679, 0.48986);
    glVertex2f(-0.61679, 0.48986);
    glVertex2f(-0.70859, 0.60206);
    glVertex2f(-0.70179, 0.42526);
    glEnd();

    glPopMatrix();
}

void drawWalls() {
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(1, .9);
    glVertex2f(1, -.9);
    glVertex2f(.9, -.9);
    glVertex2f(.9, .9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(-1, .9);
    glVertex2f(-1, -.9);
    glVertex2f(-.9, -.9);
    glVertex2f(-.9, .9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(-1, -1);
    glVertex2f(-1, -.9);
    glVertex2f(1, -.9);
    glVertex2f(1, -1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(-1, 1);
    glVertex2f(-1, .9);
    glVertex2f(1, .9);
    glVertex2f(1, 1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(-.6, 0.9);
    glVertex2f(-.6, -.5);
    glVertex2f(-.3, -.5);
    glVertex2f(-.3, .9);
    glEnd();

   

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(0, -.5);
    glVertex2f(0, -.2);
    glVertex2f(.9, -.2);
    glVertex2f(.9, -.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(0, -.2);
    glVertex2f(0, .6);
    glVertex2f(.3, .6);
    glVertex2f(.3, -.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, .2, .1);
    glVertex2f(.3, .6);
    glVertex2f(.7, .6);
    glVertex2f(.7, .4);
    glVertex2f(.3, .4);
    glEnd();

    

    glPopMatrix();
}