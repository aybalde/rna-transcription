#include "rna_transcription.h"

namespace rna_transcription {
    char to_rna(char p)
    {
        for (short i = 0; i < 4; i++) {
            if (tab1[i] == p) return tab2[i];
        }
        return ' ';
    }
    string to_rna(string p){
        string rna="";
        short i =0;
       while(p[i] != '\0'){
           rna += to_rna(p[i]) ;
           i++;
       }
        return rna;
    }


}  // namespace rna_transcription
