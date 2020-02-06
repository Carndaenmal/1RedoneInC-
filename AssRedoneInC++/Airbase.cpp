//
//  Airbase.cpp
//  AssRedoneInC++
//
//  Created by Dane Malenfant on 2020-01-28.
//  Copyright © 2020 Dane Malenfant. All rights reserved.
//

#include "Airbase.hpp"
#include <iostream>
#include <cmath>

class Airbase{
private:
    int Xcoor, Ycoor, Fee;

public:
    Airbase(int Xpos, int Ypos, int fee){
        Xcoor = Xpos; Ycoor = Ypos; Fee = fee;
        
    }
    
    int getFee(){
        return Xcoor;
        
    }
    
    static double getDist(Airbase x, Airbase y){
        
        int x1 = x.Xcoor, y1 = y.Ycoor, x2 = y.Xcoor, y2 = y.Ycoor;
        
        return hypot(x2 - x1, y2 - y1);
        
    }

    
};
