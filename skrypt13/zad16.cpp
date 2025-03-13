/*
W języku C++ zdefiniuj typ wyliczeniowy, służący do przechowywania informacji o stanie połączenia internetowego, 
o trzech wartościach odpowiadających trzem stanom: połączenie nawiązane (connected), połączenie nienawiązane (disconnected) i 
połączenie w trakcie nawiązywania (connecting). Następnie zdefiniuj strukturę komputer przechowującą stan połączenia, 
IP podłączonego komputera (jako napis) oraz nazwę jego właściciela. Napisz funkcję w języku C++, która jako argument otrzymuje 
strukturę komputer i wyświetla na standardowym wyjściu jej zawartość w sposób przyjazny dla użytkownika.
 */

#include <iostream>
#include <cstring>

enum ConnectionStatus {
    connected,
    disconnected,
    connecting
};

struct Computer {
    ConnectionStatus status;
    char ip_address[16];
    char owner_name[100];
};

void print_computer_info(const Computer &computer) {
    std::cout << "Status polaczenia: ";
    switch(computer.status) {
        case connected:
            std::cout << "Polaczenie nawiazane\n"; break;
        case disconnected:
            std::cout << "Polaczenie przerwane\n"; break;
        case connecting:
            std::cout << "Polaczenie w trakcie nawiazywania\n"; break;
    }
    std::cout << "IP: " << computer.ip_address << std::endl;
    std::cout << "Owner: " << computer.owner_name << std::endl;
}

int main() {
    Computer computer;
    computer.status = connected;
    strcpy(computer.ip_address, "192.168.0.1");
    strcpy(computer.owner_name, "Jan Kowalski");
    print_computer_info(computer);
    return 0;
}