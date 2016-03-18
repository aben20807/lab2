#include"Bmi.h"
int main()
{
    ifstream inFile("file.in",ios::in);
    if(!inFile)
    {
        cerr<<"Failed opening inFile.";
        exit(1);
    }
    ofstream outFile("file.out",ios::out);
    if(!outFile)
    {
        cerr<<"Failed opening outFile.";
        exit(1);
    }
    double h,w;
    while(inFile>>h>>w)
    {
        if(h==0&&w==0)
        {
            break;
        }
        else
        {
            Bmi bmi(h,w);//(h,w);
            //#define DEBUG_1
            #ifdef DEBUG_1
                cout<<bmi.getHeight()<<" ";
                cout<<bmi.getWeight()<<" ";
                
                cout<<bmi.getBmi()<<endl;
            #endif
            outFile<<bmi.getBmi()<<'\t'<<bmi.getCategory(bmi.getBmi())<<endl;
        }
    }
    return 0;
}