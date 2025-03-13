/*
Napisz program w języku C++, który wczyta z pliku tekstowego wszystkie słowa do tablicy napisów. 
Zakładamy, że słowa w pliku tekstowym nie są dłuższe niż 99 znaków.
*/

#include <cstdio>
#include <cstring>


void print_all_file_words(const char *filename) {
    char temp_str[100] = {};
    char **temp_arr;
    int count = 0;
    FILE *in = nullptr;
    if((in = fopen(filename, "rt")) == nullptr) {
        printf("blad!\n");
    } else {
        while(fscanf(in, "%99s", temp_str) != EOF) count++;
        temp_arr = new char*[count];
        for(int i = 0; i < count; ++i) temp_arr[i] = new char[100];
        int i = 0;
        fseek(in, 0, SEEK_SET); // rewind(in);
        while(fscanf(in, "%99s", temp_str) != EOF) strcpy(temp_arr[i++], temp_str);
        fclose(in);
    }

    for(int i = 0; i < count; ++i) printf("%s\n", temp_arr[i]);
    for(int i = 0; i < count; ++i) delete[] temp_arr[i];
    delete[] temp_arr;
}



int main() {
    print_all_file_words("/skry"); 
    return 0;
}