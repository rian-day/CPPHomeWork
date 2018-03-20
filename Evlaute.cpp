//
// Created by 10513 on 2018/3/14.
//

#include "Evlaute.h"
using namespace std;

void Evlaute::evlaute(double a, double b, double c) {
    {
        double delta=b*b-4*a*c;
        if(delta<0)
            cout << "无根" << endl;
        else if(delta==0)
        {
            cout<<  -b/(2*a) << endl;
        }
        else
        {
            double x1=(-b+sqrt(delta))/(2*a);
            double x2=(-b-sqrt(delta))/(2*a);
            cout << x1 << " " << x2 << endl;
        }
    }
}