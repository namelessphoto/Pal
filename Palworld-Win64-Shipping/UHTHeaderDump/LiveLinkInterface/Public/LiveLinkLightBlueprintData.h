#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkLightFrameData.h"
#include "LiveLinkLightStaticData.h"
#include "LiveLinkLightBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkLightStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkLightFrameData FrameData;
    
    FLiveLinkLightBlueprintData();
};

