#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectPlayerRecordModule.generated.h"

class APalPlayerState;
class UPalMapObjectPlayerRecordModule;

UCLASS()
class PAL_API UPalMapObjectPlayerRecordModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMulticastIntValDelegate, UPalMapObjectPlayerRecordModule*, Module, const FName, Key, const int32, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMulticastBoolValDelegate, UPalMapObjectPlayerRecordModule*, Module, const FName, Key, const bool, Value);
    
    UPROPERTY(BlueprintAssignable)
    FMulticastBoolValDelegate OnUpdatePlayerRecordBoolValDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMulticastIntValDelegate OnUpdatePlayerRecordIntValDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName TargetKey;
    
public:
    UPalMapObjectPlayerRecordModule();

private:
    UFUNCTION()
    void OnUpdatePlayerRecordIntVal(const FName Key, const int32 Value);
    
    UFUNCTION()
    void OnUpdatePlayerRecordBoolVal(const FName Key, const bool Value);
    
    UFUNCTION()
    void OnCompleteSyncPlayerFromServer_InClient(APalPlayerState* LocalPlayerState);
    
};

