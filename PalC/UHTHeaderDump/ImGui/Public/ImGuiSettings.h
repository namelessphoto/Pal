#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "ImGuiCanvasSizeInfo.h"
#include "ImGuiDPIScaleInfo.h"
#include "ImGuiKeyInfo.h"
#include "ImGuiSettings.generated.h"

UCLASS(DefaultConfig, Config=ImGui)
class UImGuiSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ImGuiInputHandlerClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShareKeyboardInput;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShareGamepadInput;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShareMouseInput;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bUseSoftwareCursor;
    
    UPROPERTY(Config, EditAnywhere)
    FImGuiKeyInfo ToggleInput;
    
    UPROPERTY(Config, EditAnywhere)
    FImGuiCanvasSizeInfo CanvasSize;
    
    UPROPERTY(Config, EditAnywhere)
    FImGuiDPIScaleInfo DPIScale;
    
public:
    UImGuiSettings();

};

