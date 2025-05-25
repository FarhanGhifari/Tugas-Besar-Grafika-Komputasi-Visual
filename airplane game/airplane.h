// airplane.h - Definisi kelas pesawat pemain

#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "common.h"

// Kelas untuk pesawat pemain
class Airplane {
public:
    Position pos;
    float rotationY;
    float speed;
    
    Airplane();
    
    // Menggambar pesawat
    void draw();
    
    // Pergerakan pesawat
    void moveForward();
    void turnLeft();
    void turnRight();
    void moveUp();
    void moveDown();
};

#endif // AIRPLANE_H
