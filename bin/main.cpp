#include <iostream>
#include <vector>

#include <lib/lr1.h>

int main() {
    vector<float> arr = { 97.5, 100.00000001, 100.000001, 100.000004, 123, 234.98716 };
    
    pair<int, float> result = firstElement(arr);
    printErrors();
    
    cin.get();
    return 0;
}