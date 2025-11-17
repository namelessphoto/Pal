#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeNormalSpace.h"
#include "BakeInputMeshProperties.generated.h"

class AActor;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeInputMeshProperties : public UInteractiveToolPropertySet {
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
    
    UPROPERTY()
    bool bHasTargetUVLayer;
    
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* SourceStaticMesh;
    
    UPROPERTY(VisibleAnywhere)
    USkeletalMesh* SourceSkeletalMesh;
    
    UPROPERTY(VisibleAnywhere)
    AActor* SourceDynamicMesh;
    
    UPROPERTY(EditAnywhere)
    bool bHideSourceMesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UTexture2D* SourceNormalMap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString SourceNormalMapUVLayer;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EBakeNormalSpace SourceNormalSpace;
    
    UPROPERTY()
    bool bHasSourceNormalMap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ProjectionDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bProjectionInWorldSpace;
    
    UPROPERTY()
    TArray<FString> TargetUVLayerNamesList;
    
    UPROPERTY()
    TArray<FString> SourceUVLayerNamesList;
    
    UBakeInputMeshProperties();

    UFUNCTION()
    TArray<FString> GetTargetUVLayerNamesFunc() const;
    
    UFUNCTION()
    TArray<FString> GetSourceUVLayerNamesFunc() const;
    
};

