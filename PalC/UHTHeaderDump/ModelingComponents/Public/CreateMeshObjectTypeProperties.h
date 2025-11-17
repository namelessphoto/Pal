#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ECreateObjectTypeHint.h"
#include "Templates/SubclassOf.h"
#include "CreateMeshObjectTypeProperties.generated.h"

class AVolume;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString OutputType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AVolume> VolumeType;
    
    UPROPERTY()
    TArray<FString> OutputTypeNamesList;
    
    UPROPERTY()
    bool bShowVolumeList;
    
    UCreateMeshObjectTypeProperties();

    UFUNCTION()
    bool ShouldShowPropertySet() const;
    
    UFUNCTION()
    TArray<FString> GetOutputTypeNamesFunc();
    
    UFUNCTION()
    ECreateObjectTypeHint GetCurrentCreateMeshType() const;
    
};

