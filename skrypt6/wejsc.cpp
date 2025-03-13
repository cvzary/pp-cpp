/*Napisz funkcję rekurencyjną w języku C++, która dla otrzymanej w argumencie nieujemnej liczby całkowitej k 
oraz liczby rzeczywistej x zwraca wartość elementu o indeksie k ciągu zdefiniowanego w następujący sposób:*/

// T0(x) = 1
//T1(x) = x
//Tk(x) = 2 * T(k-1)(x) - T(k-2)(x)

float f(unsigned int k, float x) {
    if(k==0) return 1;
    else if(k==1) return x;
    else return 2 * f(k-1,x) - f(k-2,x);
}