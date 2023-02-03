#include <string>
#include <iostream>

class RationalFractoin{
    public:

    double m_numerator;
    double m_denaminator;

    RationalFractoin(const int &numerator, const int &denaminator)
    {
        m_numerator = numerator;
        m_denaminator = denaminator;

    }

    float ToFloat(){

        return m_numerator / m_denaminator;
    }

    int ToInt(){

        return (int)ToFloat();
    }

    RationalFractoin operator *(const RationalFractoin &obj){

        return RationalFractoin(m_numerator * obj.m_numerator, m_denaminator * obj.m_denaminator);
    }

    RationalFractoin operator /(const RationalFractoin &obj){

        return RationalFractoin(m_numerator*obj.m_denaminator, m_denaminator*obj.m_numerator);
    }

    friend std::ostream& operator << (std::ostream &out, const RationalFractoin &f);

};

std::ostream& operator << (std::ostream &out, const RationalFractoin &f){

    out << f.m_numerator << "/" << f.m_denaminator;
    return out;
}

int main(){

    RationalFractoin a(3,4);
    RationalFractoin b(9,8);

    std::cout << "a = " << a << ", " << "b = " << b << std::endl;

    std::cout << "Convert a To Decimal: " << a.ToFloat() << std::endl;

    std::cout << "Convert b To Intager: " << b.ToInt() << std::endl;

    std::cout << "a * b = " << a*b << std::endl;

    std::cout << "a / b = " << a/b << std::endl;

    return 0;
}
