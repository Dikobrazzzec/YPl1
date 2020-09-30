#include <Windows.h>
#include <wincrypt.h>
#include <iostream>

using namespace std;

int main()
{ 
	BYTE value[10];
	BYTE* ptr = &value[0];
	HCRYPTPROV a;
	//HCRYPTPROV* FParametr = &a;
	CryptAcquireContext(&a,NULL ,NULL,PROV_RSA_FULL, CRYPT_VERIFYCONTEXT);
	CryptGenRandom(a, 5, ptr);
	cout << *ptr;
	return 0;
}