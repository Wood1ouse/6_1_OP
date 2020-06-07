#include <iostream>

class GeometricalFigures
{
protected:
    double a, b, c, d, h;
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;

};
class Quadrate : public GeometricalFigures
{
public:
    Quadrate(double a)
    {
        this->a = a;
    }
    double square() override
    {
        return a * a;
    }
    double perimeter() override
    {
        return 4 * a;
    }


};
class Rhombus : public GeometricalFigures
{
public:
    Rhombus(double a, double h)
    {
        this->a = a;
        this->h = h;
    }
    Rhombus(double a)
    {
        this->a = a;
    }
    double square() override
    {
        return a * h;
    }
    double perimeter() override
    {
        return 4 * a;
    }


};
class Trapeze : public GeometricalFigures
{
public:
    Trapeze(double a, double b, double h)
    {
        this->a = a;
        this->b = b;
        this->h = h;
    }
    Trapeze(double a, double b, double c, double d)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }
    double square() override
    {
        return (a + b) / 2 * h;
    }
    double perimeter() override
    {
        return a + b + c + d;
    }


};

int main()
{
    int v = 1;
    char x, y;

    while (v == 1)
    {
        std::cout << "Select Figure: \n-> Q Quadrate\n-> R Rhombus\n-> T Trapeze\n\n->";
        std::cin >> x;

        switch (x)
        {
        case 'Q':
        {
            std::cout << "\nWhat do you want to calculate?\n-> P Perimeter\n-> S Square\n\n->";
            std::cin >> y;
            if (y == 'P')
            {
                double a;
                std::cout << "Enter the length of the side: ";
                std::cin >> a;
                Quadrate q(a);
                GeometricalFigures* pq = &q;
                std::cout << "Your Perimeter is " << pq->perimeter() << '\n';
                std::cout << "--------------------";
            }
            else if (y == 'S')
            {
                double a;
                std::cout << "Enter the length of the side: ";
                std::cin >> a;
                Quadrate q(a);
                GeometricalFigures* pq = &q;
                std::cout << "Your Square is " << pq->square() << '\n';
                std::cout << "--------------------";
            }
            break;
        }
        case 'R':
        {

            std::cout << "\nWhat do you want to calculate?\n-> P Perimeter\n-> S Square\n\n->";
            std::cin >> y;
            if (y == 'P')
            {
                double a;
                std::cout << "Enter the length of the side: ";
                std::cin >> a;
                Rhombus r(a);
                GeometricalFigures* pr = &r;
                std::cout << "Your Perimeter is " << pr->perimeter() << '\n';
                std::cout << "--------------------";
            }
            else if (y == 'S')
            {
                double a, h;
                std::cout << "Enter the length of the side: ";
                std::cin >> a;
                std::cout << "Enter the length of the height to this side: ";
                std::cin >> h;
                Rhombus r(a, h);
                GeometricalFigures* pr = &r;
                std::cout << "Your Square is " << pr->square() << '\n';
                std::cout << "--------------------";
            }
            break;
        }
        case 'T':
        {
            std::cout << "\nWhat do you want to calculate?\n-> P Perimeter\n-> S Square\n\n->";
            std::cin >> y;
            if (y == 'P')
            {
                double a, b, c, d;
                std::cout << "Enter the length of the first side: ";
                std::cin >> a;
                std::cout << "Enter the length of the second side: ";
                std::cin >> b;
                std::cout << "Enter the length of the third side: ";
                std::cin >> c;
                std::cout << "Enter the length of the fourth side: ";
                std::cin >> d;
                Trapeze t(a, b, c, d);
                GeometricalFigures* pt = &t;
                std::cout << "Your Perimeter is " << pt->perimeter() << '\n';
                std::cout << "--------------------";
            }
            else if (y == 'S')
            {
                double a, b, h;
                std::cout << "Enter the length of the first side: ";
                std::cin >> a;
                std::cout << "Enter the length of the second side: ";
                std::cin >> b;
                std::cout << "Enter the length of the height to thе first side: ";
                std::cin >> h;
                Trapeze t(a, b, h);
                GeometricalFigures* pt = &t;
                std::cout << "Your Square is " << pt->square() << '\n';
                std::cout << "--------------------";
            }

            break;
        }
        }
        std::cout << "\nDo you want to continue?\n-> 1 - YES\n";
        std::cin >> v;
    }

}

