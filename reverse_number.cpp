#include <iostream>
using namespace std;
#include <string>

void reverse (int& num);

int main() {
    int n;
    cout << "Please enter an number!" << endl;
    cin >> n;
    reverse(n);
    cout << n << endl;
    int length;
    cout << "Please enter the number of your inputs!" << endl;
    cin >> length;
    int* array =  new int [length];
    cout << "Please enter " << length << " numbers!" << endl;
    for(int i = 0; i < length; i++){
      int n;
      cin >> array[i];
    }
    cout << "Here is the array with reversed numbers!" << endl;
    for(int i = 0; i < length; i++){
      reverse(array[i]);
      if(i == length-1){
        cout << array[i] << endl;
      } else{
        cout << array[i] << ", ";
      }
    }
    return 0;
}

void reverse (int& num){
    int reversed=0;
    while(num != 0){
        reversed = reversed*10 + num%10;
        num = num/10;
    }
   num = reversed;
}
