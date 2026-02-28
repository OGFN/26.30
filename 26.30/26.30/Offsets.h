#pragma once

#include "../Runtime/Public/Runtime.h"

namespace OGFN
{
	namespace Offsets
	{
		inline uint64_t ImageBase = *(uint64_t*)(__readgsqword(0x60) + 0x10);
		inline uint64_t ConstructAbilitySpec = ImageBase + 0x6919894; // Might be wrong
		inline uint64_t InternalGiveAbility = ImageBase + 0x68E51CC;
		inline uint64_t GiveAbilityAndActivateOnce = ImageBase + 0x68E5280;
		inline uint64_t InternalTryActivateAbility = ImageBase + 0x68F11B8; // Might be wrong
		inline uint64_t ReplaceBuildingActor = ImageBase + 0x7CAF9AC; // Might be wrong
		inline uint64_t CantBuild = ImageBase + 0x817FEE8; // Might be wrong
		inline uint64_t StaticFindObject = ImageBase + 0x110EFB0; // Might be wrong
		inline uint64_t StaticLoadObject = ImageBase + 0x166E984; // Might be wrong
	}

	namespace Indexes
	{

	}

	namespace Funcs
	{
		inline FGameplayAbilitySpecHandle(*GiveAbilityAndActivateOnce)(UAbilitySystemComponent* ASC, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec, void*) = decltype(GiveAbilityAndActivateOnce)(OGFN::Offsets::GiveAbilityAndActivateOnce);
		inline void (*ConstructAbilitySpec)(FGameplayAbilitySpec*, UGameplayAbility*, int, int, UObject*) = decltype(ConstructAbilitySpec)(OGFN::Offsets::ConstructAbilitySpec);
		inline void (*InternalGiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(InternalGiveAbility)(OGFN::Offsets::InternalGiveAbility);
		inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent* AbilitySystemComp, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(OGFN::Offsets::InternalTryActivateAbility);
		inline ABuildingSMActor* (*ReplaceBuildingActor)(ABuildingSMActor* BuildingSMActor, unsigned int a2, UObject* a3, unsigned int a4, int a5, bool bMirrored, AFortPlayerControllerAthena* PC) = decltype(ReplaceBuildingActor)(OGFN::Offsets::ReplaceBuildingActor);
		inline __int64 (*CantBuild)(UWorld*, UObject*, FVector, FRotator, char, void*, char*) = decltype(CantBuild)(OGFN::Offsets::CantBuild);
	}
}
