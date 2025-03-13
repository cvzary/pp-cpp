/*
Stwórz projekt wieloplikowy, który będzie się składał z 3 jednostek translacji: main.cpp, date_time.cpp oraz trigonometry.cpp. 
W pliku date_time.cpp zdefiniuj:
– funkcję print_time(), która wydrukuje na standardowym wyjściu aktualną datę i godzinę,
– funkcję start_measure(), która rozpocznie pomiar czasu procesora,
– funkcję elapsed_measure(), która wyświetli na ekranie czas w sekundach, który upłyną od ostatniego wywołania funkcji start_measure().
W pliku trigonometry.cpp zdefiniuj:
– funkcję deg2rad(), która skonwertuje wartość kąta w stopniach na wartość w radianach zgodnie z wyrażeniem: rad = deg * PI / 180.
– funkcję sinus(), która w parametrze przyjmie wartość kąta w radianach i zwróci wartość sinusa dla tego kąta. 
Napisz własną implementację wyznaczania funkcji sinus z rozwinięcia w szereg Taylora 
zgodnie z wyrażeniem: sin(x) = x - x3/3! + x5/5! - x7/7! + ...
Ilość wyrazów rozwinięcia określ tak żeby różnica w stosunku do bibliotecznej funkcji std::sin() była mniejsza,
niż eps < 10-4. Ogranicz się tylko do kątów z przedziału <0,180> stopni. W funkcji głównej programu main(),
porównaj czasy wykonania własnej implementacji funkcji sinus i implementacji z biblioteki cmath std::sin().
Jakie zaproponujesz pliki nagłówkowe i jakie w nich umieścisz deklaracje funkcji i zmiennych dla tak postawionego problemu?
Jak można zoptymalizować implementację szacowania funkcji sinus?
*/

