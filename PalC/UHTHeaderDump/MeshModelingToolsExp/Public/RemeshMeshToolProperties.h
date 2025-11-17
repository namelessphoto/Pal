#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ERemeshSmoothingType -FallbackName=ERemeshSmoothingType
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ERemeshType -FallbackName=ERemeshType
#include "RemeshProperties.h"
#include "RemeshMeshToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URemeshMeshToolProperties : public URemeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 TargetTriangleCount;
    
    UPROPERTY(EditAnywhere)
    ERemeshSmoothingType SmoothingType;
    
    UPROPERTY(EditAnywhere)
    bool bDiscardAttributes;
    
    UPROPERTY(EditAnywhere)
    bool bShowGroupColors;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ERemeshType RemeshType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 RemeshIterations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MaxRemeshIterations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 ExtraProjectionIterations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseTargetEdgeLength;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float TargetEdgeLength;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bReproject;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bReprojectConstraints;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float BoundaryCornerAngleThreshold;
    
    URemeshMeshToolProperties();

};

