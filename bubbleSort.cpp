#include <iostream> 
using namespace std;

void sortAcsend (int numbers[], int size);
void sortDecsend (int numbers[], int size);

int main(){
  int numbers[] = {9,2,7,4,8,6,1,10,3,5};
  int num_size = sizeof(numbers)/sizeof(int);
  
  cout << "Original order:" << '\n';
  for (int number: numbers){
    cout << number << " ";
  }
  cout <<" " << '\n';
  
  sortAcsend (numbers, num_size);
  cout << "Acsending order:" << '\n';
  for (int number: numbers){
    cout << number << " ";
  }
  cout <<" " << '\n';
  
  sortDecsend (numbers, num_size);
  cout << "Decsending order:" << '\n';
  for (int number: numbers){
    cout << number << " ";
  }
  cout <<" " << '\n';
  
  return 0;
}

void sortAcsend (int numbers[], int size){
  int temp;
  
  for (int i = 0; i < size - 1; i++){
    for (int j = 0; j < size - i - 1; j++){
      if (numbers[j] > numbers[j + 1]){
        temp = numbers[j];
        numbers[j]= numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }
}

void sortDecsend (int numbers[], int size){
  int temp;
  
  for (int i = 0; i < size - 1; i++){
    for (int j = 0; j < size - i - 1; j++){
      if (numbers[j] < numbers[j + 1]){
        temp = numbers[j];
        numbers[j]= numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }
}