#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=StructUtils -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "AnimNotify_KawaiiPhysicsAddExternalForce.generated.h"

UCLASS(CollapseCategories)
class KAWAIIPHYSICS_API UAnimNotify_KawaiiPhysicsAddExternalForce : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FInstancedStruct> AdditionalExternalForces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer FilterTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFilterExactMatch;
    
    UAnimNotify_KawaiiPhysicsAddExternalForce();

};

