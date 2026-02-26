#pragma once

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <stdint.h>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <intrin.h>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <array>
#include <tlhelp32.h>
#include <future>
#include <set>
#include <variant>
#include <unordered_set>
#include "SDK/SDK.hpp"
using namespace SDK;
using namespace std;
#include "MinHook/MinHook.h"
#include "memcury.h"
#include "curl/curl.h"
#include "Offsets.h"

class Options
{
public:
	static inline bool bCreative = false;
	static inline bool bLategame = false;
	static inline bool bArenaSolo = false;
	static inline bool bArenaDuos = false;
	static inline bool bArenaTrios = false;
	static inline bool bTournamentSolo = false;
	static inline bool bTournamentDuos = false;
	static inline bool bTournamentTrios = false;
	static inline bool bDuos = false;
	static inline bool bTrios = false;
	static inline bool bOneShot = false;
	static inline bool bServerCheats = false;
	static inline bool bClient = false;
	static inline bool bUseIris = false;
};