/*
Napisz funkcję w języku C++, która dostaje jako parametr dynamiczną dwuwymiarową tablicę liczb całkowitych i jej wymiary n, m.
Funkcja ma zwrócić 0, jeśli na brzegach (tzn. w pierwszym i ostatnim wierszu oraz w pierwszej i ostatniej kolumnie) tablicy występują
wartości tylko zerowe; w przeciwnym razie funkcja ma zwrócić 1.
*/

int check_borders(int **arr, int n, int m) {
    for(int i = 0; i < n; ++i)
        if (arr[i][0] || arr[i][m - 1])
            return 1;
    for(int j = 0; j < m; ++j)
        if (arr[0][j] || arr[n - 1][j])
            return 1;
    return 0;
}
