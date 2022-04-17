#include "character.h"

character::character(int helth, QString NAME,float mvmt_spd, bool alive, int Facer, int Rowd, int Cold)
{
    health=helth;
    name=NAME;
    movement_speed=mvmt_spd;
    is_alive=alive;
    face=Facer;
    row=Rowd;
    col=Cold;
}


void character::shoot()
{

}





// set it to virtual so we will define it again in derived classes.
//******* I will do another public slots in derived classes for up down left right buttons, which will relocate the player using its array and pixmap
void character::keyPressEvent(QKeyEvent* event)
{
    // if character manually shoots
    if(event->key()==Qt::Key_Space)
    {
        projectile proj;
        while(proj.Location_Check()==false)
        {
            proj.movement();
        }

    }
}
