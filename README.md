# ESML: ExtremelySimpleMarkupLanguage

## !!WORK IN PROGRESS!! NOT AT ALL USABLE AT THE MOMENT!!

This is more of just a practice/proof-of-concept project, not supposed to be useful for any major projects, although you might be able to find a practical use for it.

# Using

The interpereter is a single-header .hpp file. A bare-bones implementation would look something like this:

```cpp
#include "esml.hpp"

int main()
{
    ESML esml;
    esml.ParseESML("SampleBool", "sample.esml");
    return 0;   
}
```

where "SampleBool" is the ESML object you want to access and "sample.esml" is the file. 