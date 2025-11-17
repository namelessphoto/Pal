#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "AcceptOutputProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UAcceptOutputProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExportSeparatedPiecesAsNewMeshAssets;
    
    UAcceptOutputProperties();

};

