#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PalInteractLockSettingDataSet.h"
#include "PalInteractLockSettingComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalInteractLockSettingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    FPalInteractLockSettingDataSet LockSettingDataSet;
    
    UPROPERTY(EditInstanceOnly)
    FDataTableRowHandle MsgID;
    
public:
    UPalInteractLockSettingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowDialog_LocalPlayer();
    
    UFUNCTION(BlueprintPure)
    bool IsLocked(const FGuid& PlayerUId) const;
    
};

