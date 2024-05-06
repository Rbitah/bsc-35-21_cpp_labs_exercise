#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length; 
    float width;  
public:
    
    Rectangle();

    void setLength(float length);

    void setWidth(float width);

    float getLength() const;

    float getWidth() const;

    float calculateArea() const;
};

#endif
