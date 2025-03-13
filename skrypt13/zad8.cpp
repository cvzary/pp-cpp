/*
Napisz program w języku C++, który umożliwi przechowywanie wyników poprzedniego zadania w tablicy. 
Użyj do tego dynamicznej alokacji pamięci. Dodatkowo gdy wektory mają takie same współrzędne funkcje obliczające sumę
lub różnicę wektorów powinny zwrócić wektor (0,0,0).
*/

#include <iostream>
#include <cstring>

struct Vector3D{
    float x,y,z;
};

void add(Vector3D *v1, Vector3D *v2, Vector3D *result) {
    if(memcmp(v1, v2, sizeof(Vector3D)) != 0) {
    result->x = v1->x + v2->x;
    result->y = v1->y + v2->y;
    result->z = v1->z + v2->z;
    } else result->x = result->y = result->z = 0;
}

void sub(Vector3D *v1, Vector3D *v2, Vector3D *result) {
    if(memcmp(v1, v2, sizeof(Vector3D)) != 0) {
    result->x = v1->x - v2->x;
    result->y = v1->y - v2->y;
    result->z = v1->z - v2->z;
    } else result->x = result->y = result->z = 0;
}

int main() {
    Vector3D *v1 = new Vector3D;
    Vector3D *v2 = new Vector3D;
    v1->x = v1->y = v1->z = 3;
    v2->x = v2->y = v2->z = 1;

    Vector3D **result = new Vector3D*[2];
    for(int i = 0; i < 2; ++i) result[i] = new Vector3D;
    add(v1,v2,result[0]);
    sub(v1,v2,result[1]);
   
    for(int i = 0; i < 2; ++i)
        std::cout << result[i]->x << " " << result[i]->y << " " << result[i]->z << std::endl;

    delete v1;
    delete v2;
    for(int i = 0; i < 2; ++i) delete[] result[i];
    delete[] result;
    return 0;
}