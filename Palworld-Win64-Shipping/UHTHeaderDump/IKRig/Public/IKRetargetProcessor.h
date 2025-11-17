#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRetargetProcessor.generated.h"

class UIKRigProcessor;

UCLASS()
class IKRIG_API UIKRetargetProcessor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UIKRigProcessor* IKRigProcessor;
    
public:
    UIKRetargetProcessor();

};

