#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "PalUIInframeRenderer.generated.h"

class UPalStaticCharacterParameterComponent;
class USkeletalMeshComponent;

UCLASS()
class PAL_API APalUIInframeRenderer : public AActor {
    GENERATED_BODY()
public:
    APalUIInframeRenderer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool IsSpiderPal(const TSubclassOf<AActor>& TargetActorClass) const;
    
    UFUNCTION(BlueprintCallable)
    UPalStaticCharacterParameterComponent* GetStaticParameteComponentFromActorClassr(const TSubclassOf<AActor>& TargetActorClass);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshComponentFromActorClass(const TSubclassOf<AActor>& TargetActorClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideMaterials(USkeletalMeshComponent* TargetSkeletalMesh);
    
};

