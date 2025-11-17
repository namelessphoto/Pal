#pragma once
#include "CoreMinimal.h"
#include "SynesthesiaSpectrumResults.h"
#include "OnSpectrumResultsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpectrumResults, int32, ChannelIndex, const TArray<FSynesthesiaSpectrumResults>&, SpectrumResults);

