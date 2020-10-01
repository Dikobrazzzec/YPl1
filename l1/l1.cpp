#include <Windows.h>
#include <wincrypt.h>
#include <iostream>

using namespace std;

int main()
{ 
	BYTE value[100];
	BYTE* ptr = &value[0];
	int QuanBytes;
	cout <<" Enter quantity  of bytes" << endl;
	cin >> QuanBytes;
	cout << endl;
	BOOL q;
	HCRYPTPROV a;
	//HCRYPTPROV* FParametr = &a;
	CryptAcquireContext(&a,NULL ,NULL,PROV_RSA_FULL, CRYPT_VERIFYCONTEXT);
	CryptGenRandom(a, QuanBytes, value);	
	for (int i = 0; i < QuanBytes; i++) {
		cout << i << '.' << value[i] << endl;
	}
	cout << endl;
	return 0;
}