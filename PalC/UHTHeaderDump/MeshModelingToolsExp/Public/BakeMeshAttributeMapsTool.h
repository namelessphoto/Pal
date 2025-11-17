#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeMapsToolBase.h"
#include "BakeMeshAttributeMapsTool.generated.h"

class UBakeInputMeshProperties;
class UBakeMeshAttributeMapsResultToolProperties;
class UBakeMeshAttributeMapsToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBakeInputMeshProperties* InputMeshSettings;
    
    UPROPERTY()
    UBakeMeshAttributeMapsToolProperties* Settings;
    
    UPROPERTY()
    UBakeMeshAttributeMapsResultToolProperties* ResultSettings;
    
public:
    UBakeMeshAttributeMapsTool();

};

