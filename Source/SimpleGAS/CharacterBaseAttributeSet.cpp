// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBaseAttributeSet.h"
#include <Runtime/Engine/Public/Net/UnrealNetwork.h>

UCharacterBaseAttributeSet::UCharacterBaseAttributeSet() :
	Health(100.0f)
{
}

void UCharacterBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterBaseAttributeSet, Health, COND_None, REPNOTIFY_Always);
}

void UCharacterBaseAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterBaseAttributeSet, Health, OldHealth);
}