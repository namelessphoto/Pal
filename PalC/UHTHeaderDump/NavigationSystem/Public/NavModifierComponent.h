#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavRelevantComponent.h"
#include "Templates/SubclassOf.h"
#include "NavModifierComponent.generated.h"

class UNavArea;

UCLASS(DefaultConfig, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavModifierComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(EditAnywhere)
    FVector FailsafeExtent;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bIncludeAgentHeight: 1;
    
    UNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
};

