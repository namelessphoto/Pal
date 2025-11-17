#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigShapeDefinition.h"
#include "ControlRigShapeLibrary.generated.h"

class UMaterial;

UCLASS()
class CONTROLRIG_API UControlRigShapeLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FControlRigShapeDefinition DefaultShape;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterial> DefaultMaterial;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterial> XRayMaterial;
    
    UPROPERTY(EditAnywhere)
    FName MaterialColorParameter;
    
    UPROPERTY(EditAnywhere)
    TArray<FControlRigShapeDefinition> Shapes;
    
    UControlRigShapeLibrary();

};

