#include "../Runtime/Public/Runtime.h"

void Runtime::LoadConsole()
{
	AllocConsole();
	FILE* File;
	freopen_s(&File, "CONOUT$", "w", stdout);
	freopen_s(&File, "CONOUT$", "w", stderr);
	SetConsoleTitleA("FGS - 26.30 || Starting...");
}

void Runtime::LOG(const string& msg)
{
	cout << "[*] FGS: 26.30 >> " << msg << endl;
}

void Runtime::Hook(uint64_t Address, PVOID Hook, void** Original)
{
	MH_CreateHook(LPVOID(Address), Hook, Original);
	MH_EnableHook(LPVOID(Address));
}

void Runtime::VHook(void* Base, int Idx, void* Detour, void** Original)
{
	DWORD oldProt;
	void** VTable = *(void***)Base;
	if (Original)
		*Original = VTable[Idx];

	VirtualProtect(&VTable[Idx], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProt);
	VTable[Idx] = Detour;
	VirtualProtect(&VTable[Idx], sizeof(void*), oldProt, &oldProt);
}

int Runtime::ReturnTrue()
{
	return 1;
}

int Runtime::ReturnFalse()
{
	return 0;
}

void Runtime::NullFunc() {}