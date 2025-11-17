#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalHeatSourceInfo.h"
#include "PalHeatSourceModule.generated.h"

class AActor;

UCLASS(BlueprintType)
class PAL_API UPalHeatSourceModule : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> PlayerList;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ActorList;
    
    UPROPERTY(Transient)
    bool IsActive;
    
    UPROPERTY(Transient)
    FName UnieqName;
    
    UPROPERTY(Transient)
    FPalHeatSourceInfo HeatSourceInfo;
    
public:
    UPalHeatSourceModule();

    UFUNCTION(BlueprintCallable)
    void SetActivate(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHeatSource(FName SourceName, FPalHeatSourceInfo Info, bool DefaultActive);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void AddActor(AActor* Actor);
    
};

