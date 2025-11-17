#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "WwiseExternalSourceCookieDefaultMedia.generated.h"

USTRUCT(BlueprintType)
struct WWISESIMPLEEXTERNALSOURCE_API FWwiseExternalSourceCookieDefaultMedia : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExternalSourceCookie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ExternalSourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MediaInfoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MediaName;
    
    FWwiseExternalSourceCookieDefaultMedia();
};

