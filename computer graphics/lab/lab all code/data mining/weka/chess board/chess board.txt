
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
int i=1,x=0,y=0;

for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (1.0, 1.0, 1.0);
   }else{
       glColor3f (0.0, 0.0, 0.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 0, 0.0);
glVertex3f (x+10, 0, 0.0);
glVertex3f (x+10, 10, 0.0);
glVertex3f (x, 10, 0.0);
glEnd();

    x += 10;
}

x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (0.0, 0.0, 0.0);
   }else{
       glColor3f (1.0, 1.0, 1.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 10, 0.0);
glVertex3f (x+10, 10, 0.0);
glVertex3f (x+10, 20, 0.0);
glVertex3f (x, 20, 0.0);
glEnd();

    x += 10;
}


x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (1.0, 1.0, 1.0);
   }else{
       glColor3f (0.0, 0.0, 0.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 20, 0.0);
glVertex3f (x+10, 20, 0.0);
glVertex3f (x+10, 30, 0.0);
glVertex3f (x, 30, 0.0);
glEnd();

    x += 10;
}



x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (0.0, 0.0, 0.0);
   }else{
       glColor3f (1.0, 1.0, 1.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 30, 0.0);
glVertex3f (x+10, 30, 0.0);
glVertex3f (x+10, 40, 0.0);
glVertex3f (x, 40, 0.0);
glEnd();

    x += 10;
}


x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (1.0, 1.0, 1.0);
   }else{
       glColor3f (0.0, 0.0, 0.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 40, 0.0);
glVertex3f (x+10, 40, 0.0);
glVertex3f (x+10, 50, 0.0);
glVertex3f (x, 50, 0.0);
glEnd();

    x += 10;
}


x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (0.0, 0.0, 0.0);
   }else{
       glColor3f (1.0, 1.0, 1.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 50, 0.0);
glVertex3f (x+10, 50, 0.0);
glVertex3f (x+10, 60, 0.0);
glVertex3f (x, 60, 0.0);
glEnd();

    x += 10;
}



x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (1.0, 1.0, 1.0);
   }else{
       glColor3f (0.0, 0.0, 0.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 60, 0.0);
glVertex3f (x+10, 60, 0.0);
glVertex3f (x+10, 70, 0.0);
glVertex3f (x, 70, 0.0);
glEnd();

    x += 10;
}

x = 0;
for(i=1;i<=8;i++)
{
   if(i%2 == 0)
   {
       glColor3f (0.0, 0.0, 0.0);
   }else{
       glColor3f (1.0, 1.0, 1.0);
   }

glBegin(GL_POLYGON);
glVertex3f (x, 70, 0.0);
glVertex3f (x+10, 70, 0.0);
glVertex3f (x+10, 80, 0.0);
glVertex3f (x, 80, 0.0);
glEnd();

    x += 10;
}
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 80.0, 0.0, 80.0, -80.0, 80.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hridoy");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

