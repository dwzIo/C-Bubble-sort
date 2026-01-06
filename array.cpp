#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n;
	int bil[100];
	cout << "masukkan jumlah bilangan: "; cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "masukkan bilangan " << i+1 << ": ";
		cin >> bil[i];
	}
	
	cout << "sebelum: ";
	for(int i = 0; i < n; i++){
		cout << "[" << bil[i] << "] ";
	}
	cout << "\n";
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++) {
	         if (bil[j+1] < bil[j]) {
	          tukar(&bil[j+1], &bil[j]);
     }
    }
   }
	
   cout << "sesudah: ";
	for(int i = 0; i < n; i++){
		cout << "[" << bil[i] << "] ";
	}
}
