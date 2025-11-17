#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalLocationRepInfo.generated.h"

class UPalLocationBase;

USTRUCT()
struct FPalLocationRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalLocationBase* Location;
    
    PAL_API FPalLocationRepInfo();
};

