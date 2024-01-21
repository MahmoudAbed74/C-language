

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int row )
{
    COORD coord;
    coord.X = column;
    coord.Y = row;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
int main()
{

    int size =3;
    int column;
    int row;


    row=1;
    column=size/2+1;

    for(int number=1;number<=size*size;number++)
    {
        gotoxy(column*3,row*3);
        printf("%i",number);
        //check and update coordinates before increment
        if(number%size!=0) //Reminder Exists
        {
            row--;
            column--;
            if(row<1){row=size;}
            if(column<1){column=size;}
        }
        else
        {
            row++;

        }
    }

    return 0;
}
