#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_AddWPContent.generated.h"

class UContentBundleDescriptor;

UCLASS(EditInlineNew)
class GAMEFEATURES_API UGameFeatureAction_AddWPContent : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UContentBundleDescriptor* ContentBundleDescriptor;
    
public:
    UGameFeatureAction_AddWPContent();

};

