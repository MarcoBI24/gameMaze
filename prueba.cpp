#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define FIL 10
#define COL 10

char laberinto[FIL][COL];

void generarLaberinto()
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<FIL;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(rand()%100<30)
                laberinto[i][j]='*';
            else
                laberinto[i][j]=' ';
        }
    }
}

void mostrarLaberinto()
{
    int i,j;
    for(i=0;i<FIL;i++)
    {
        for(j=0;j<COL;j++)
        {
            cout<<laberinto[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool resolverLaberinto(int x,int y)
{
    if(x==FIL-1 && y==COL-1)
    {
        laberinto[x][y]='S';
        return true;
    }
    
    if(laberinto[x][y]==' ' || laberinto[x][y]=='E')
    {
        laberinto[x][y]='.';
        
        if(x>0 && resolverLaberinto(x-1,y))
            return true;
        
        if(y>0 && resolverLaberinto(x,y-1))
            return true;
        
        if(x<FIL-1 && resolverLaberinto(x+1,y))
            return true;
        
        if(y<COL-1 && resolverLaberinto(x,y+1))
            return true;
        
        laberinto[x][y]=' ';
        
        return false;
        
    }
    
    else
       return false; 
}

int main()
{
   generarLaberinto();
   laberinto[0][0]='E';
   cout<<"Laberinto generado:"<<endl;
   mostrarLaberinto();
   cout<<endl;
   
   if(resolverLaberinto(0,0))
   {
       cout<<"Solucion encontrada:"<<endl;
       mostrarLaberinto();
       cout<<endl; 
   }
   
   else
      cout<<"No hay solucion"<<endl; 
   
   
}