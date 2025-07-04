// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArrayBuffer.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MainObject.generated.h"

USTRUCT(BlueprintType)
struct FSomeData
{
public:
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D Alignment;

    int DoNoSerialize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int WillSerialize;
};

UENUM(BlueprintType)
enum class EToTest : uint8
{
    V0 = 0,
    V1 = 1,
    V13 = 13
};

/**
 * 
 */
UCLASS(meta = (TGameJSMainObject))
class UE56FRAMEWORK_API UMainObject : public UObject
{
	GENERATED_BODY()

public:
    UMainObject();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add", ScriptName = "Add", Keywords = "test"), Category = "Test")
    int32 Add(int32 a, int32 b) const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Foo", ScriptName = "Foo", Keywords = "test"), Category = "Test")
    FString Foo() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Bar", ScriptName = "Bar", Keywords = "test", TGameJSMainObject = "TGameJSMainObject"), Category = "Test")
    FString Bar(FVector V) const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Bar2", ScriptName = "Bar2", Keywords = "test"), Category = "Test")
    FString Bar2(FVector& V) const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Bar3", ScriptName = "Bar3", Keywords = "test"), Category = "Test")
    FVector Bar3(FVector& V) const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetData", ScriptName = "GetData", Keywords = "test"), Category = "Test")
    TArray<uint8> GetData();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetStrings", ScriptName = "GetStrings", Keywords = "test"), Category = "Test")
    TArray<FString> GetStrings();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetInts", ScriptName = "GetInts", Keywords = "test"), Category = "Test")
    TArray<int32> GetInts();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "EnumTest", ScriptName = "GetInts", Keywords = "test"), Category = "Test")
    void EnumTest(EToTest E);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Bar3", ScriptName = "Bar3", Keywords = "test"), Category = "Test")
    FArrayBuffer ArrayBufferTest(const FArrayBuffer& Ab) const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "EnumTest", ScriptName = "EnumTest", Keywords = "test"), Category = "Test")
    void NameTest(FName Name);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "DefaultTest", ScriptName = "DefaultTest", Keywords = "test"), Category = "Test")
    void DefaultTest(FString Str = TEXT("i am default"), int I = 10, FVector Vec = FVector(1.1, 2.2, 3.3));

	UFUNCTION(BlueprintNativeEvent)
	int32 Mult(int32 a, int32 b) const;


	UFUNCTION(BlueprintImplementableEvent)
	int32 Div(int32 a, int32 b) const;

    UPROPERTY()
    FSomeData SomeData;

    UPROPERTY()
    FVector V;

    UPROPERTY()
    int32 MyFixSizeArray[100];

    UPROPERTY()
    TArray<int32> MyArray;

    UPROPERTY()
    TSet<FString> MySet;

    UPROPERTY()
    TMap<FString, int32> MyMap;

    UPROPERTY()
    FString MyString;

    UPROPERTY()
    FArrayBuffer ArrayBuffer;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "PrintState", ScriptName = "PrintState", Keywords = "test"), Category = "Test")
    void PrintState() const;

    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FCallback, FString, A);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "TestCallback", ScriptName = "TestCallback", Keywords = "test"), Category = "Test")
    void PassJsFunctionAsDelegate(FCallback Callback) const;

    ~UMainObject();
};
