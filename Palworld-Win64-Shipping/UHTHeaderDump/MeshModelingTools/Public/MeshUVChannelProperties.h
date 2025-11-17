#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshUVChannelProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UMeshUVChannelProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString UVChannel;
    
    UPROPERTY()
    TArray<FString> UVChannelNamesList;
    
    UMeshUVChannelProperties();

    UFUNCTION()
    TArray<FString> GetUVChannelNamesFunc() const;
    
};

