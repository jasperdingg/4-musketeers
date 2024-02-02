#include "subsystems/chassis.hpp"
using namespace okapi;
std::shared_ptr<OdomChassisController> drive = ChassisControllerBuilder()
    .withMotors({leftFront,leftMiddle,leftBack},{rightFront,rightMiddle,rightBack}) //defines the left and right side of the drive
    // .withDimensions(  AbstractMotor::gearset::blue, {{3.25_in, 15_in}, okapi::imev5BlueTPR*  5./3.})
    .withDimensions(AbstractMotor::gearset::blue, {{3.25_in, 14_in}, okapi::imev5BlueTPR*  36./60.})
    .withOdometry() //specifies the tracking wheels dimentions
    .buildOdometry();


const int8_t leftFront = 1;
const int8_t leftBack = 2;
const int8_t rightFront =3;

//you are missing rightBack here -Zoe :) 

