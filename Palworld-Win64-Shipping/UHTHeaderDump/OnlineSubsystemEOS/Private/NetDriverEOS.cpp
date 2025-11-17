#include "NetDriverEOS.h"

UNetDriverEOS::UNetDriverEOS() {
    this->ChannelDefinitions.AddDefaulted(3);
    this->bIsUsingP2PSockets = true;
}


