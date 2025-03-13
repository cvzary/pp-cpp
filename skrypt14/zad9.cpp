/*
Zmodyfikuj poprzednią funkcję tak aby możliwe było wprowadzenie dowolnie długiego napisu w miejsce gwiazdek. 
Sekwencja pięciu gwiazdek ***** może wystąpić w pliku więcej niż jeden raz.
*/

#include <cstdio>
#include <cstring>
#include <cstdlib>

void replaceAsterisks(const char* filename, const char* word) {
    FILE* file = nullptr;
    char* buffer = nullptr;
    char* newBuffer = nullptr;
    char* pos = nullptr;
    const char* pattern = "*****";
    size_t fileSize, newSize, patternLength = strlen(pattern), wordLength = strlen(word);

    if ((file = std::fopen(filename, "r")) == nullptr) {
        perror("Błąd otwierania pliku!");
        return;
    }

    std::fseek(file, 0, SEEK_END);
    fileSize = std::ftell(file);
    std::rewind(file);

    buffer = new char[fileSize + 1];
    std::fread(buffer, 1, fileSize, file);
    buffer[fileSize] = '\0';
    std::fclose(file);

    int asterisksCount = 0;
    pos = buffer;
    while ((pos = strstr(pos, pattern)) != nullptr) {
        asterisksCount++;
        pos += patternLength;
    }

    newSize = fileSize + asterisksCount * (wordLength - patternLength);
    newBuffer = new char[newSize + 1];

    char* src = buffer;
    char* dst = newBuffer;
    while ((pos = strstr(src, pattern)) != nullptr) {
        size_t copyLength = pos - src;
        strncpy(dst, src, copyLength);
        dst += copyLength;
        strcpy(dst, word);
        dst += wordLength;
        src = pos + patternLength;
    }
    strcpy(dst, src);

    if ((file = std::fopen(filename, "w")) == nullptr) {
        perror("Błąd!");
        delete[] buffer;
        delete[] newBuffer;
        return;
    }

    std::fwrite(newBuffer, 1, strlen(newBuffer), file);
    std::fclose(file);
    
    delete[] buffer;
    delete[] newBuffer;
}

int main() {
    const char* filePath = "tekst.txt";
    char word[] = "kotka i rybke";
    replaceAsterisks(filePath, word);
    return 0;
}
