#include "NetDriverEOSBase.h"

UNetDriverEOSBase::UNetDriverEOSBase() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ChannelDefinitions.AddDefaulted(3);
    this->bIsPassthrough = false;
    this->bIsUsingP2PSockets = false;
}


