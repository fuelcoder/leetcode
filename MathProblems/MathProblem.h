//
// Created by 20675 on 2024/7/2.
//

#ifndef MATHPROBLEM_H
#define MATHPROBLEM_H

#include<string>
#include<iostream>

class Solution479 {
    static const int mod=1337;
public:
    static int largestPalindrome(int n);
};

class Solution564 {
public:
    std::string nearestPalindromic(std::string n);
    static bool isPalind(const std::string& s);
    int InitPalind(int left);
};



#endif //MATHPROBLEM_H
