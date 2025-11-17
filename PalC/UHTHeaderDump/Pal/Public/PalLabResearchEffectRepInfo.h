#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillEffectKeyOption.h"
#include "PalLabResearchEffectRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalLabResearchEffectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalPassiveSkillEffectType EffectType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalPassiveSkillEffectKeyOption EffectOption;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float EffectValue;
    
    PAL_API FPalLabResearchEffectRepInfo();
};

