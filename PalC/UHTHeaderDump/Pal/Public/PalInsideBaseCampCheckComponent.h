#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalInsideBaseCampCheckComponent.generated.h"

class UPalBaseCampModel;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalInsideBaseCampCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeaveBaseCampDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterBaseCampDelegate, UPalBaseCampModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FOnEnterBaseCampDelegate OnEnterBaseCampDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLeaveBaseCampDelegate OnLeaveBaseCampDelegate;
    
private:
    UPROPERTY()
    FGuid NowInsideBaseCampID;
    
public:
    UPalInsideBaseCampCheckComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsInsideBaseCamp();
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel();
    
    UFUNCTION(BlueprintPure)
    FGuid GetInsideBaseCampID();
    
};

