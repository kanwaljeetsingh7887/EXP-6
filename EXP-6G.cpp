//KANWALJEET SINGH
//ENTC B2
//EXP 6G
//23070123124
#include <iostream>
int main() {
    int i = 1; 
    do {
        int j = 1;  
        do {
            std::cout << i * j << "\t";  
            ++j;  
        } while (j <= 10);

        std::cout << std::endl;  
        ++i;  
    } while (i <= 10);

    return 0;
}