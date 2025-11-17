#pragma once
#include "CoreMinimal.h"
#include "ETypedElementChildInclusionMethod.h"
#include "TypedElementSelectionOptions.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSelectionOptions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bAllowHidden;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bAllowGroups;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bAllowLegacyNotifications;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bWarnIfLocked;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ETypedElementChildInclusionMethod ChildElementInclusionMethod;
    
public:
    TYPEDELEMENTRUNTIME_API FTypedElementSelectionOptions();
};

