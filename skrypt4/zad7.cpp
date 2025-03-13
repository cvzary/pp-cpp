//Napisz funkcję, która przyjmie w argumencie liczbę zmiennoprzecinkową. Funkcja powinna zwrócić jej część ułamkową.

float f(float n) {
    if(n<0) 
    {
        n = -n;
    }
    return n - (int)n;
}