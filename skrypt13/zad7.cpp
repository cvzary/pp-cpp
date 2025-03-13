/*
Napisz program w języku C++, który zdefiniuje typ złożony reprezentujący wektor za pomocą trzech współrzędnych kartezjańskich XYZ. 
Napisz funkcje w języku C++, które przyjmują trzy wskaźniki na ten typ v1, v2 i result. 
Funkcje powinny obliczyć: a) sumę wektorów i b) różnicę wektorów.
*/

#include <iostream>

struct Vector3D{
    float x,y,z;
};

void add(Vector3D *v1, Vector3D *v2, Vector3D *result) {
    result->x = v1->x + v2->x;
    result->y = v1->y + v2->y;
    result->z = v1->z + v2->z;
}

void sub(Vector3D *v1, Vector3D *v2, Vector3D *result) {
    result->x = v1->x - v2->x;
    result->y = v1->y - v2->y;
    result->z = v1->z - v2->z;
}

int main() {
    Vector3D *v1 = new Vector3D;
    Vector3D *v2 = new Vector3D;
    v1->x = v1->y = v1->z = 3;
    v2->x = v2->y = v2->z = 1;

    Vector3D *result = new Vector3D;
    add(v1,v2,result);
    std::cout << result->x << " " << result->y << " " << result->z << std::endl;
    sub(v1,v2,result);
    std::cout << result->x << " " << result->y << " " << result->z << std::endl;

    /*
    lub nie uzywajac dynamicznej alokacji;
    Vector3D vv1 = {3,3,3};
    Vector3D vv2 = {1,1,1};
    Vector3D v_result;
    sub(&vv1,&vv2,&v_result);
    std::cout << v_result.x << " " << v_result.y << " " << v_result.z << std::endl;
    */

    delete v1;
    delete v2;
    delete result;
    return 0;
}