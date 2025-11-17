#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeRenderCaptureInputToolProperties.generated.h"

class UStaticMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeRenderCaptureInputToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* TargetStaticMesh;
    
    UPROPERTY(EditAnywhere)
    FString TargetUVLayer;
    
    UPROPERTY()
    TArray<FString> TargetUVLayerNamesList;
    
    UBakeRenderCaptureInputToolProperties();

    UFUNCTION()
    TArray<FString> GetTargetUVLayerNamesFunc() const;
    
    UFUNCTION()
    int32 GetTargetUVLayerIndex() const;
    
};

