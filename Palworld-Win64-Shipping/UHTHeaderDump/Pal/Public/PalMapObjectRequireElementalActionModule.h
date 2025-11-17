#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectRequireElementalActionInterface.h"
#include "PalMapObjectRequireElementalActionModule.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalMapObjectRequireElementalActionModule : public UPalMapObjectConcreteModelModuleBase, public IPalMapObjectRequireElementalActionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName AssignDefineId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bExistsAssignLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector AssignLocationOffset;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector AssignLocationDirection;
    
public:
    UPalMapObjectRequireElementalActionModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintPure)
    FName GetAssignDefineId() const;
    

    // Fix for true pure virtual functions not being implemented
};

