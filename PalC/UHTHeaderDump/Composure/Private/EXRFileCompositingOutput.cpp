#include "EXRFileCompositingOutput.h"

UEXRFileCompositingOutput::UEXRFileCompositingOutput() {
    this->FilenameFormat = TEXT("{frame}");
    this->Compression = EExrCompressionOptions::Uncompressed;
}


