#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NamedSlotInterface.h"
#include "WidgetTree.generated.h"

class UWidget;

UCLASS()
class UMG_API UWidgetTree : public UObject, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UWidget* RootWidget;
    
    UPROPERTY(Instanced)
    TMap<FName, UWidget*> NamedSlotBindings;
    
    UWidgetTree();


    // Fix for true pure virtual functions not being implemented
};

