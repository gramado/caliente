// Suporte a status bar.


#include "gramcode.h"


/* statusInitializeStatusBar: */

void statusInitializeStatusBar (void)
{

    int i=0;

    unsigned long OldX=0; 
    unsigned long OldY=0;


    // #todo
    // Get the device's width and height.

    // Save.
    
    OldX = gde_get_cursor_x();
    OldY = gde_get_cursor_y();



    gde_set_cursor ( 0, (600/8) -1 );

    for ( i=0; i < ((800/8)-1); i++ )
    {
        printf (" ");
    };

    gde_set_cursor ( 8, (600/8) -1 );
    printf("|# Status Bar offset 8.");

    gde_set_cursor ( 44, (600/8) -1 );
    printf("|# Status Bar  offset 44.");

    gde_set_cursor (OldX,OldY);

    //#todo: We need this.
    //fflush(stdout);
}


void update_statuts_bar ( char *string1, char *string2 )
{

    int i=0;

    unsigned long OldX=0; 
    unsigned long OldY=0;


    // Save.

    OldX = gde_get_cursor_x();
    OldY = gde_get_cursor_y();


    gde_set_cursor ( 0, (600/8) -1 );

    for ( i=0; i < ((800/8)-1); i++ )
    {
        printf (" ");
    };


    gde_set_cursor( 8, (600/8) -1 );
    printf(string1);

    gde_set_cursor( 44, (600/8) -1 );
    printf(string2);

    gde_set_cursor (OldX,OldY);

    //#todo
    //fflush(stdout);
}



