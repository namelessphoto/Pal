#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalPlayerPlatformInfo.generated.h"

class UPalPlayerPlatformInfoObject;

USTRUCT()
struct FPalPlayerPlatformInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPalPlayerPlatformInfoObject* Data;
    
    PAL_API FPalPlayerPlatformInfo();
};

