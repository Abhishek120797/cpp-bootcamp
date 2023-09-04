#include <iostream>
#include <cmath>

using namespace std;

#define h 6.62607015e-34 // planks constant  j/s
#define c 299792458      // speed of light in vacuum m/s

class Photon
{
protected:
    double wavelength; // wavelength of visible light nm
public:
    Photon() {}
    Photon(double x)
    {
        wavelength = x * 1e-9; // converting nm to m
    }
};

class Photon_Energy : public Photon
{
public:
    Photon_Energy(double x) : Photon(x) {}
    void calculate_photonEnergy()
    {
        cout << "Photon Energy = " << (h * c) / wavelength << " joules";
    }
};

int main()
{
    Photon_Energy p(10);
    p.calculate_photonEnergy();
    return 0;
}