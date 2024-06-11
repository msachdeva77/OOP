
/*==============================================
Name:           Mannat Sachdeva
Student Number: 148832231
Email:          msachdeva7@myseneca.ca
Section:        ZDD
Workshop:       Workshop 2 - Part 1
Date:           05-25-2024
I have done all the coding by myself and only
copied the code that my professor provided to
complete my workshops and assignments.
==============================================*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"
    
namespace seneca {
    FILE* fptr;
    bool openFile(const char filename[]) {
        fptr = fopen(filename, "r");
        return fptr != NULL;
    }
    int noOfRecords() {
        int noOfRecs = 0;
        char ch;
        while (fscanf(fptr, "%c", &ch) == 1) {
            noOfRecs += (ch == '\n');
        }
        rewind(fptr);
        return noOfRecs;
    }
    void closeFile() {
        if (fptr) fclose(fptr);
    }
    /* TODO: read functions go here*/
    bool read(char *empName) {
        return fscanf(fptr, "%[^\n]\n", empName) == 1;
    }
        bool read(int &empNum) {
        return fscanf(fptr, "%d,", &empNum) == 1;
    }
    bool read(double &empSalary) {
        return fscanf(fptr, "%lf,", &empSalary) == 1;
    }
    
}