#pragma once
#include"Person.h"
#include<iostream>
#include <vector>

using namespace std;

class Student : public Person {
private:
    vector<int> testScores;
public:
    Student(string firstName, string lastName, int id, std::vector<int>& scores)
        : Person(firstName, lastName, id), testScores(scores) {}

    char calculate() {
        int average = 0;
        for (auto score : testScores) {
            average += score;
        }
        average = average / testScores.size();
        switch (average) {
        case 90 ... 100: return 'O';
        case 80 ... 89: return 'E';
        case 70 ... 79: return 'A';
        case 55 ... 69: return 'P';
        case 40 ... 54: return 'D';
        default: return 'T';
        }
    }
};
