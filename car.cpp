#include "car.h"
struct CarImplementation {
Type type;
Color color;
double current_speed;
double fill_level;
double acceleration_rate;
bool is_rented;
};

#define CARS_COUNT 6

static struct CarImplementation a1
{
  AIXAM, RED,0,16.0, 0.0, false
};
static struct CarImplementation m1
{
  FIAT_MULTIPLA,GREEN, 0,65.0, 0.0, false
};
static struct CarImplementation m2
{
  FIAT_MULTIPLA,BLUE,0, 65.00,0.0, false
};
static struct CarImplementation m3
{
  FIAT_MULTIPLA,ORANGE,0, 65.00,0.0, false
};
static struct CarImplementation j1
{
  JEEP, SILVER,0,80.00, 0.0, false
};
static struct CarImplementation j2
{
  JEEP,BLACK, 0, 80.00,0.0, false
};

Car car_park[] = {&a1,&m1,&m2,&m3,&j1,&j2};

Car get_car(Type x)
{
  for (int i = 0; i < CARS_COUNT; i++) {
    if (car_park[i]->type == x && !car_park[i]->is_rented) {
      car_park[i]->is_rented = true;
      return car_park[i];
    }
  }
  return 0;
}
Type get_type(Car car)
{
return car->type;
}
Color get_color(Car car)
{
return car->color;
}
double get_fill_level(Car car)
{
  return car->fill_level;
}
double get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}
double get_speed(Car c)
{
  return c->current_speed;
}
void init()
{
  a1 =
  {
    AIXAM, RED,0,16.0, 0.0, false
  };
  m1 =
  {
    FIAT_MULTIPLA,GREEN, 0,65.0, 0.0, false
  };
  m2 =
  {
    FIAT_MULTIPLA,BLUE,0, 65.00,0.0, false
  };
  m3 =
  {
    FIAT_MULTIPLA,ORANGE,0, 65.00,0.0, false
  };
  j1 =
  {
    JEEP, SILVER,0,80.00, 0.0, false
  };
  j2 =
  {
    JEEP,BLACK, 0, 80.00,0.0, false
  };

}
void set_acceleration_rate(Car c, double x)
{
  if (c->type == AIXAM && x > 1)
  {
    c->acceleration_rate = 1;
  }
  else if(c->type == FIAT_MULTIPLA && x >2.26)
  {
    c->acceleration_rate = 2.26;
  }
  else if (c->type == JEEP && x >3.14)
  {
    c->acceleration_rate = 3.14;
  }
  else c->acceleration_rate =x;
}
void accelerate(Car c)
{
  c->acceleration_rate += c->acceleration_rate;
}
