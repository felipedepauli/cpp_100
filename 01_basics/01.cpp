#include <iostream>

class MinhaClasse {
    int internalNumber = 0;

public:
    MinhaClasse& slkinho(int number) {
        std::cout << number << std::endl;
        internalNumber = number;
        return *this;   // Named Attribute
                        // Meta  Annotation
    }
    void oiew(int number) {
        std::cout << internalNumber + number << std::endl;
    }

};

int main(int argc, char* argv[]) {

    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "---------------- THE SYSTEM - THE EVIL!!! ------------------" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "E aí, paizão!? Tamo na área! Chega mais que vamos sorver esta porra finalmente! Não vem de 5a série não, seu mala! Toma tento, doidão!! É conhecimento, pae!" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    std::cout << "Type" << std::endl;

    int number1 = 15;           // Decimal
    int number2 = 017;          // Octal
    int number3 = 0x0f;         // Hexadecimal
    int number4 = 0b00001111;   // Binary (from C++14)

    std::cout << "This is a  Decimal     = " << number1 << std::endl;
    std::cout << "This is an Octal       = " << number2 << std::endl;
    std::cout << "This is a  Hexadecimal = " << number3 << std::endl;
    std::cout << "This is a  Binary      = " << number4 << std::endl;

    MinhaClasse mc;
    mc.slkinho(1).oiew(2);


    return 0;
}