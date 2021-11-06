class Car{
    public:
        explicit Car(int, double);
        void setCarNumber(int);
        int getCarNumber();
        void setParkingTime(double);
        double getParkingTime();
        double getParkingCharge();
    private: 
        int carNumber;
        double parkingTime;
};