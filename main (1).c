#include <kipr/botball.h>
int main()
{
    enable_servos();
    set_servo_position(0, 1500);
    msleep(500);
    set_servo_position(1, 2000); msleep(500);
    motor(1, -100);
    motor(0, -100);
    msleep(1700);
    motor(0, -100);
    motor(1, 100);
    msleep(600);
    motor(1, -100);
    motor(0, -100);
    msleep(3500);
    ao();
    motor(0, -100);
    motor(1, 100);
    msleep(550);
    ao();
    motor(0, -100);
    motor(1, -100);
    msleep(800);
    ao();
    motor(0, 100);
    motor(1, -100);
    msleep(600);
    ao();
    motor(0, -100);
    motor(1, -100);
    msleep(1700);
    ao();
    set_servo_position(1, 1300);
    msleep(500);
    set_servo_position(0, 900);
    motor(0, 100);
    motor(1, -100);
    msleep(400);
    motor(0, -100);
    motor(1, -100);
    msleep(900);
    ao(); 
    set_servo_position(0, 1500);
    msleep(500);
    set_servo_position(1, 2000); msleep(500);
    return 0;
}