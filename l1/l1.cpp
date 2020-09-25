#include <Windows.h>
#include <wincrypt.h>
#include <iostream>

using namespace std;

BOOL WINAPI CryptGenRandom(_In_ HCRYPTPROV hProv, _In_ DWORD dwLen, _Inout_ BYTE* pbBuffer);

int main()
{ 
	HCRYPTPROV hCrypt = 0;
	const DWORD dwLength = 5;
	BYTE pbBuffer[dwLength] = {};
	//BYTE* ptr = &value;
	CryptGenRandom(hCrypt, 16, pbBuffer);
	return 0;
}
