#include <GL/gl.h>
#include <GL/glut.h>


float x,y,x1,y1,x2,y2,dx,dy,step,m,prevX,prevY;
    int i;


void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
   int found = 0;

   if(x1 > x2)
   {
      dx=x1-x2;
      dy=y1-y2;
      found = 1;
   }else{
      dx=x2-x1;
      dy=y2-y1;
      found = 0;
   }

   if(found == 1)
   {
        if(dy>dx)
        {
            step=dx;
        }
        else{
            step=dy;
        }
   }else{
         if(dy<dx)
        {
            step=dx;
        }
        else{
            step=dy;
        }

   }

    x=x1;
    y=y1;
    prevY = y1;
    prevX = x1;

    m = dy/dx;

    i=0;


    while(i<=step)
    {
        if(found == 1)
        {
           glColor3f (1.0, 0.0, 0.0);
        }else{
           glColor3f (1.0, 1.0, 1.0);
        }
        glBegin(GL_POINTS);
         glVertex3f (x, y, 0);
        glEnd();

        printf("%f and %f\n",x,y);

        if(found == 1)
        {
            x = prevX-(1/m);
            y = prevY-m;

            if(x < x2)
            {
                break;
            }

        }else{
           x = (1/m)+prevX;
           y = m+prevY;

           if(y > y2)
            {
                break;
            }
        }

        prevY = y;
        prevX = x;

        i=i+1;

    }


glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 100.0, -100.0, 100.0);
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
    printf("Enter x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter x2 and y2: ");
    scanf("%f%f",&x2,&y2);


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

