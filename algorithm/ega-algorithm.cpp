/*
    1.  Saya memiliki angka acak 1,4,5,3,2,8
        Tolong urutkan dengan metode sorting
*/

#include<iostream> 
using namespace std; 
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   int a[] = { 1, 4, 5, 3, 2, 8 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"Array sebelumnya:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   cout<<"\nSetelah diurutkan: \n";
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}