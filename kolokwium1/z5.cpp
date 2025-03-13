/*Napisz program, który wypisze wszystkie cyfry, zawarte w dowolnym stringu
(string może zawierać cyfry i inne znaki alfanumeryczne) w porządku
od cyfry zawierającej najmniej bitów 1 do cyfry zawierającej najwięcej bitów 1.
IN: A3g56h810kh5e3r7 hty4 g6544 7g r
OUT: 0 8 1 4 4 4 5 3 5 6 5 6 3 7 7*/
#include <iostream>

void swap(char& a, char& b) { 
    char temp = a; 
    a = b; 
    b = temp; 
}

int bits_count(char c) {
    int count = 0;
    int value = c - '0'; // Zamiana cyfry ASCII na liczbę
    while (value > 0) {
        count += (value & 1);
        value >>= 1;
    }
    return count;
}

bool is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int copy_only_ascii_digits(char src[], char dst[], int n) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        if (is_digit(src[i])) {
            dst[len++] = src[i];
        }
    }
    return len;
}

int find_min_index_bits(char arr[], int n, int start_idx) {
    int idx_min = start_idx;
    for (int i = start_idx + 1; i < n; i++) {
        if (bits_count(arr[i]) < bits_count(arr[idx_min])) {
            idx_min = i;
        }
    }
    return idx_min;
}

void sort_by_bits(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int idx = find_min_index_bits(arr, n, i);
        swap(arr[idx], arr[i]);
    }
}

void print_array(char arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}

void sort_main(char str[], int n) {
    char digits[200] = {0};
    int n_digits = copy_only_ascii_digits(str, digits, n);
    sort_by_bits(digits, n_digits);
    print_array(digits, n_digits);
}

int main() {
    char str[] = "A3g56h810kh5e3r7 hty4 g6544 7g r";
    int n = sizeof(str) - 1;
    sort_main(str, n);
    return 0;
}