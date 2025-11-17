#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeMultiMeshDetailProperties.h"
#include "BakeMultiMeshInputToolProperties.generated.h"

class AActor;
class USkeletalMesh;
class UStaticMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* TargetStaticMesh;
    
    UPROPERTY(VisibleAnywhere)
    USkeletalMesh* TargetSkeletalMesh;
    
    UPROPERTY(VisibleAnywhere)
    AActor* TargetDynamicMesh;
    
    UPROPERTY(EditAnywhere)
    FString TargetUVLayer;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FBakeMultiMeshDetailProperties> SourceMeshes;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ProjectionDistance;
    
    UPROPERTY()
    TArray<FString> TargetUVLayerNamesList;
    
    UBakeMultiMeshInputToolProperties();

    UFUNCTION()
    TArray<FString> GetTargetUVLayerNamesFunc() const;
    
};

