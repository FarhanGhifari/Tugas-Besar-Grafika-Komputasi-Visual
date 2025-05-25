// building.cpp - Implementasi kelas bangunan

#include "building.h"

Building::Building(const Position& _pos, float _w, float _h, float _d, const Color& _color)
    : pos(_pos), width(_w), height(_h), depth(_d), color(_color) {}

void Building::draw() {
    glPushMatrix();
    glTranslatef(pos.x, pos.y, pos.z);
    
    glColor3f(color.r, color.g, color.b);
    
    glPushMatrix();
    glScalef(width, height, depth);
    glutSolidCube(1.0);
    glPopMatrix();
    
    // Jendela
    glColor3f(0.0f, 0.0f, 0.0f);
    float windowSize = 0.2f;
    float windowSpacing = 0.4f;
    
    // Jendela depan
    for (float y = -height/2 + windowSize; y < height/2; y += windowSpacing) {
        for (float x = -width/2 + windowSize; x < width/2; x += windowSpacing) {
            glPushMatrix();
            glTranslatef(x, y, depth/2 + 0.01f);
            glScalef(windowSize, windowSize, 0.01f);
            glutSolidCube(1.0);
            glPopMatrix();
        }
    }
    
    // Jendela belakang
    for (float y = -height/2 + windowSize; y < height/2; y += windowSpacing) {
        for (float x = -width/2 + windowSize; x < width/2; x += windowSpacing) {
            glPushMatrix();
            glTranslatef(x, y, -depth/2 - 0.01f);
            glScalef(windowSize, windowSize, 0.01f);
            glutSolidCube(1.0);
            glPopMatrix();
        }
    }
    
    glPopMatrix();
}
