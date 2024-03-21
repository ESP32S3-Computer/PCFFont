# PCF Font

## Ues 
```C
#include "PCFFont.h" 

ESP_LOGI(TAG, "%x%c%c%c", pcf_start[0], pcf_start[1], pcf_start[2], pcf_start[3]);
```
## 字体来源
```bash
bdftopcf -p1 -L -o ./unifont-15.1.04-p1L.pcf ./unifont-15.1.04.bdf 
```
