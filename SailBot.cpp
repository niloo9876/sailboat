#include <iostream>
#include <cmath>

float BoundTo180(float angle){
    if(angle<-180)
        BoundTo180(angle+360);
    else if(angle>=180)
        BoundTo180(angle-360);
    else
        return angle;
}

bool IsAngleBetween(float first_angle, float middle_angle, float second_angle){
    return (difference(first_angle,middle_angle) + difference(second_angle,middle_angle) == difference(first_angle,second_angle));
}

float difference(float angle1, float angle2){
    if(abs(angle1-angle2)>180)
        return 360 - abs(angle1-angle2) ;
    else
        return abs(angle1-angle2);
}


