#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniInputMeshComponent.h"
#include "HoudiniInputInstancedMeshComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> InstanceTransforms;
    
    UHoudiniInputInstancedMeshComponent();

};

