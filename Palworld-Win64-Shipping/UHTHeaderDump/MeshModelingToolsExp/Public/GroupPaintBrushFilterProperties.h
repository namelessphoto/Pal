#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMeshGroupPaintBrushAreaType.h"
#include "EMeshGroupPaintBrushType.h"
#include "EMeshGroupPaintInteractionType.h"
#include "EMeshGroupPaintVisibilityType.h"
#include "GroupPaintBrushFilterProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    EMeshGroupPaintBrushType PrimaryBrushType;
    
    UPROPERTY(EditAnywhere)
    EMeshGroupPaintInteractionType SubToolType;
    
    UPROPERTY(EditAnywhere)
    float BrushSize;
    
    UPROPERTY(EditAnywhere)
    EMeshGroupPaintBrushAreaType BrushAreaMode;
    
    UPROPERTY(EditAnywhere)
    bool bHitBackFaces;
    
    UPROPERTY(EditAnywhere)
    int32 SetGroup;
    
    UPROPERTY(EditAnywhere)
    bool bOnlySetUngrouped;
    
    UPROPERTY(EditAnywhere)
    int32 EraseGroup;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyEraseCurrent;
    
    UPROPERTY(EditAnywhere)
    float AngleThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUVSeams;
    
    UPROPERTY(EditAnywhere)
    bool bNormalSeams;
    
    UPROPERTY(EditAnywhere)
    EMeshGroupPaintVisibilityType VisibilityFilter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MinTriVertCount;
    
    UGroupPaintBrushFilterProperties();

};

