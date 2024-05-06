#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle(); 
        Circle(float r); 
        ~Circle(); 

        void setRadius(float r);
        float getRadius() const;

        friend class Area; 
    };
}

#endif 
