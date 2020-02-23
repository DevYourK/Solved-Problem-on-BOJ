#include <vector>

long long sum(std::vector<int> &a) {
    long long x = a.size(), sum=0;

    for(int i=0; i<x; i++) {
        sum+=a[i];
    }
    
    return sum;
}  
