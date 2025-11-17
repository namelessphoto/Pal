#pragma once
#include "CoreMinimal.h"
#include "PalCharacterStoredParameterId.h"
#include "PalCharacterStoredParameterInfo.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "PalCharacterParameterStorageSubsystem.generated.h"

UCLASS()
class PAL_API UPalCharacterParameterStorageSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStoredParameterDelegate OnStoredParameterDelegate_ForServer;
    
    UPROPERTY(BlueprintAssignable)
    FRemovedParameterDelegate OnRemovedParameterDelegate_ForServer;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalCharacterStoredParameterId, FPalCharacterStoredParameterInfo> StoredParameterInfoMap;
    
public:
    UPalCharacterParameterStorageSubsystem();


    // Fix for true pure virtual functions not being implemented
};

