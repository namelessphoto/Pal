#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
#include "ImGuiKeyInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Shift;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Ctrl;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Alt;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Cmd;
    
    IMGUI_API FImGuiKeyInfo();
};

