#pragma once
#include "CoreMinimal.h"
#include "ERigControlVisibility.h"
#include "RigElementKey.h"
#include "RigUnit_HierarchyAddControl_ProxySettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControl_ProxySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> DrivenControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlVisibility ShapeVisibility;
    
    FRigUnit_HierarchyAddControl_ProxySettings();
};

