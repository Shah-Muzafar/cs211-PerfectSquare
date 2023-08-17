#include <iostream>
using namespace std;
int main() {
   for (int i = 1; i <= 150; i++) { 
      int sq = i * i;
      if (sq % 2 != 0 && (sq / 10) % 2 != 0) {
         cout << sq;
         return 0; 
      }
   }
   cout << "Nothing to see here, doesnt exists";

   return 0;
}