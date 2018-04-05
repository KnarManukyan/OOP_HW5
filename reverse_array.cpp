#include <iostream>
using namespace std;

int main(){
 int length;
 cout << "Please enter the number of your inputs!" << endl;
 cin >> length;
 int* array = new int [length];
 cout << "Please enter " << length << " numbers!" << endl;
 for(int i = 0; i < length; i++){
   cin >> array[i];
 }
 int* pointer = array;
 for(int i = 0; i < length/2; i++){
   int n = pointer[i];
   pointer[i] = pointer[length-i-1];
   pointer[length-i-1]= n;
 }
 cout << "Here is the reversed array!" << endl;
 for(int i = 0; i < length; i++){
   if(i == length-1){
     cout << array[i] << endl;
   } else{
     cout << array[i] << ", ";
   }
 }
 return 0;
}
