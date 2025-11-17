#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CompositingInputInterface.generated.h"

class UCompositingInputInterfaceProxy;
class UTexture;

UINTERFACE(Blueprintable, MinimalAPI)
class UCompositingInputInterface : public UInterface {
    GENERATED_BODY()
};

class ICompositingInputInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnFrameEnd(UCompositingInputInterfaceProxy* Proxy);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFrameBegin(UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame);
    
    UFUNCTION(BlueprintNativeEvent)
    UTexture* GenerateInput(UCompositingInputInterfaceProxy* Proxy);
    
};

