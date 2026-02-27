#pragma once

#include "../framework.h"

class Runtime
{
public:
	static void LoadConsole();
	static void LOG(const string& msg);

	static void Hook(uint64_t Address, PVOID Hook, void** Original = nullptr)
	{
		MH_CreateHook(LPVOID(Address), Hook, Original);
		MH_EnableHook(LPVOID(Address));
	}

	static void VHook(void* Base, int Idx, void* Detour, void** Original = nullptr)
	{
		DWORD oldProt;
		void** VTable = *(void***)Base;
		if (Original)
			*Original = VTable[Idx];

		VirtualProtect(&VTable[Idx], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProt);
		VTable[Idx] = Detour;
		VirtualProtect(&VTable[Idx], sizeof(void*), oldProt, &oldProt);
	}

	static int ReturnTrue()
	{
		return 1;
	}

	static int ReturnFalse()
	{
		return 0;
	}

	static void NullFunc() {}
};