#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeMapsToolBase.h"
#include "BakeMultiMeshAttributeMapsTool.generated.h"

class UBakeMeshAttributeMapsResultToolProperties;
class UBakeMultiMeshAttributeMapsToolProperties;
class UBakeMultiMeshInputToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBakeMultiMeshAttributeMapsToolProperties* Settings;
    
    UPROPERTY()
    UBakeMultiMeshInputToolProperties* InputMeshSettings;
    
    UPROPERTY()
    UBakeMeshAttributeMapsResultToolProperties* ResultSettings;
    
public:
    UBakeMultiMeshAttributeMapsTool();

};

