#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
int n,x_position[10],y_position[10];
using namespace std;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    for(int i=0;i<n;i++)
    {
        glVertex2f(x_position[i],y_position[i]);
    }
    glEnd();
    glFlush();
}
/*void cycle()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_POLYGON);

    glEnd();

    glTranslated(0.0,0.0,0.0);
}*/
void key(unsigned char key, int x, int y)
{

    switch(key){

                case GLUT_KEY_LEFT:
                                    for(int i=0;i<n;i++)
                                    {
                                        x_position[i]-=3;
                                    }
                                     break;
                case GLUT_KEY_RIGHT:  for(int i=0;i<n;i++)
                                       {
                                         x_position[i]+=3;
                                       }
                                        break;
                case GLUT_KEY_DOWN:
                                    for(int i=0;i<n;i++)
                                       {
                                         y_position[i]-=3;
                                       }
                                        break;
                case GLUT_KEY_UP:
                                    for (int i=0;i<n;i++)
                                    {
                                        y_position[i]+=3;
                                    }
                                    break;
    }
}
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}

void reshape(int w,int h)
{
   glViewport(0,0,w,h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-20,20,-20,20);
   glMatrixMode(GL_MODELVIEW);

}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);
    cout<<"Enter the number of vertex of polygon you want to create\t";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"Enter x_position "<<i+1<<"\t";
    cin>>x_position[i];
    cout<<"Enter y_position "<<i+1<<"\t";
    cin>>y_position[i];
    }
    glutCreateWindow("Shape");
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutReshapeFunc(reshape);
//    glutTimerFunc(0,timer,0);
    init();
    glutMainLoop();


}
