//
// Created by 20675 on 2024/7/2.
//

#include "MathProblem.h"

#include <valarray>


int Solution479::largestPalindrome(int n) {
        if(n==1) {
            return 9;
        }
        int max=std::pow(10,n)-1;
        for(int left=max;;left--)
        {
            long tmp=left;
            for(int right=left;right>0;right/=10) {
                tmp=tmp*10+right%10;
            }//构造回文数
            for(long x=max;x*x>=tmp;--x) {//判断x是否为tmp的因数
                if(tmp%x==0)
                    return tmp%mod;
            }
        }
    }


std::string Solution564::nearestPalindromic(std::string n) {
    int num=std::stoi(n);
    if(n.length()==1) {
        return std::to_string(num-1);
    }
    if(!isPalind(n)) {//1234  12345
        if((n.length()&1)==0) {
            int left=num/std::pow(10,2);
            int result1=InitPalind(left);
            if(result1<num) {

            }else {

            }
        }
    }else {

    }
}

bool Solution564::isPalind(const std::string& s) {
    const char* c=s.c_str();
    for(int i=0;i<s.length()/2;i++) {
        if(c[i]!=c[s.length()-i-1])
            return false;
    }
    return true;
}

int Solution564::InitPalind(int left) {
    int tmp=left;
    for(int i=tmp;i>0;i/=10) {
        left=left*10+tmp%10;
    }
    return left;
}
