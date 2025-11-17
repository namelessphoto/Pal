#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "TransferMeshToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UTransferMeshToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTransferMaterials;
    
    UPROPERTY(EditAnywhere)
    FString SourceLOD;
    
    UPROPERTY(EditAnywhere)
    FString TargetLod;
    
    UPROPERTY()
    bool bIsStaticMeshSource;
    
    UPROPERTY()
    TArray<FString> SourceLODNamesList;
    
    UPROPERTY()
    TArray<FString> TargetLODNamesList;
    
    UPROPERTY()
    bool bIsStaticMeshTarget;
    
    UTransferMeshToolProperties();

    UFUNCTION()
    TArray<FString> GetTargetLODNamesFunc() const;
    
    UFUNCTION()
    TArray<FString> GetSourceLODNamesFunc() const;
    
};

