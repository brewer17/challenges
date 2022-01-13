#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <math.h>
#include <vector>

using namespace std;

//function to reverse string
string reverse(string s){
    string final = "";
    int l = s.length();
    char c[l + 1];
    strcpy(c, s.c_str());

    for (int i = 0; i <= l; i++){
        final.push_back(c[l - i]);
    }

    return final;
}

//function to choose largest of 3 integers
int pickBig(int x, int y, int z){
    int final = 0;
    if (x >= y){ 
        if (x >= z){
            final = x; 
        }
        else {
            final = z;
        }
    }
    else { 
        if (y >= z){
            final = y;
        }
        else{
            final = z;
        }
    }
    return final;
}

//function to calculate factorial
int factorial(int n){
    /*int final = n;
    for (int i = 1; i < n; i++){
        final *= i;
    }
    return final;*/
    
    if (n > 1){
        return n * factorial(n - 1);
    }
    else return 1;
}

//function to find nth fibonacci number
int fibonacci(int index){
    vector<int> v;
    if (index == 1 || index == 2){
        return 1;
    }
    v.push_back(1);
    v.push_back(1);
    for (int i = 2; i < index; i++){
        v.push_back(v[i - 1] + v[i - 2]);
    }
    return v[index-1];
}

int main(int argc, const char * argv[]){
    string str;
    cin >> str;
    cout << reverse(str) << endl;
    
    int x, y, z;
    cin >> x >> y >> z;
    cout << pickBig(x, y, z);
    
    int num;
    cin >> num;
    cout << factorial(num);
    
    int index;
    cin >> index;
    cout << fibonacci(index);
}
