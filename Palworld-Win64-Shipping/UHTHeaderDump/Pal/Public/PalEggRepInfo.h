#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalIndividualCharacterSaveParameter.h"
#include "PalEggRepInfo.generated.h"

class UPalDynamicPalEggItemDataBase;
class UPalWorkProgress;

USTRUCT(BlueprintType)
struct FPalEggRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 SlotIndex;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalWorkProgress* WorkProgress;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalDynamicPalEggItemDataBase* PalEggData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalIndividualCharacterSaveParameter HatchedCharacterSaveParameter;
    
    PAL_API FPalEggRepInfo();
};

