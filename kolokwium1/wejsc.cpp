#include <iostream>
#include <cmath>
void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void move_zeros_to_end(int arr[], int n) {
    int idx = 0;

    for(int i = 0; i < n; ++i) {
        if(arr[i] != 0) {
            arr[idx] = arr[i];
            idx++;
        }
    }

    for(int i = idx; i < n; ++i)
        arr[i] = 0;
}

int findClosestIndex(int arr[], int n) {
    int closestIndex = -1;
    double minDistance = 1e6;
    
    for(int i = 0; i < n - 1; i += 2) {
        if(arr[i] != 0 && arr[i + 1] != 0) {
            double distance = std::sqrt(arr[i] * arr[i] + arr[i+1] * arr[i+1]);
        
            if(distance < minDistance) {
                minDistance = distance;
                closestIndex = i;
            }
        }
    }
    return closestIndex;
}

int main() {
    int arr[] = {0, 5, 3, 7, 6, 0, 0, 3, 1, 2, 6, 0, 4, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "\ntablica poczatkowa" << std::endl;
    print_arr(arr,n);
    std::cout << "\npo przeniesieniu zer" << std::endl;
    move_zeros_to_end(arr,n);
    print_arr(arr,n);
    
    std::cout << "\nindeks najblizszej pary to: " << findClosestIndex(arr,n);
    std::cout << std::endl;

    return 0;
}