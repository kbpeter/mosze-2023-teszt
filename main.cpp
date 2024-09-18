#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //nem egyező változó név
    std::cout << '1-100 ertekek duplazasa' //nincs ;
    for (int i = 0; i < N_ELEMENTS; i++) //nincs befjezve a for header
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    } //nincs ;
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) // , = ;
    {
        atlag += b[i];
    } //nincs ;
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
