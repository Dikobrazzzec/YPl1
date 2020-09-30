#include <Windows.h>
#include <wincrypt.h>
#include <iostream>

using namespace std;

int main()
{ 

    //HCRYPTPROV hCrypt = 0;
	//const DWORD dwLength = 5;
	//BYTE pbBuffer[dwLength] = {};
	BYTE value;
	BYTE* ptr = &value;
	HCRYPTPROV a;
	//HCRYPTPROV* FParametr = &a;
	CryptAcquireContext(&a,NULL ,NULL,PROV_RSA_FULL, CRYPT_VERIFYCONTEXT );
	CryptGenRandom(a, 1, ptr);
	cout << *ptr;
	return 0;
}