// Function template maximum header.
template<typename T> // or template<class T> 
double parkingCharge (T time){
    double charge {2.0};

    if(time < 3.0){
        return charge;
    } else {
        time -= 3.0; 
        charge += (time * 0.50);
        if(charge > 10.0){
            charge = 10.0;
        }
        return charge;
    }
}