#include"Bmi.h"
Bmi::Bmi()
{
    setHeight(0.0);
    setWeight(0.0);
}
Bmi::Bmi(double height,double weight)
{
    setHeight(height);
    setWeight(weight);
}
void Bmi::setHeight(double height)
{
    _height=height;
}
double Bmi::getHeight()
{
    return _height;
}
void Bmi::setWeight(double weight)
{
    _weight=weight;
}
double Bmi::getWeight()
{
    return _weight;
}
double Bmi::getBmi()
{
    double bmi,tmp;
    bmi=_weight/((_height/100)*(_height/100));
    //round off to the 2nd decimal place(四捨五入到小數點第二位)
    tmp=(int)(bmi*1000)%10;
    bmi=((int)(bmi*1000)-tmp)/1000;
    if(tmp>=5)
        return bmi+0.01;
    else
        return bmi;
}
string Bmi::getCategory(double bmi)
{
    if(bmi<15.0)
        return "Very severely underweight";
    else if(bmi<16.0)
        return "Severely underweight";
    else if(bmi<18.5)
        return "Underweight";
    else if(bmi<25.0)
        return "Normal";
    else if(bmi<30.0)
        return "Overweight";
    else if(bmi<35.0)
        return "Obese Class I (Moderately obese)";
    else if(bmi<40.0)
        return "Obese Class II (Severely obese)";
    else
        return "Obese Class III (Very severely obese)";
}
