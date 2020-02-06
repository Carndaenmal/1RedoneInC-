//
//  Room.cpp
//  AssRedoneInC++
//
//  Created by Dane Malenfant on 2020-02-05.
//  Copyright © 2020 Dane Malenfant. All rights reserved.
//

#include "Room.hpp"
#include <string.h>
#include <iostream>

class Room{

private:
    std::string roomType; double roomPrice; bool roomVac;

public:
    Room(std::string type){
        roomType = type;
        
        if(roomType.compare("single") == 0){
            roomPrice = 5.00;  roomVac = true;
            
        }else if(roomType.compare("double") == 0){
            roomPrice = 10.00;  roomVac = true;
            
        }else if(roomType.compare("queen") == 0){
            roomPrice = 20.00;  roomVac = true;
            
        }else if(roomType.compare("king") == 0){
            roomPrice = 40.00;  roomVac = true;
            
        } else {
            
            std::cout << "\nNOT A ROOM TYPE\n"; exit(2);
           
            
        }
        
    };
    
};
