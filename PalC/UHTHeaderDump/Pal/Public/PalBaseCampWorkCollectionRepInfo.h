#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalBaseCampWorkCollectionRepInfo.generated.h"

class UPalWorkBase;

USTRUCT(BlueprintType)
struct FPalBaseCampWorkCollectionRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalWorkBase* Work;
    
    PAL_API FPalBaseCampWorkCollectionRepInfo();
};

