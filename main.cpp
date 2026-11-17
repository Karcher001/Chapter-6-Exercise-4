#include <iostream>
using namespace std;

// Function to calculate kinetic energy
double kineticEnergy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

int main() {
    double mass, velocity;

    cout << "Enter the object's mass in kilograms: ";
    cin >> mass;

    cout << "Enter the object's velocity in meters per second: ";
    cin >> velocity;

    double energy = kineticEnergy(mass, velocity);

    cout << "The kinetic energy is: "
         << energy << " joules" << endl;

    return 0;
}