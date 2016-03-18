#include<iostream>
#include<fstream>
#include <cstdlib>
using namespace std;
class Bmi
{
    public:
        Bmi();//defult constructor
        Bmi(double,double);

        void setHeight(double);
        double getHeight();
        void setWeight(double);
        double getWeight();

        double getBmi();
        string getCategory(double);
    private:
        double _height;
        double _weight;
};
