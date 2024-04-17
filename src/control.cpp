#include <iostream>

#define MAX_MOTOR_POWER 255
#define NEGATIVE_MAX_MOTOR_POWER -255
#define MIN_MOTOR_POWER 0

class Car
{
private:
    void set_motors(int value)
    {
        set_motor_left(value);
        set_motor_right(value);
    }

    void set_motor_left(int value)
    {
        // Probably set_gpio(16, HIGH) or set_pwm(16, 255)
        std::cout << "Set left motor to: " << value << std::endl;
    }

    void set_motor_right(int value)
    {
        std::cout << "Set right motor to: " << value << std::endl;
    }

public:
    void forward()
    {
        set_motors(MAX_MOTOR_POWER);
    }
    void backwards()
    {
        set_motors(NEGATIVE_MAX_MOTOR_POWER);
    }
    void left()
    {
        set_motor_left(MAX_MOTOR_POWER);
        set_motor_right(MIN_MOTOR_POWER);
    }
    void right()
    {
        set_motor_right(MAX_MOTOR_POWER);
        set_motor_left(MIN_MOTOR_POWER);
    }
};