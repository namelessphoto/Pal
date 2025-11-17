#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EPalNPCTalkCustomFunctionResult.h"
#include "PalNPCTalkSystemCustomFunctionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalNPCTalkSystemCustomFunctionInterface : public UInterface {
    GENERATED_BODY()
};

class IPalNPCTalkSystemCustomFunctionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCustomFunctionResult(EPalNPCTalkCustomFunctionResult CustomFunctionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCustomFunctionChoseIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddArgument(const FString& Key, const FText& Text);
    
};

