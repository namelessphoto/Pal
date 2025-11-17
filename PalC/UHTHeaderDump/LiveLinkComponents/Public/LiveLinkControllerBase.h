#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "LiveLinkControllerBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class LIVELINKCOMPONENTS_API ULiveLinkControllerBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FComponentReference ComponentPicker;
    
public:
    ULiveLinkControllerBase();

};

