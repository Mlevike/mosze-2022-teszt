#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS helyett itt NELEMENTS szerepel
    std::cout << '1-100 ertekek duplazasa' //String jelölő helyett karakterjelölő van, illetve hiányzik a sor végi lezárás
    for (int i = 0;) //Hiányzik a  kifejezés a for ciklusból
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //Hiányzik a sor végi lezárás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //; jel helyett , jel lett írva a for ciklusnál
    {
        atlag += b[i] //Hiányzik a sor végi lezárás
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
