#include <iostream>
#include <cmath>
class Turret {
    private:
        float xDistance; // magnitude of X
        float yDistance; // magnitude of Y
        float t; // Time to reach distance
        float yVelocity; // Calculated Y-Velocity
        float xVelocity;  // Calculated X-Velocity
    public:
        Turret(float xDistance, float yDistance, float t){
            this -> xDistance = xDistance;
            this -> yDistance = yDistance;
            this -> t = t;
            yVelocity = sqrt(19.6*yDistance);
            xVelocity = xDistance/t;
        }
        float resultantVelocity(){
            return atan(yVelocity/xVelocity);
        }
};
int main() {
    Turret Lucky{10, 10, 10};
    std::cout << Lucky.resultantVelocity();
    return 0;
}
