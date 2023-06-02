#ifndef ROTATABLE_H
#define ROTATABLE_H

class Rotatable {
    public:
        Rotatable();
        Rotatable(double);
        Rotatable(const Rotatable &);
        Rotatable(Rotatable &&);
        ~Rotatable();
        void setangle(double);
        double getangle() const;
        void operator=(const Rotatable &);
        void operator=(Rotatable &&);
    private:
        double * angle;
};

#endif // CIRCLE_H
