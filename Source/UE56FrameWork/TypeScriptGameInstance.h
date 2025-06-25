// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TypeScriptGameInstance.generated.h"

DECLARE_DYNAMIC_DELEGATE(FNotify);

/**
 * 
 */
UCLASS()
class UE56FRAMEWORK_API UTypeScriptGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
    virtual void OnStart() override;

    virtual void Shutdown() override;

    UPROPERTY()
    FNotify StartNotify;

    UPROPERTY()
    FNotify ShutdownNotify;
};
