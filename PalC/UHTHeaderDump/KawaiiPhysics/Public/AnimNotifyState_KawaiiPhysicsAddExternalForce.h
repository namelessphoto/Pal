#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=StructUtils -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "AnimNotifyState_KawaiiPhysicsAddExternalForce.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class KAWAIIPHYSICS_API UAnimNotifyState_KawaiiPhysicsAddExternalForce : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FInstancedStruct> AdditionalExternalForces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer FilterTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFilterExactMatch;
    
    UAnimNotifyState_KawaiiPhysicsAddExternalForce();

};

