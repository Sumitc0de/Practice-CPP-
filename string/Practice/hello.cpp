 #include <iostream>
 #include <string>
 using namespace std;

 int main(){
    string name = "Sumit Vishwakarma\0";
    
    // cout << name <<endl;

    // Print using loop
    
    for(int i = 0;i<name.length();i++){
        cout << " " << name[i];
    }
    return 0;
 }