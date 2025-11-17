#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalArenaSequencerOwnerType.h"
#include "GameDateTime.h"
#include "PalArenaSequenceBase.generated.h"

class UPalArenaInstanceModel;
class UPalArenaSequenceBase;
class UPalArenaSequencer;

UCLASS(Blueprintable)
class UPalArenaSequenceBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndSequence, UPalArenaSequenceBase*, Self);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bNoSync;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNotWaitClient;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBreakEndSequence;
    
    UPROPERTY()
    FGameDateTime BeginTime_InServer;
    
public:
    UPalArenaSequenceBase();

    UFUNCTION(BlueprintNativeEvent)
    void TickSequence(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndSequence();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBreakSequence();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginSequence();
    
protected:
    UFUNCTION(BlueprintPure)
    EPalArenaSequencerOwnerType GetOwnerType() const;
    
    UFUNCTION(BlueprintPure)
    UPalArenaSequencer* GetOuterSequencer() const;
    
    UFUNCTION(BlueprintPure)
    UPalArenaInstanceModel* GetInstanceModel() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSequence();
    
};

