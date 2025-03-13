//Przyjmij cztery wartości zmiennoprzecinkowe oznaczające początek i koniec dwóch domkniętych przedziałów. 
//Wyświetl intersection, jeżeli te przedziały mają część wspólną lub no intersection w przeciwnym wypadku.


#include <iostream>

int main() {
    float a,b,c,d;
    std::cin >> a >> b >> c >> d;

    if((a <= c && b >= c) || c <= a && a <= d )
        std::cout << "Intersection" << std::endl;
    else
        std::cout << "No intersection" << std::endl;

    return 0;
}
