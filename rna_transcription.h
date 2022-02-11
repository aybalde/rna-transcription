#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <iostream>
#include <cstring>

using namespace std;
namespace rna_transcription {
    const char tab1[]={'G','C','T','A'};
    const char tab2[]={'C','G','A','U'};
    char to_rna(char p);
    string to_rna(string p);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H