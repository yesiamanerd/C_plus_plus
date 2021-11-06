#include <iostream>
#include "parkingCharge.h"
#include "Car.h"

using namespace std;

Car::Car(int carNo, double parkTime)
    :carNumber(carNo), parkingTime(parkTime){

}

void Car::setCarNumber(int carNo){
    carNumber = carNo;
}
        
int Car::getCarNumber(){
    return carNumber;
}

void Car::setParkingTime(double parkTime){
    parkingTime = parkTime;
}

double Car::getParkingTime(){
    return parkingTime;
}

double Car::getParkingCharge(){
    return parkingCharge(parkingTime);
}