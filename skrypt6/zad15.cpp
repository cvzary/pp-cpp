/*Napisz funkcję rekurencyjną w języku C++, która dla otrzymanej w argumencie nieujemnej liczby całkowitej n zwraca 
wartość elementu o indeksie n ciągu zdefiniowanego w następujący sposób:
a0 = a1 = 1
an = a(n-1) + n dla n parzystych,
an = a(n-1) * n dla n nieparzystych.*/

int a(unsigned int n) {
    if(n == 0 || n == 1) return 1;
    if(n % 2 == 0) return a(n-1) + n;
    else return a(n-1) * n;
}