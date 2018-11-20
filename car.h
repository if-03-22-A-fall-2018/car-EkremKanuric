/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
typedef struct CarImplementation* Car;
enum Color{RED,GREEN,BLUE,SILVER,ORANGE,BLACK};
enum Type{AIXAM,FIAT_MULTIPLA,JEEP};
Car get_car(Type x);
Type get_type(Car x);
Color get_color(Car x);
double get_fill_level(Car x);
double get_acceleration_rate(Car x);
double get_speed(Car x);
void init();
void set_acceleration_rate(Car x, double d);
void accelerate(Car x);
#endif
