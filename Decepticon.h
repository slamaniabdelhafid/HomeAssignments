/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon();
    void transform() override;
};

#endif // DECEPTICON_H