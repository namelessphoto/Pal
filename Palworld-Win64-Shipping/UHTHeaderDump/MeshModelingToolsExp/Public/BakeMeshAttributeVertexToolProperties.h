#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeVertexChannel.h"
#include "EBakeVertexOutput.h"
#include "BakeMeshAttributeVertexToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBakeVertexOutput OutputMode;
    
    UPROPERTY(EditAnywhere)
    int32 OutputType;
    
    UPROPERTY(EditAnywhere)
    int32 OutputTypeR;
    
    UPROPERTY(EditAnywhere)
    int32 OutputTypeG;
    
    UPROPERTY(EditAnywhere)
    int32 OutputTypeB;
    
    UPROPERTY(EditAnywhere)
    int32 OutputTypeA;
    
    UPROPERTY(EditAnywhere)
    EBakeVertexChannel PreviewMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSplitAtNormalSeams;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSplitAtUVSeams;
    
    UBakeMeshAttributeVertexToolProperties();

};

