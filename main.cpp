#include <string>
#include <iostream>

class RationalFractoin{
    public:

    int m_numerator;
    int m_denaminator;

    RationalFractoin(const int &numerator, const int &denaminator)
    {
        m_numerator = numerator;
        m_denaminator = denaminator;

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
    RationalFractoin b(5,8);

    RationalFractoin c = a*b;

    std::cout << c << std::endl;
    std::cout << a/b;
    return 0;
}
