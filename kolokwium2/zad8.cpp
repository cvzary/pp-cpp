/*
Radar morski na statku to prawdopodobnie najczęściej używany sprzęt elektroniczny podczas nawigacji. 
To doskonałe narzędzie do wykrywania obiektów wokół nas. Niestety jesteśmy tak bardzo uzależnieni od radaru,
że czasami używamy go częściej niż własnych oczu do obserwacji wokół. Jednakże inna sytuacja miała miejsce, 
gdy pewien marynarz odczytywał dane z notatek pozostawionych na pokładzie swojego statku. 
W notatkach kapitan pokładu zapisał położenia N obiektów na morzu za pomocą współrzędnych biegunowych w następujący sposób:
    R1 F1 R2 F2 ... Rn Fn
gdzie R to promień wodzący obiektu (odległość), zaś F to amplituda punktu (wartość kąt skierowanego w radianach).
Zaimplementuj funkcję, która posortuje dane przedstawione w notatce tak, aby obiekty były w kolejności od najmniej do najbardziej 
odległego od statku naszego bohatera, który znajduje się w punkcie (0, 0). W sytuacji, gdy oba obiekty są tak samo 
odległe należy wybrać ten o większej amplitudzie.
Napisz program, który przetestuje działanie tej funkcji i wyświetli współrzędne w układzie kartezjańskim tych obiektów w
odpowiedniej kolejności.
Konwersja ze współrzędnych biegunowych do kartezjańskich:
   x = R * cos(F)
   y = R * sin(F)
Przykład:
IN:   [1.2 6.1 1.2 1.1 5.4 3.1]
OUT:
    1.179 -0.219
    0.544  1.069
   -5.395  0.225

*/