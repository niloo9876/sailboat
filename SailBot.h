//  SailBot.h
//  Header file for sailbot.cpp
//  Will determine if a given angle is between 2 angles
//  Created by Niloofar Gharavi on 2018-09-12.
//

#ifndef sailbot_h
#define sailbot_h

/**
 * Bounds the provided angle between [-180, 180) degrees.
 * Ex. 360 becomes 0, 270 becomes -90, -450 becomes -90.
 * @param angle Input angle in degrees.
 * @return The bounded angle in degrees.
 */
float BoundTo180(float angle);
/**
 * Determines whether |middle_angle| is in the acute angle between the other two
 bounding angles.
 * Note: Input angles are bounded to 180 for safety.
 * Ex. -180 is between -90 and 110 but not between -90 and 80.
 * @param first_angle First angle in degrees.
 * @param middle_angle Middle angle in degrees.
 * @param second_angle Second angle in degrees.
 * @return Whether |middle_angle| is between |first_angle| and |second_angle|
 (exclusive).
 */
bool IsAngleBetween(float first_angle, float middle_angle, float second_angle);

/**
 * Calculated the angle between first angle and second angle
 * This is a helper unction for IsAngleBetween
 * @param angle1 First angle in degrees
 * @param angle2 Second angle in degrees
 * @return the angle (in degrees) between 2 angles
 */
float difference(float angle1, float angle2);


#endif /* IsAngleBetween_h */
