#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalBaseCampItemStackInfo.h"
#include "PalBaseCampItemStackRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampItemStackRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MapObjectConcreteModelInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> AvailablePlayerUIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampItemStackInfo> ItemStackInfos;
    
public:
    PAL_API FPalBaseCampItemStackRepInfo();
};

