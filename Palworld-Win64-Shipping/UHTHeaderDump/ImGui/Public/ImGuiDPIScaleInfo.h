#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "EImGuiDPIScaleMethod.h"
#include "ImGuiDPIScaleInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiDPIScaleInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EImGuiDPIScaleMethod ScalingMethod;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve DPICurve;
    
    UPROPERTY(Config, EditAnywhere)
    bool bScaleWithCurve;
    
public:
    IMGUI_API FImGuiDPIScaleInfo();
};

