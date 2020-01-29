//
//  Airbase.cpp
//  AssRedoneInC++
//
//  Created by Dane Malenfant on 2020-01-28.
//  Copyright © 2020 Dane Malenfant. All rights reserved.
//

#include "Airbase.hpp"
#include <iostream>
#include <regex>

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
    

    
};
