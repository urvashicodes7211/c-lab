/* In digital world colors are  specified in RGB format, with values of R, G, and B varying on integer scale 
from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, 
Y  and  K  varying  on  a  real  scale  from  0.0  to  1.0.  Convert  RGB  color  to  CMYK  as  per  formula:  - 
White=Max(red/255,green/255,blue/255) - Cyan=(white - red/255)/white - Magenta=(white - 
green/255)/white - Yellow=(white - blue/255)/white - Black=1 - white Note: if RGB values are all 0, then 
the CMY values are all 0 and the K value is 1.*/