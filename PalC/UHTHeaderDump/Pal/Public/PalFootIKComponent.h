#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPalFootType.h"
#include "FootIKSetting.h"
#include "PalFootIKComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFootIKComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootIKInterpTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalFootType, FFootIKSetting> FootIKSettings;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float FootIKMeshOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<EPalFootType, FHitResult> FootGroundResult;
    
public:
    UPalFootIKComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFootIKDisable(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintPure)
    bool IsEnableFootIK() const;
    
};

