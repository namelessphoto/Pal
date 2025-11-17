#include "LocationServices.h"

ULocationServices::ULocationServices() {
}

bool ULocationServices::StopLocationServices() {
    return false;
}

bool ULocationServices::StartLocationServices() {
    return false;
}

bool ULocationServices::IsLocationAccuracyAvailable(ELocationAccuracy accuracy) {
    return false;
}

bool ULocationServices::InitLocationServices(ELocationAccuracy accuracy, float UpdateFrequency, float MinDistanceFilter) {
    return false;
}

ULocationServicesImpl* ULocationServices::GetLocationServicesImpl() {
    return NULL;
}

FLocationServicesData ULocationServices::GetLastKnownLocation() {
    return FLocationServicesData{};
}

bool ULocationServices::AreLocationServicesEnabled() {
    return false;
}


